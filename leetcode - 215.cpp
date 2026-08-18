class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int x = 0;

        sort(nums.begin(), nums.end());
        int result = nums[nums.size() -k];

        return result;
    }
};