//#include <iostream>
//using namespace std;
//#include <string>
//#include <vector>
//
//
//class Solution {
//public:
//	string minWindow(string S, string T) {
//		vector<int> chars(128, 0);
//		vector<bool> flag(128, false);
//		//先统计T中的字符情况
//		for (int i = 0; i < T.size(); ++i) {
//			flag[T[i]] = true; //在flag中，将t字符串中字母对应的ASCII码位置为true
//			++chars[T[i]]; //在chars中，将t字符串中字母对应的ASCII位上，统计相应字母的个数s
//		}
//		//移动滑动窗口，不断更改统计数据
//		int cnt = 0, l = 0, min_l = 0, min_size = S.size() + 1;
//		for (int r = 0; r < S.size(); ++r) {
//			if (flag[S[r]]) {
//				//对应的字母个数减1s
//				if (--chars[S[r]] >= 0) {
//					//cnt++，表示有一个相符
//					++cnt;
//				}
//				//若目前滑动窗口已包含T中全部字符，
//				//则尝试将l右移，在不影响结果的情况下获得最短子字符串
//				while (cnt == T.size()) {
//					if (r - l + 1 < min_size) {
//						min_l = l;
//						min_size = r - l + 1;
//					}
//					if (flag[S[l]] && ++chars[S[l]] > 0) {
//						--cnt;
//					}
//					++l;
//				}
//			}
//		}
//		return min_size > S.size() ? "" : S.substr(min_l, min_size);
//	}
//};
//
//int main()
//{
//	string s;
//	cin >> s;
//
//	string t;
//	cin >> t;
//
//	Solution ss;
//	ss.minWindow(s, t);
//
//	system("pause");
//	return 0;
//}