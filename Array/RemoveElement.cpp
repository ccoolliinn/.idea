#include<iostream>
using namespace std;
class Solution
{
public:
	int removeElement(int A[], int n, int elem)
	{
		int i = 0;
		int j = 0;
		cout << "\n�µ������ǣ�" ;
		for ( i = 0; i < n; i++)
		{
			if (A[i] == elem)
				continue;
			A[j] = A[i];
			cout << A[j] << " ";
			j++;//��j����¼����ı仯
		}
		return j;
		}
	

private:

};
