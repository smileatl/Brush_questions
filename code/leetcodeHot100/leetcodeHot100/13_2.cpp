#include <iostream>
using namespace std;
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <stack>


class Solution {
public:
    unordered_map<char, int> umap = {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
    };

    int romanToInt(string s) {
        int ans=0;
        for (int i = 0; i < s.size(); i++) {
            int value = umap[s[i]];
            if (value < umap[s[i + 1]]) {
                ans -= value;
            }
            else {
                ans += value;
            }
        }
        return ans;
    }
};


int main()
{
    string s = "III";
    Solution ss;
    ss.romanToInt(s);

    system("pause");
    return 0;
}
