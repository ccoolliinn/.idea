#include<vector>
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
class Solution {
public:
	vector<int> TwoSum(vector<int> &numbers, int target) {
		//数组问题，首先考虑边角问题
		vector<int> res;
		if (numbers.size()<=1)
		{
			return res;
		}
		//新建一个map<key, value>模式的来存储numbers里面的元素和index
		unordered_map<int, int> mymap;
		for (int i = 0; i < numbers.size(); i++)
		{
			mymap[numbers[i]] = i;
		}
		for (int j = 0; j < numbers.size(); j++) {
			int rest_val = target - numbers[j];
			if (mymap.find(rest_val)!=mymap.end())//find函数查找，有这个数则返回该数据位置迭代器，无则返回end
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

