class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
                return mid; // target found
            else if (nums[mid] < target)
                left = mid + 1; // move to right half
            else
                right = mid - 1; // move to left half
        }

        return left; // left is the correct insert position
    }
};
