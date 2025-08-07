class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 0; // pointer for the place to insert next unique number

        for (int j = 1; j < nums.size(); ++j) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j]; // update the next unique position with the new unique element
            }
        }
        return i + 1; // number of unique elements
    }
};
