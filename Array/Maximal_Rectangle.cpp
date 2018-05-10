#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution
{
public:
	//��ά�������ҵ��������1�ľ������
	int maxRectangle(vector<vector<char>> &nums)
	{
		if (nums.empty() || nums[0].empty())
			return 0;
		int m = nums.size();//������
		int n = nums[0].size();//����
		////֮ͬǰֱ��ͼ��������һ������ת��Ϊֱ��ͼ
		vector<vector<int>> height(m, vector<int>(n, 0));//Ƕ�׵�һ��vector��ʼ�����൱�ڳ�ʼ����һ��m*n��0����
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
	int findlargestrectangle(vector<int> &high)//����ֱ��ͼ�ĺ���
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
//	////char a4[] = { '0','1', '0', '0' };///���εľ�������
//	vector< vector<char> > res;//�ڶ���> >�м�Ŀո�Ҫʡ�ԣ����ɺ�ϰ��
//	res.resize(4);//4�У���ʼ������Ĵ�С
//	//res[0].resize(0);
//	for (int k = 0; k < 4; ++k) {
//		res[k].resize(4);//ÿ��Ϊ4��
//	}
//
//	for (int i = 0; i < 4; i++) {
//		for(int j=0;j<4;j++)
//		{
//			cin >> res[i][j];//������������
//		}
//	}
//	
//	Solution A;
//	int max=A.maxRectangle(res);
//
//	return 0;
//
//}