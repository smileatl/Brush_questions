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
//            // ��Ϊ��ĸ��λ�ʵ������ַ�����������ĸ��ͬ����˶������ַ����ֱ����
//            // ����֮��õ����ַ���һ������ͬ�ģ��ʿ��Խ�����֮����ַ�����Ϊ��ϣ
//            // ��ļ���
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
