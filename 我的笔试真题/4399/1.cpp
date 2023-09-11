#include <iostream>
#include <string>
std::string findLongestIncreasingDigitsSubstr(const std::string& s) {
    int n = s.length();
    int maxLen = 0; // 最大子串长度
    int startPos = 0; // 最大子串起始位置
    int i = 0;
    while (i < n - 1) {
        int len = 1; // 当前子串长度
        int start = i; // 当前子串起始位置
        // 判断是否是递增数字
        while (s[i] < s[i + 1] && isdigit(s[i]) && isdigit(s[i + 1]) && (s[i] - '0' == s[i +1] - '0' - 1)) {
            len++;
            i++;
        }
        // 如果当前子串长度大于最大子串长度，则更新最大子串信息
        if (len > maxLen) {
            maxLen = len;
            startPos = start;
        }
        i++;
    }
    // 提取最长递增子串并返回
    return s.substr(startPos, maxLen);
}
int main() {
    const std::string s = "abc12334def126789";
    std::string longestSubstr = findLongestIncreasingDigitsSubstr(s);
    std::cout << longestSubstr << std::endl;
    return 0;
}
