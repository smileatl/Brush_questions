//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <numeric>
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
//	int candy(vector<int>& ratings) {
//		vector<int> candyNum;
//		int len = ratings.size(); //��ȡ��������
//		//�����к��ӵ��ǹ�����ʼ��Ϊ1
//		for (int i = 0; i < len; ++i) {
//			candyNum.push_back(1); 
//		}
//		//�ȴ������ұ���һ�飬����ұߺ��ӵ����ֱ���ߵĸߣ�
//		//���ұߺ��ӵ��ǹ�������Ϊ��ߺ��ӵ��ǹ����� 1��
//		for (int i = 1; i < len; ++i) {
//			if (ratings[i] > ratings[i - 1]) {
//				candyNum[i] = candyNum[i - 1] + 1;
//			}
//		}
//		//�ٴ����������һ�飬�����ߺ��ӵ����ֱ��ұߵĸߣ�
//		//����ߺ��ӵ�ǰ���ǹ����������ұߺ��ӵ��ǹ�����
//		//����ߺ��ӵ��ǹ�������Ϊ�ұߺ��ӵ��ǹ����� 1��
//		for (int i = len - 1; i >= 1; --i) {
//			if (ratings[i - 1] > ratings[i] && candyNum[i-1]<=candyNum[i]) {
//				candyNum[i - 1] = candyNum[i] + 1;
//			}
//		}
//		//����candyNum�������ǹ�������
//		int total = accumulate(candyNum.begin(), candyNum.end(), 0);
//		return total;
//	}
//};
//
//int main()
//{
//	vector<int> ratings;
//	ratings = createVector();
//
//	Solution ss;
//	cout << ss.candy(ratings) << endl;
//
//	system("pause");
//	return 0;
//}
//
