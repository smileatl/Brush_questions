//#include <iostream>
//using namespace std;
//#include <unordered_set>
//#include <unordered_map>
//#include <algorithm>
//#include <stack>
//
//
//class Solution {
//public:
//    string decodeString(string s) {
//        stack<pair<int, string>> sta;
//        int num = 0;
//        string res = "";
//        // ѭ������ַ���
//        for (int i = 0; i < s.size(); i++) {
//            // �������������num
//            if (s[i] >= '0' && s[i] <= '9') {
//                num *= 10;
//                num += (s[i] - '0'); // ȡ�����֣�ʮλ����λ�����п���
//            }
//            else if (s[i] == '[') {
//                // ����'['��ѹջ���ֺ��ַ����������ÿ�
//                sta.push(make_pair(num, res));
//                num = 0;
//                res = "";
//            } 
//            else if (s[i] == ']') { // ����']'����ջ���ֺ��ַ�����Ȼ�������װ
//                int n = sta.top().first; //nָʾ����res��ѭ������������a��
//                string a = sta.top().second;
//                sta.pop();
//                for (int i = 0; i < n; i++) a = a + res; //ѭ��n��
//                res = a;
//            }
//            else { // �����ַ������ַ�
//                res += s[i];
//            }
//        }
//        return res;
//    }   
//};
//
//
//int main()
//{
//    Solution ss;
//    string s = "3[a2[c]]";
//    ss.decodeString(s);
//
//    system("pause");
//    return 0;
//}
