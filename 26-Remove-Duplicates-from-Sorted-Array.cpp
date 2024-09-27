class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto itr = nums.begin();
        while (itr != nums.end()) {
            if (itr + 1 != nums.end() && *itr == *(itr + 1)) {
                nums.erase(itr + 1);
            } else {
                ++itr;
            }
        }
        
        return nums.size();
        
    }
};