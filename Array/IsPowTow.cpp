#include<vector>
#include<iostream>
using namespace std;
class Solution {
public://�ж�һ�����ǲ���2����
	bool IsPowTwo(int m)
	{
		if (m < 0) return false;
		//����Ĺؼ����Կ�����2���ݵĶ����Ʊ��ʽ��ֻ����0����1��1
		//����������ֵm��λ��& ��1���бȽ�
		return (m&m - 1) == 0;//����İ취,��������ֻ����1��1����  
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