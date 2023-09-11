//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//	bool isLongPressedName(string name, string typed) {
//		if (typed.size() < name.size()) return false;
//
//		int lenName = name.size(), lenTyped = typed.size();
//		unsigned i = 0, j = 0;
//		while (i < lenName && j < lenTyped)
//		{
//			if (name[i] == typed[j]) {
//				++i;
//				++j;
//			}
//			else
//			{
//				++j;
//			}
//		}
//		if (i == lenName && j <= lenTyped)
//			return true;
//		else
//			return false;
//	}
//};
//
//int main()
//{
//	string name, typed;
//	cin >> name;
//	cin >> typed;
//
//	system("pause");
//	return 0;
//}