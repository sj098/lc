class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = nums.size()/2;
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        for (auto k : m) {
            if (k.second > maj) {
                return k.first;
            }
        }
        return 0;
    }
};