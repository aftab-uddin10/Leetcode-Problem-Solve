class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        string b = strs[0];
        for (int i = 1; i < strs.size(); i++)
            while (strs[i].find(b) != 0) {
                b = b.substr(0, b.length() - 1);
                if (b.empty()) return "";
            }
        return b;
    }
};
