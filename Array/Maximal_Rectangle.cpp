#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution
{
public:
	//二维数组中找到面积最大的1的矩形面积
	int maxRectangle(vector<vector<char>> &nums)
	{
		if (nums.empty() || nums[0].empty())
			return 0;
		int m = nums.size();//总行数
		int n = nums[0].size();//列数
		////同之前直方图找最大矩形一样，先转化为直方图
		vector<vector<int>> height(m, vector<int>(n, 0));//嵌套的一个vector初始化，相当于初始化了一个m*n的0矩阵
		for(int i=0;i<m;i++){
			for (int j = 0; j < n; j++)
			{
				if (nums[i][j] == '0') {
					height[i][j] = 0;
				}
				else
				{
					height[i][j] = (i == 0) ? 1 : height[i - 1][j] + 1;
				}
			}
		}
		int maxera = 0;
		for (int i = 0; i < m; i++)
		{
			maxera = max(maxera, findlargestrectangle(height[i]));
		}
		return maxera;

	}
	int findlargestrectangle(vector<int> &high)//调用直方图的函数
	{
		int size = high.size();
		if (size == 0)
			return 0;
		if (size == 1)
		{
			return high[0];
		}
		vector<int> s;
		high.push_back(0);
		int sum = 0;
		int i = 0;
		while (i<high.size())
		{
			if (s.empty() || high[i] > high[s.back()])
			{
				s.push_back(i);
				i++;
			}
			else
			{
				int t = s.back();
				s.pop_back();
				sum = max(sum, high[t] * (s.empty() ? i : i - s.back() - 1));
			}
		}
		return sum;
	}
};



//int main()
//{
//	
//	////char a1[] = { '0','0', '0', '0' };
//	////char a2[] = { '1','1', '1', '1' };
//	////char a3[] = { '1','1', '1', '0' };
//	////char a4[] = { '0','1', '0', '0' };///矩形的具体内容
//	vector< vector<char> > res;//第二个> >中间的空格不要省略，养成好习惯
//	res.resize(4);//4行，初始化矩阵的大小
//	//res[0].resize(0);
//	for (int k = 0; k < 4; ++k) {
//		res[k].resize(4);//每行为4列
//	}
//
//	for (int i = 0; i < 4; i++) {
//		for(int j=0;j<4;j++)
//		{
//			cin >> res[i][j];//输入矩阵的内容
//		}
//	}
//	
//	Solution A;
//	int max=A.maxRectangle(res);
//
//	return 0;
//
//}