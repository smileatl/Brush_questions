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
//		while((i<haystack.size())&&(j<needle.size()))//�ᱨ��
//		��Ϊ��������ַ����ģ�unsigned int�ͣ����ȣ�������һ�㣡����
//		���ķ���ֵ��һ�� unsigned int ���͡�
//		����� while ((i < haystack.size()) && (j < needle.size()))
//		��j< needle.size()��ִ��ʱ��
//		�������ߵ����Ͳ�һ������Ҫת���� �޷��ű��з��Ⱥŵ�����Чֵ��Χ��
//		���Խ�jת�����޷��ŵ������ٱȽϣ� ��һת�ͳ������ˣ�
//		�з��ŵ�-1ת�����޷��ų���0xffffffff�������޷��ŵ����ֵ��
//		����i< needle.size()ʼ��Ϊfalse��������д�ĺ���ֻҪ��j<0���ض�����ѭ����
//		�ڴ˽���ʹ�� needle.size()������ֵ��Ϊ����ѭ��ʱ��Ӧ�ȸ�ֵ��int���ͣ�����ʹ��c++�е�string��
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