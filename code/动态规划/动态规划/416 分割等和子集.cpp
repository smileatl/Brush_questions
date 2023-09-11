//#include <iostream>
//using namespace std;
//#include <vector>
//#include <numeric>
//
//class Solution {
//public:
//    bool canPartition(vector<int>& nums) {
//        int sum = 0;
//
//        // dp[i]�е�i��ʾ�������ܺ�
//        // ��Ŀ��˵��ÿ�������е�Ԫ�ز��ᳬ�� 100������Ĵ�С���ᳬ�� 200
//        // �ܺͲ������20000���������ֻ��Ҫ����һ�룬����10001��С�Ϳ�����
//        vector<int> dp(10001, 0);
//        for (int i = 0; i < nums.size(); i++) {
//            sum += nums[i];
//        }
//        // Ҳ����ʹ�ÿ⺯��һ�����
//        // int sum = accumulate(nums.begin(), nums.end(), 0);
//        if (sum % 2 == 1) return false;
//        int target = sum / 2;
//
//        // ��ʼ 01����
//        for (int i = 0; i < nums.size(); i++) {
//            for (int j = target; j >= nums[i]; j--) { // ÿһ��Ԫ��һ���ǲ����ظ����룬���ԴӴ�С����
//                dp[j] = max(dp[j], dp[j - nums[i]] + nums[i]);
//            }
//        }
//        // �����е�Ԫ�����ÿ��Դճ��ܺ�target
//        if (dp[target] == target) return true;
//        return false;
//    }
//};
//
//int main()
//{
//    vector<int> nums;
//    Solution ss;
//    ss.canPartition(nums);
//
//
//	system("pause");
//	return 0;
//}