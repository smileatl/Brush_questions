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
//		//lһ��ʼ������ߣ�r�����ұ�
//		int l = 0, r = numbers.size() - 1, sum;
//		while (l < r) {
//			sum = numbers[l] + numbers[r];
//			if (sum == target) { //����ָ��ָ��Ԫ�صĺ͵��ڸ���ֵ������
//				break;
//			}
//			if (sum < target) { //���С�ˣ���ָ��������
//				++l;
//			}
//			else { //������ˣ���ָ��������
//				--r;
//			}
//		}
//		return vector<int>{ l + 1,r + 1 }; //��Ϊ�±��1��ʼ�����1
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