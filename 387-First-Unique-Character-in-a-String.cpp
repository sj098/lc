class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m;
        for (char c : s) {
            m[c]++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (m[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};

// create unordered_map
// traverse through string and add frequencies to map
// traverse through string, check each char and if map value == 1, return