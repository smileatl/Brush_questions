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
//		//��ͳ��T�е��ַ����
//		for (int i = 0; i < T.size(); ++i) {
//			flag[T[i]] = true; //��flag�У���t�ַ�������ĸ��Ӧ��ASCII��λ��Ϊtrue
//			++chars[T[i]]; //��chars�У���t�ַ�������ĸ��Ӧ��ASCIIλ�ϣ�ͳ����Ӧ��ĸ�ĸ���s
//		}
//		//�ƶ��������ڣ����ϸ���ͳ������
//		int cnt = 0, l = 0, min_l = 0, min_size = S.size() + 1;
//		for (int r = 0; r < S.size(); ++r) {
//			if (flag[S[r]]) {
//				//��Ӧ����ĸ������1s
//				if (--chars[S[r]] >= 0) {
//					//cnt++����ʾ��һ�����
//					++cnt;
//				}
//				//��Ŀǰ���������Ѱ���T��ȫ���ַ���
//				//���Խ�l���ƣ��ڲ�Ӱ����������»��������ַ���
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