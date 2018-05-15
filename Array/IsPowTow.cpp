#include<vector>
#include<iostream>
using namespace std;
class Solution {
public://判断一个数是不是2的幂
	bool IsPowTwo(int m)
	{
		if (m < 0) return false;
		//问题的关键可以看做：2的幂的二进制表达式中只能有0个或1个1
		//所以让输入值m按位与& 与1进行比较
		return (m&m - 1) == 0;//巧妙的办法,还是利用只能有1个1存在  
	}
	};
//int main()
//{
//	int a;
//	cin >> a;
//	Solution A;
//	bool e=A.IsPowTwo(a);
//	return 0;
//}