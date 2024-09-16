class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int not_equal = 0; 

        for (int equal = 0; equal < nums.size(); equal++) {
            if (nums[equal] != val) {
                nums[not_equal] = nums[equal];
                not_equal++;
            }
        }

        return not_equal;
    }
};
//Go through the vector, moving the first copy of each element into its correct position, as demonstrated in class. Note that this will require 2 iterators. Read the question carefully regarding what needs to be returned.