#include<iostream>
using namespace std;
class Solution
{
public:
	int removeDuplicate(int A[], int n)
	{	
		if (n==0||n==1)
		{	
			return n;
		}
		int j = 0;
		cout << "\n新的数组是：";
		cout << A[j]<<" ";
		for (int i = 0; i < n; i++)
		{
			if (A[j] != A[i])
			{
				A[++j] = A[i];
				cout << A[j] << " ";
			}

		}
		return j + 1;
	}
};

