//#include <iostream>
//using namespace std;
//#include <vector>
//
//class Solution {
//public:
//    int minSubArrayLen(int target, vector<int>& nums) {
//        int len = nums.size();
//        int ans =INT_MAX;
//        int sum = 0; // ����������ֵ֮��
//        int l = 0; // ����������ʼλ��
//        for (int r = 0; r < len; ++r) {
//            sum += nums[r];
//            // ע������ʹ��while��ÿ�θ��� l����ʼλ�ã��������ϱȽ��������Ƿ��������
//            while (sum >= target) {
//                int sublength = (r - l + 1); // ȡ�����еĳ���
//                ans = ans < sublength ? ans : sublength;
//                sum -= nums[l++]; // �������ֳ��������ڵľ���֮�������ϱ��l�������е���ʼλ�ã�
//            }
//        }
//        // ansû�б���ֵ�Ļ����ͷ���0��˵��û�з���������������
//        return ans == INT_MAX ? 0 : ans;
//    }
//};
//
//int main()
//{
//
//
//    system("pause");
//    return 0;
//}