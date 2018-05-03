#include<vector>
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
class Solution {
public:
	vector<int> TwoSum(vector<int> &numbers, int target) {
		//�������⣬���ȿ��Ǳ߽�����
		vector<int> res;
		if (numbers.size()<=1)
		{
			return res;
		}
		//�½�һ��map<key, value>ģʽ�����洢numbers�����Ԫ�غ�index
		unordered_map<int, int> mymap;
		for (int i = 0; i < numbers.size(); i++)
		{
			mymap[numbers[i]] = i;
		}
		for (int j = 0; j < numbers.size(); j++) {
			int rest_val = target - numbers[j];
			if (mymap.find(rest_val)!=mymap.end())//find�������ң���������򷵻ظ�����λ�õ����������򷵻�end
			{
				int index = mymap[rest_val];
				if (index == j)
					continue;
				if (index < j)
				{
					res.push_back(index + 1);
					res.push_back(j + 1);
					return res;
				}
				else
				{
					res.push_back(j +1);
					res.push_back(index +1);
					return res;
				}
			}
		}

	}
};

int main()
{
	vector<int> numbers;
	Solution A;
	numbers.push_back(2);
	numbers.push_back(2);
	numbers.push_back(11);
	numbers.push_back(15);
	vector<int> B;
	B=A.TwoSum(numbers, 4);

}