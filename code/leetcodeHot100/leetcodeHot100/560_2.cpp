//#include <iostream>
//using namespace std;
//#include <unordered_set>
//#include <unordered_map>
//#include <algorithm>
//
//
//class Solution {
//public:
//    int subarraySum(vector<int>& nums, int k) {
//        unordered_map<int, int> mp;
//        mp[0] = 1;
//        int count = 0, pre = 0;
//        for (auto& x : nums) {
//            // ����nums���飬��ÿһ���ǰ׺��
//            pre += x;
//            // �ߴ�߲鿴mp�����mp�д���keyΪ[��ǰǰ׺��-k],
//            // ˵��֮ǰ���ֹ�ǰ׺�����㣺prefixSum[j]-prefixSum[i-1]=k
//            if (mp[pre-k]>0) {
//                // ������ǰ׺�͵ĸ����ۼӸ�count
//                count += mp[pre - k];
//            }
//            // ͳ�Ƹ�ǰ׺�ͳ��ֵĴ������Լ�ֵ�Դ����ϣ��mp
//            mp[pre]++;
//        }
//        return count;
//    }
//};
//
//
//
//int main()
//{
//
//
//    system("pause");
//    return 0;
//}
