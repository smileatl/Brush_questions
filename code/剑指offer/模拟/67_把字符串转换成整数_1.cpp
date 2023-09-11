//#include <iostream>
//using namespace std;
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <string>
//
//class Solution {
//public:
//	int strToInt(string str) {
//		int i = 0, flag = 1; //默认flag=1，正数
//		int res = 0;
//		//首部空格，删除之
//		while (str[i] == ' ') ++i;
//		//符号位，-1表示负数
//		if (str[i] == '-') flag = -1;
//		//符号位再+1
//		if (str[i] == '-' || str[i] == '+') ++i;
//		//如果是数字
//		for (; i < str.size() && isdigit(str[i]); ++ i) {
//			//判断是否越界
//			if (res > INT_MAX / 10 || (res == INT_MAX / 10 && str[i] - '0' > 7))
//				return flag == 1 ? INT_MAX : INT_MIN;
//			// “此数字的 ASCII 码“与“0的ASCII 码”相减即可；
//			//数字拼接
//			res = res * 10 + (str[i] - '0');
//		}
//		return flag * res;
//	}
//};
//
//int main()
//{
//	
//
//
//	system("pause");
//	return 0;
//}