//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//vector<int> createVector() {
//	vector<int> ivec;
//	int num;
//	do
//	{
//		cin >> num;
//		ivec.push_back(num);
//	} while (getchar() != '\n');
//	return ivec;
//}
//
//void printVector(vector<int>& v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& numbers, int target) {
//		//l一开始在最左边，r在最右边
//		int l = 0, r = numbers.size() - 1, sum;
//		while (l < r) {
//			sum = numbers[l] + numbers[r];
//			if (sum == target) { //两个指针指向元素的和等于给定值，结束
//				break;
//			}
//			if (sum < target) { //如果小了，左指针往右移
//				++l;
//			}
//			else { //如果大了，右指针往左移
//				--r;
//			}
//		}
//		return vector<int>{ l + 1,r + 1 }; //因为下标从1开始，多加1
//	}
//};
//
//
//int main()
//{
//	vector<int> numbers;
//	numbers = createVector();
//	int target;
//	cin >> target;
//
//	Solution ss;
//	vector<int> result = ss.twoSum(numbers, target);
//	cout << result[0] <<" "<<result[1] << endl;;
//
//	system("pause");
//	return 0;
//}