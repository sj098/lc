class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if (s.size() < 10) {
            return {};
        }

        unordered_map<string, int> substringCount;
        vector<string> result;
        for (int i = 0; i <= s.size() - 10; ++i) {
            string substring = s.substr(i, 10);  
            substringCount[substring]++;
        }

        for (const auto& entry : substringCount) {
            if (entry.second > 1) {
                result.push_back(entry.first);
            }
        }

        return result;
    }
};