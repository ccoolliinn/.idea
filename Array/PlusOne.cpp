#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
	vector<int> plusone(vector<int> &digits) {
		vector<int> res(digits.size(), 0);
		int one = 1;
		int sum = 0;
		for (int i = digits.size() - 1; i >= 0; i--)
		{
			sum = one + digits[i];
			one = sum / 10;//��������one ������  С��10��������10Ϊ0������10��Ϊ1  ��Ҫ��λ
			res[i] = sum % 10;//����10�����ֶ�10������Ǳ���
		}
		if (one>0)
		{
			res.insert(res.begin(), one);//�ж����λ�Ƿ�ӵ���10
		}
		return res;
	}
};

