class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref = \\;
        sort(strs.begin(), strs.end());
        string first = strs[0], last = strs[strs.size()-1];
        for (int i = 0; i < min(first.size(), last.size()); i++) {
            if (first[i] != last[i]) {
                return pref;
            }
            else {
                pref += first[i];
            }
        }
        return pref;
        
    }
};
