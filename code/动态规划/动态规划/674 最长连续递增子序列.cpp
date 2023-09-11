#include <iostream>
using namespace std;
#include <vector>
#include <numeric>
#include <unordered_set>


class Solution {
public:
	int findLengthOfLCIS(vector<int>& nums) {
		if (nums.size() <= 1) return nums.size();
		int result = 1;
		vector<int> dp(nums.size(), 1);
		for (int i = 1; i < nums.size(); i++) {
			if (nums[i] > nums[i - 1]) {
				dp[i] = dp[i - 1] + 1;
			}
			if (dp[i] > result) result = dp[i];
		}
		return result;
	}
};


int main()
{


	system("pause");
	return 0;
}