#include<vector>
#include<iostream>
////用位运算来解决问题 异或比加法求和CPU所消耗的时间要少
//注意 ^ 异或 是按位异或~~
using namespace std;
class Solution {
public:
	int findMissNum(vector<int> &nums)
	{
		int x = 0;
		for (int i = 0; i < nums.size(); i++)
			x = x ^ (i +1) ^ nums[i];//关键一步，异或的过程
		return x;
		//实际用到了异或的一些巧妙性质


		/*参与运算的两个值，如果两个相应位相同，则结果为0，否则为1。即：
			0 ^ 0 = 0， 1 ^ 0 = 1， 0 ^ 1 = 1， 1 ^ 1 = 0

			0 ^ 0 = 0, 0 ^ 1 = 1 可以看出，0异或任何数＝任何数
			1 ^ 0 = 1, 1 ^ 1 = 0 可以看出 1异或任何数 = 任何数取反
			任何数异或自己＝把自己置0

			数a两次异或同一个数b（a = a^b^b）仍然为原值a.*/

		
	}
};
//int main()
//{
//	vector<int> v;
//	int A[] = { 0,1,2,3,5 };
//	for (int i = 0; i < 5; i++)
//		v.push_back(A[i]);
//	Solution B;
//	int b=B.findMissNum(v);
//	return 0;
//}