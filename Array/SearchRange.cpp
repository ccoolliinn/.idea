////寻找包含目标值的范围起始下标
//要求复杂度为O(log n)  因此采用二分法
#include<vector>
#include<iostream>
using namespace std;
class Solution
{
public:
	vector<int> SearchRange(int A[], int n, int target)
	{
		if (n == 0)
			return vector<int>({ -1,-1 });
		vector<int> v;
		int low = 0;
		int high = n - 1;
		//第一次二分找出左边界
		while (low<=high)
		{
			int mid = low + (high - low) / 2;
			if (A[mid]>=target)
			{
				high = mid - 1;
			}
			else
			{
				low = mid + 1;
			}

		}
		if (low<n &&A[low]==target)
		{
			v.push_back(low);
		}
		else {
			return vector<int>({ -1,-1 });
		}
		low = low;
		high = n - 1;
		//第二次二分找出右边界
		while (low<=high)
		{
			int mid = low + (high - low) / 2;
			if (A[mid] >target)
			{
				high = mid - 1;
			}
			else
			{
				low = mid + 1;
			}
		}
		v.push_back(high);
		return v;
	}
};
int main()
{
	Solution A;
	int B[] = { 5,7,7,6,8,8,10 };
	int target = 6;
	int n = sizeof(B) / sizeof(B[0]);
	vector<int> v;
	v=A.SearchRange(B, n, target);
	return 0;
}