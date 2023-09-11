#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Solution {
public:
	bool repeatedSubstringPattern(string s) {
		string t = s + s;
		t.erase(t.begin());
		t.erase(t.end() - 1);
		if (t.find(s) == -1) {
			return false;
		}
		else {
			return true;
		}
	}
};


int main()
{
	

	system("pause");
	return 0;
}