#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	//用二维数组来存储三角形///
	//找到规律就很好解决了///
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> vals;
		vals.resize(numRows);
		for (int i = 0; i < numRows; i++) {
			vals[i].resize(i + 1);
			vals[i][0] = 1;
			vals[i][vals[i].size() - 1] = 1;
			for (int j = 1; j < vals[i].size() - 1; j++) {
				vals[i][j] = vals[i - 1][j - 1] + vals[i - 1][j];
			}
		}

		return vals;
	}
};
