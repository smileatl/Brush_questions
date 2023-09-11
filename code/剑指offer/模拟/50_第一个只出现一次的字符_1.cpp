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
			//查找key是否存在，存在返回该键的元素的迭代器；不存返回map.end()
			//第一次不存在，找不到就是true
			//重复出现时，就会找到，=false
			m[c] = m.find(c) == m.end();
		}
		for (auto c : s) {
			//返回第一个为true的数
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