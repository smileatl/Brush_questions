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
//        // 循环检查字符串
//        for (int i = 0; i < s.size(); i++) {
//            // 遇到数字则存入num
//            if (s[i] >= '0' && s[i] <= '9') {
//                num *= 10;
//                num += (s[i] - '0'); // 取出数字，十位数百位数都有可能
//            }
//            else if (s[i] == '[') {
//                // 遇到'['，压栈数字和字符串，置零置空
//                sta.push(make_pair(num, res));
//                num = 0;
//                res = "";
//            } 
//            else if (s[i] == ']') { // 遇到']'，出栈数字和字符串，然后进行组装
//                int n = sta.top().first; //n指示的是res的循环次数，不是a的
//                string a = sta.top().second;
//                sta.pop();
//                for (int i = 0; i < n; i++) a = a + res; //循环n次
//                res = a;
//            }
//            else { // 遇到字符存入字符
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
