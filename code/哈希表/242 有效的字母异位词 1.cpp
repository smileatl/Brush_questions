//#include <iostream>
//using namespace std;
//#include <vector>
//
//class Solution {
//public:
//	bool isAnagram(string s, string t) {
//		int record[26] = { 0 };
//		for (int i = 0; i < s.size(); i++) {
//			// s�ַ������о�++
//			record[s[i] - 'a']++;
//		}
//		for (int i = 0; i < t.size(); i++) {
//			// t�ַ������о�--
//			record[t[i] - 'a']--;
//		}
//		for (int i = 0; i < 26; i++) {
//			// ȫΪ0�ͷ���Ҫ��
//			if (record[i] != 0) return false;
//		}
//		return true;
//	}
//};
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}