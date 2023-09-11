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
//	} while (getchar() != '\n'); //��⵽���м�ʱ��ֹͣ����
//	return ivec;
//}
//
//void printVector(vector<int>& v) {
//	for (int i = 0; i < v.size(); ++i) {
//		cout << v[i] << " ";
//	}
//	cout << endl;
//}
//
////��������
////����ҿ�
//void quick_sort(vector<int>& nums, int l, int r) {
//	//��������СΪ1������������
//	if (l + 1 >= r) {
//		return;
//	}
//	//��Ϊ�������nums.size()����Ҫ��1
//	int first = l, last = r - 1, key = nums[first];
//	//ȷ�����ĵ�λ��Ϊfirst
//	while (first < last) {
//		while (first < last && nums[last] >= key) {
//			--last;
//		}
//		//�Ӻ���ǰ���ҵ���keyֵС�������ᵽfirst��λ��
//		nums[first] = nums[last];
//		while (first < last && nums[first] <= key) {
//			++first;
//		}
//		//��ǰ�����ҵ���keyֵ��������ᵽ�ղſճ�����last��λ��
//		nums[last] = nums[first];
//	}
//	//��keyֵ����firstλ����ʱ��first=last
//	nums[first] = key;
//	//�Ե��ӱ�ݹ�����
//	quick_sort(nums, l, first);
//	//�Ը��ӱ�ݹ�����
//	quick_sort(nums, first + 1, r);
//}
//
////�鲢����
//void merge_sort(vector<int>& nums, int l, int r, vector<int>& temp) {
//	if (l + 1 >= r) {
//		return;
//	}
//	// divide
//	int m = l + (r - l) / 2;
//	merge_sort(nums, l, m, temp);
//	merge_sort(nums, m, r, temp);
//	// conquer
//	int p = l, q = m, i = l;
//	
//	//�������������кϲ���һ����������
//	while (p < m || q < r) {
//		if (q >= r || (p < m && nums[p] <= nums[q])) {
//			temp[i++] = nums[p++];
//		}
//		else {
//			temp[i++] = nums[q++];
//		}
//	}
//	for (i = l; i < r; ++i) {
//		nums[i] = temp[i];
//	}
//}
//
////��������
//void insertion_sort(vector<int>& nums, int n) {
//	for (int i = 0; i < n; ++i) {
//		for (int j = i; j > 0 && nums[j] < nums[j - 1]; --j) {
//			swap(nums[j], nums[j - 1]);
//		}
//	}
//}
//
////ð������
//void bubble_sort(vector<int>& nums, int n) {
//	bool swapped;
//	for (int i = 1; i < n; ++i) {
//		swapped = false;
//		for (int j = 1; j < n - i + 1; ++j) {
//			if (nums[j] < nums[j - 1]) {
//				swap(nums[j], nums[j - 1]);
//				swapped = true;
//			}
//		}
//		if (!swapped) {
//			break;
//		}
//	}
//}
//
////ѡ������ 
//void selection_sort(vector<int>& nums, int n) {
//	int mid;
//	for (int i = 0; i < n - 1; ++i) {
//		mid = i;
//		for (int j = i + 1; j < n; ++j) {
//			if (nums[j] < nums[mid]) {
//				mid = j;
//			}
//		}
//		swap(nums[mid], nums[i]);
//	}
//}
//
//int main()
//{
//	vector<int> nums = { 1,3,5,7,2,6,4,8,9,2,8,7,6,0,3,5,9,4,1,0 };
//	vector<int> temp(nums.size());
//	//sort(nums.begin(), nums.end());
//	//quick_sort(nums, 0, nums.size());
//	merge_sort(nums, 0, nums.size(), temp);
//
//
//	printVector(nums);
//
//
//	system("pause");
//	return 0;
//}