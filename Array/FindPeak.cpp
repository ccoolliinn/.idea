#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
	vector<int> FindPeak(vector<int> &A)
	{
		int i = 0;
		vector<int> v;
		for (i = 1; i < A.size(); i++)
		{
			if (A[i] > A[i - 1] && A[i] > A[i + 1])
				v.push_back(i);
		}
		return v;
	}
};

////int main()
////{
////	Solution B;
////	int C[] = { 1,2,3,1,4,2,5,3 };
////	vector<int> A;
////	for (int i =0; i <8 ; i++)
////	{
////			A.push_back(C[i]);
////	}
////	vector<int> v; 
////	v=B.FindPeak(A);
////	return 0;
////}
//也可以采用二分法//
////class	Solution {
////public:				
////	int	findPeakElement(const	vector<int>	&num) {
////	int	n = num.size();								
////	if (n == 1) {
////		return	0;
////	}
////	int	start = 0;								
////	int	end = n - 1;								
////	int	mid = 0;
////	while (start <= end) { 
////		mid = start + (end - start) / 2;												
////		if ((mid == 0 || num[mid] >= num[mid - 1]) && (mid == n - 1 || num[mid] >= num[mid + 1])) 
////		{ 
////			return	mid; 
////		} 
////		else	if (mid	>	0 && num[mid - 1]	>	num[mid])
////		{ 
////			end = mid - 1; 
////		} 
////		else { 
////			start = mid + 1; 
////		} 
////	}								
////	return	mid;
////}
////};