#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
	void merge(int A[], int m, int B[], int n)//��Ϊ���������飬��˴Ӻ���ǰ����
	{
		int i = m + n - 1;
		int j = m-1;
		int k = n - 1;
		while (i>=0)
		{
			if (j >= 0 && k >= 0)
			{
				if (A[j] > B[k])
				{	A[i] = A[j];
				j--;
			}
				else
				{
					A[i] = B[k];
						k--;
				}
	}
			else if (j>=0)
			{
				A[i] = A[j];
				j--;
			}

			else if(k >=0) {
					A[i] = B[k];
					k--;
				}
			i--;
		}
		
	}
	
};
int main()
{
	Solution C;
	int A[10] = { 1,3,5,7,9 };
	int B[4] = { 2,4,6,8 };
	C.merge(A, 5, B, 4);
	return	0;
}
