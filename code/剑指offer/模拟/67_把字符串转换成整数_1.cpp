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
//		int i = 0, flag = 1; //Ĭ��flag=1������
//		int res = 0;
//		//�ײ��ո�ɾ��֮
//		while (str[i] == ' ') ++i;
//		//����λ��-1��ʾ����
//		if (str[i] == '-') flag = -1;
//		//����λ��+1
//		if (str[i] == '-' || str[i] == '+') ++i;
//		//���������
//		for (; i < str.size() && isdigit(str[i]); ++ i) {
//			//�ж��Ƿ�Խ��
//			if (res > INT_MAX / 10 || (res == INT_MAX / 10 && str[i] - '0' > 7))
//				return flag == 1 ? INT_MAX : INT_MIN;
//			// �������ֵ� ASCII �롰�롰0��ASCII �롱������ɣ�
//			//����ƴ��
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