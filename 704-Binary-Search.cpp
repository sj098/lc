class Solution {
public:
    int search(vector<int>& nums, int target) {
        int first = 0;
        int last = nums.size()-1;
        while (last >= first) {
            int mid = (first + last) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (target < nums[mid]) {
                last = mid-1;
            }
            if (target > nums[mid]) {
                first = mid+1;
            }
        }
        return -1;
    }
};