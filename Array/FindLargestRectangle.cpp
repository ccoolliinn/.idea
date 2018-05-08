#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution
{
public:
	int findlargestrectangle(vector<int> &high)
	{
		int size = high.size();
		if (size == 0)
			return 0;
		if (size==1)
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
  				sum = max(sum, high[t] * (s.empty() ? i: i - s.back() -1));
			}
 		}
		return sum;
	}
};
int main()
{
	vector<int> numbers;
	Solution A;
	numbers.push_back(2);
	numbers.push_back(1);
	numbers.push_back(5);
	numbers.push_back(6);	
	numbers.push_back(3);
	numbers.push_back(3);
	int sum;
	sum = A.findlargestrectangle(numbers);
	printf("%d", sum);

}