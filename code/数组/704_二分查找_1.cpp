//#include <iostream>
//using namespace std;
//#include <vector>
//
//class Solution {
//public:
//    int search(vector<int>& nums, int target) {
//        int left = 0;
//        int right = nums.size(); // ����target������ҿ������������[left, right)
//        while (left < right) { // ��Ϊleft == right��ʱ����[left, right)����Ч�Ŀռ䣬����ʹ�� <
//            int middle = left + ((right - left) >> 1);
//            if (nums[middle] > target) {
//                right = middle; // target �������䣬��[left, middle)��
//            }
//            else if (nums[middle] < target) {
//                left = middle + 1; // target �������䣬��[middle + 1, right)��
//            }
//            else { // nums[middle] == target
//                return middle; // �������ҵ�Ŀ��ֵ��ֱ�ӷ����±�
//            }
//        }
//        // δ�ҵ�Ŀ��ֵ
//        return -1;
//    }
//};
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}