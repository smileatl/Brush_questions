#include <iostream>
using namespace std;
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <unordered_map>


class Solution {
public:
	char firstUniqChar(string s) {
		unordered_map<char, bool> m;
		int len = s.length();
		for (auto c : s) {
			//����key�Ƿ���ڣ����ڷ��ظü���Ԫ�صĵ����������淵��map.end()
			//��һ�β����ڣ��Ҳ�������true
			//�ظ�����ʱ���ͻ��ҵ���=false
			m[c] = m.find(c) == m.end();
		}
		for (auto c : s) {
			//���ص�һ��Ϊtrue����
			if (m[c]) return c;
		}
		return ' ';
	}
};

int main()
{



	system("pause");
	return 0;
}