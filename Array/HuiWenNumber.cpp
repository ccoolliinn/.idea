////判断一个数字是否是回文数  比如 121 是回文，122 不是
////注意 负数不是回文 0是回文
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int IsHuiwenNumber(int x) 
	{
		if (x < 0)
			return false;
		else if (x==0)
		{
			return true;
		}
		else
		{
			int tmp = x;
			int y = 0;
			while (x!=0)
			{
				y = y * 10 + x % 10;
				x = x / 10;
			}
			if (y==tmp)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
};
//int main()
//{
//	Solution A;
//	int a;
//	cin >> a;
//	int b=A.IsHuiwenNumber(a);
//	cout << b;
//}