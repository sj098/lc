class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> anagrams;
        // for each string in strs
        for (int i = 0; i < strs.size(); i++) {
            // sort each string
            string s = strs[i];
            sort(s.begin(), s.end());
            anagrams[s].push_back(strs[i]);
        }
        for (auto k : anagrams) {
            ans.push_back(k.second);
        }
        return ans;
    }
};

// create unordered map
// sort strings
// if sorted string does not exist in the map, set sorted string as key and unsorted string as value
// if sorted string exists in map, append the unsorted string to the value
// for each sorted string, create an array from values
// return arrays
