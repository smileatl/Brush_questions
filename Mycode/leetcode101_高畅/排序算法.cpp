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
//	} while (getchar() != '\n'); //检测到换行键时，停止输入
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
////快速排序
////左闭右开
//void quick_sort(vector<int>& nums, int l, int r) {
//	//如果数组大小为1，则无需排序
//	if (l + 1 >= r) {
//		return;
//	}
//	//因为传入的是nums.size()所以要减1
//	int first = l, last = r - 1, key = nums[first];
//	//确定中心点位置为first
//	while (first < last) {
//		while (first < last && nums[last] >= key) {
//			--last;
//		}
//		//从后往前，找到比key值小的数，搬到first的位置
//		nums[first] = nums[last];
//		while (first < last && nums[first] <= key) {
//			++first;
//		}
//		//从前往后，找到比key值大的数，搬到刚才空出来的last的位置
//		nums[last] = nums[first];
//	}
//	//把key值赋给first位，此时的first=last
//	nums[first] = key;
//	//对低子表递归排序
//	quick_sort(nums, l, first);
//	//对高子表递归排序
//	quick_sort(nums, first + 1, r);
//}
//
////归并排序
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
//	//将两个有序序列合并成一个有序序列
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
////插入排序
//void insertion_sort(vector<int>& nums, int n) {
//	for (int i = 0; i < n; ++i) {
//		for (int j = i; j > 0 && nums[j] < nums[j - 1]; --j) {
//			swap(nums[j], nums[j - 1]);
//		}
//	}
//}
//
////冒泡排序
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
////选择排序 
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