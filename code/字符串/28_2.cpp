//#include <iostream>
//using namespace std;
//#include <string>
//#include <vector>
//
//class Solution {
//public:
//	void getNext(int* next, string s) {
//		next[0] = -1;
//		int i = 0, j = -1;
//		while (i < s.size() - 1) {
//			if (j == -1 || s[i] == s[j]) {
//				j++;
//				i++;
//				next[i] = j;
//				// cout << next[i] << endl;
//			}
//			else {
//				j = next[j];
//			}
//		}
//	}
//
//	int strStr(string haystack, string needle) {
//		int i = 0;
//		int j = 0;
//		//int next[8] = { -1,0,0,1,2,3,4,0 };
//		int next[needle.size()];
//		getNext(next, needle);
//		/*
//		while((i<haystack.size())&&(j<needle.size()))//会报错
//		因为计算给定字符串的（unsigned int型）长度，就是这一点！！！
//		它的返回值是一个 unsigned int 类型。
//		如果是 while ((i < haystack.size()) && (j < needle.size()))
//		即j< needle.size()在执行时，
//		由于两边的类型不一样所以要转换， 无符号比有符度号的内有效值范围大，
//		所以将j转换成无符号的数字再比较， 这一转就出问题了，
//		有符号的-1转换成无符号成了0xffffffff，这是无符号的最大值，
//		所以i< needle.size()始终为false，所以我写的函数只要当j<0，必定跳出循环。
//		在此建议使用 needle.size()函数的值作为条件循环时，应先赋值给int类型，或者使用c++中的string。
//		*/
//		int length_1 = haystack.size();
//		int length_2 = needle.size();
//		while (i < length_1 && j < length_2) {
//			if (j == -1 || haystack[i] == needle[j]) {
//				i++;
//				j++;
//			}
//			else {
//				j = next[j];
//			}
//		}
//		if (j == needle.size())
//			return i - j;
//		return -1;
//	}
//};
//
//
//
//int main()
//{
//	Solution ss;
//	string haystack = "hello";
//	string needle = "ll";
//	cout << ss.strStr(haystack, needle) << endl;
//
//	system("pause");
//	return 0;
//}