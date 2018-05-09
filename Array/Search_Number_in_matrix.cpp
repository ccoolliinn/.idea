//	����һ�������һ���ض�ֵ��Ҫ��д��һ����Ч���㷨����������п� �ٵ��ҳ��Ƿ����������ֵ����.	���������������������.
//1.	����ÿһ�У���ֵ�Ǵ����Ҵ�С�������е�. 2.	����ÿһ�У���ֵ�Ǵ��ϵ��´�С�������е�.
//�����ѿ϶����ԣ�������Ч��ʱ�临�Ӷ���O(n^2)������������ɣ����渴�Ӷ�ΪO(n)
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
	//�̶����Ͻǵ����֣�������������
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
///////////////////main�������Բ���//////////////////////
//int main()
//{
//	Solution A;
//	vector<vector<int> > matrix;
//	int target;
//	matrix.resize(3);
//	for (int k = 0; k < 3; ++k) {
//			matrix[k].resize(4);//ÿ��Ϊ4��
//		}
//	cout << "���������־���" << endl;
//	for (int i = 0; i < matrix.size();i++)
//		for (int j = 0; j < matrix[0].size(); j++)
//			cin >> matrix[i][j];
//	cout << "���־����ǣ�" << endl;
//	for (int i = 0; i < matrix.size(); i++)
//		for (int j = 0; j < matrix[0].size(); j++) {
//			cout << matrix[i][j] << " ";
//			if (j == matrix[0].size() - 1)
//				cout << endl;
//		}
//	cout << "������Ŀ������" << endl;
//	cin >> target;
//	cout << "Ŀ���Ƿ��ھ����У�(0�����ڣ�1������)��" << endl;
//int b=	A.SearchNum(matrix, target);
//cout << b << endl;
//}