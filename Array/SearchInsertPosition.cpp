#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
	int SearchPosition(int A[], int target,int n)
	{
		//¶þ·Ö·¨//
		int size = sizeof(A) / sizeof(A[0]);
		if (size == 0)
			return 0;
		int low = 0;
		int high = n - 1;
		while (low <= high)
		{
			int mid = low + (high - low) / 2;
			if (A[mid] == target)
				return mid;
			else if (A[mid] < target)
				low = mid + 1;
			else
			{
				high = mid - 1;
			}
		}
		return low;
	}
};
////int main()
////{
////	Solution A;
////	int B[] = { 1,3,5,6 };
////	int target = 2;
////	int n = sizeof(B) / sizeof(B[0]);
////	int v;
////	v = A.SearchPosition(B, target,n);
////	return 0;
////}