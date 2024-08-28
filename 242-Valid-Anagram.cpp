class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        unordered_map<int, int> ms, mt;
        for (int i = 0; i < s.length(); i++) {
            ms[s[i]]++;
            mt[t[i]]++;
        }
        for (auto x:s) {
            if(ms[x] != mt[x]) {
                return false;
            }
        }
        return true;
    }
};