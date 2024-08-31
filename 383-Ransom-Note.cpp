class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        for (int i = 0; i < magazine.length(); i++) {
            m[magazine[i]]++;
        }
        for (auto c : ransomNote) {
            m[c]--;
        }
        for (auto k : m) {
            if (k.second < 0) {
                return false;
            }
        }
        return true;
        
    }
};