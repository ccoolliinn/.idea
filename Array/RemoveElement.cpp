#include<iostream>
using namespace std;
class Solution
{
public:
	int removeElement(int A[], int n, int elem)
	{
		int i = 0;
		int j = 0;
		cout << "\n新的数组是：" ;
		for ( i = 0; i < n; i++)
		{
			if (A[i] == elem)
				continue;
			A[j] = A[i];
			cout << A[j] << " ";
			j++;//用j来记录数组的变化
		}
		return j;
		}
	

private:

};
