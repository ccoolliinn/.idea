#include<vector>
#include<iostream>
////��λ������������� ���ȼӷ����CPU�����ĵ�ʱ��Ҫ��
//ע�� ^ ��� �ǰ�λ���~~
using namespace std;
class Solution {
public:
	int findMissNum(vector<int> &nums)
	{
		int x = 0;
		for (int i = 0; i < nums.size(); i++)
			x = x ^ (i +1) ^ nums[i];//�ؼ�һ�������Ĺ���
		return x;
		//ʵ���õ�������һЩ��������


		/*�������������ֵ�����������Ӧλ��ͬ������Ϊ0������Ϊ1������
			0 ^ 0 = 0�� 1 ^ 0 = 1�� 0 ^ 1 = 1�� 1 ^ 1 = 0

			0 ^ 0 = 0, 0 ^ 1 = 1 ���Կ�����0����κ������κ���
			1 ^ 0 = 1, 1 ^ 1 = 0 ���Կ��� 1����κ��� = �κ���ȡ��
			�κ�������Լ������Լ���0

			��a�������ͬһ����b��a = a^b^b����ȻΪԭֵa.*/

		
	}
};
//int main()
//{
//	vector<int> v;
//	int A[] = { 0,1,2,3,5 };
//	for (int i = 0; i < 5; i++)
//		v.push_back(A[i]);
//	Solution B;
//	int b=B.findMissNum(v);
//	return 0;
//}