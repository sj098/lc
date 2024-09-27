class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto unique = nums.begin();
        for (auto itr = nums.begin() + 1; itr != nums.end(); itr++) {
            if (*itr != *unique) {
                unique++;
                *unique = *itr;
            }
        }
        return distance(nums.begin(), unique) + 1;
    }
};