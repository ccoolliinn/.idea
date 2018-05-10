#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
	vector<int> plusone(vector<int> &digits) {
		vector<int> res(digits.size(), 0);
		int one = 1;
		int sum = 0;
		for (int i = digits.size() - 1; i >= 0; i--)
		{
			sum = one + digits[i];
			one = sum / 10;//整形数据one 负责标记  小于10的数除以10为0，等于10则为1  需要进位
			res[i] = sum % 10;//不到10的数字对10求余就是本身
		}
		if (one>0)
		{
			res.insert(res.begin(), one);//判断最高位是否加到了10
		}
		return res;
	}
};

