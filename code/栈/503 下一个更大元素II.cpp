#include <iostream>
using namespace std;
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>

class Solution {
public:
	vector<int> nextGreaterElements(vector<int>& nums) {
		vector<int> result(nums.size(), -1);
		stack<int> st;
		for (int i = 0; i < nums.size() * 2; i++) {
			while(!st.empty() && nums[i % nums.size()] > nums[st.top()]) {
				result[st.top()] = nums[i % nums.size()];
				st.pop();
			}
			st.push(i % nums.size());
		}
		return result;
	}
};

int main()
{


	system("pause");
	return 0;
}