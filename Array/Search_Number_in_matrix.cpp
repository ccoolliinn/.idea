//	给定一个矩阵和一个特定值，要求写出一个高效的算法在这个矩阵中快 速的找出是否这个给定的值存在.	但是这个矩阵有以下特征.
//1.	对于每一行，数值是从左到右从小到大排列的. 2.	对于每一列，数值是从上到下从小到大排列的.
//暴力搜肯定可以，但不高效，时间复杂度是O(n^2)，根据排序规律，下面复杂度为O(n)
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
	//固定右上角的数字，向左向下搜索
	int SearchNum(vector<vector<int> > &matrix,int target)
	{
		if (matrix.size()==0 ||matrix[0].size()==0)
		{
			return 0;
		}
		int row = 0;
		int col = matrix[0].size() - 1;
		while (row<matrix.size() && col>=0)
		{
			if (target < matrix[row][col])
				--col;
			else if (target > matrix[row][col])
				++row;
			else
				return 1;
		}
		return 0;

	}
};
///////////////////main函数测试部分//////////////////////
//int main()
//{
//	Solution A;
//	vector<vector<int> > matrix;
//	int target;
//	matrix.resize(3);
//	for (int k = 0; k < 3; ++k) {
//			matrix[k].resize(4);//每行为4列
//		}
//	cout << "请输入数字矩阵：" << endl;
//	for (int i = 0; i < matrix.size();i++)
//		for (int j = 0; j < matrix[0].size(); j++)
//			cin >> matrix[i][j];
//	cout << "数字矩阵是：" << endl;
//	for (int i = 0; i < matrix.size(); i++)
//		for (int j = 0; j < matrix[0].size(); j++) {
//			cout << matrix[i][j] << " ";
//			if (j == matrix[0].size() - 1)
//				cout << endl;
//		}
//	cout << "请输入目标数：" << endl;
//	cin >> target;
//	cout << "目标是否在矩阵中：(0代表不在，1代表在)：" << endl;
//int b=	A.SearchNum(matrix, target);
//cout << b << endl;
//}