#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <set>
#include <unordered_map>

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            int value = symbolValues[s[i]];
            if (value < symbolValues[s[i + 1]]) {
                ans -= value;
            }
            else {
                ans += value;
            }
        }

        return ans;
    }

    unordered_map<char, int> symbolValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };

};

int main()
{
    string s;
    cin >> s;
    cout << s << endl;

    Solution ss;
    cout << ss.romanToInt(s) << endl;

    system("pause");
    return 0;
}