#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
	int NumOfOne(uint32_t m)
	{
		int count = 0;
		while (m>0)
		{
			count += m & 1;//��λ�� ��1�Ļ� ����+1
			m >>=1;
		}
		return count;
	}
};
//int main()
//{
//	int a;
//	cin >> a;
//	Solution A;
//	int e = A.NumOfOne(a);
//	return 0;
//}