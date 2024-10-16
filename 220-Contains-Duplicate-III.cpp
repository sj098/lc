class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        if (indexDiff <= 0 || valueDiff < 0) {
            return false;
        }
        set<int> values;
        for (int i = 0; i < nums.size(); i++) {
            int lower = nums[i] - valueDiff;
            int upper = nums[i] + valueDiff;
            auto itr = values.lower_bound(lower);
            if (itr != values.end() && *itr <= upper) {
                return true;
            }
            values.insert(nums[i]);
            if (i >= indexDiff) {
                values.erase(nums[i - indexDiff]);
            }
        }
        return false;
    }
};