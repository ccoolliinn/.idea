#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
class Solution
{
public:
	//////可以采用二分法////////默认数组是无重复元素的//////
	int findMin(vector<int> &nums)
	{
		int size = nums.size();
		if (size == 0)
			return 0;
		else if(size==1)
		{
			return nums[0];
		}
		else if (size == 2)
		{
			return min(nums[0], nums[1]);
		}
		
			int start = 0;
			int end = nums.size() - 1;
			while (start<end-1)
			{
				if (nums[start] < nums[end])
					return nums[start];
				int mid = start + (start + end) / 2;
				if (nums[mid] > nums[start])
					start = mid;
				else if (nums[mid]<nums[start])
				{
					end = mid;
				}

			}

		
		return min(nums[start], nums[end]);

				}
};
int main()
{
	vector<int> numbers;
	Solution A;
	numbers.push_back(6);
	numbers.push_back(7);
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	int min;
	min = A.findMin(numbers);
	printf("%d", min);

}