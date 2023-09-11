//#include <iostream>
//using namespace std;
//#include <unordered_set>
//#include <unordered_map>
//#include <algorithm>
//
//
//class Solution {
//public:
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//        unordered_map<string, vector<string>> umap;
//        for (auto str : strs) {
//            auto key = str;
//            sort(key.begin(), key.end());
//            // 互为字母异位词的两个字符串包含的字母相同，因此对两个字符串分别进行
//            // 排序之后得到的字符串一定是相同的，故可以将排序之后的字符串作为哈希
//            // 表的键。
//            umap[key].emplace_back(str);
//        }
//
//        vector<vector<string>> ans;
//        for (auto it = umap.begin(); it != umap.end(); it++) {
//            ans.emplace_back(it->second);
//        }
//        return ans;
//    }
//};
//
//
//int main()
//{
//    system("pause");
//    return 0;
//}
