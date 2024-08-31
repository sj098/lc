class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        // create vector of all evens
        // if vector size == 0, return -1
        vector<int> evens;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                evens.push_back(nums[i]);
            }
        }

        if (evens.size() == 0) {
            return -1;
        }

        // create map of evens and frequencies
        unordered_map<int, int> m;
        for (int i = 0; i < evens.size(); i++) {
            m[evens[i]]++;
        }

        // find maximum frequency
        int max_freq = 0;
        for (auto k : m) {
            if (k.second >= max_freq) {
                max_freq = k.second;
            }
        }

        // create vector of ints that have max frequency
        vector<int> maxs;
        for (auto key : m) {
            if (key.second == max_freq) {
                maxs.push_back(key.first);
            }
        }

        // if there is only one int of max freq, return int
        if (maxs.size() == 1) {
            return maxs[0];
        }

        // find min number of ints with max freq, return
        int min = maxs[0];
        for (int i = 0; i < maxs.size(); i++) {
            if (maxs[i] <= min) {
                min = maxs[i];
            }
        }
        return min;
        
    }
};

// create vector of only even numbers
// create vector of min evens
// create unordered_map 

// int min = 0;
// find minimum value of map
// add key of min value to vector min evens
// return min of min evens