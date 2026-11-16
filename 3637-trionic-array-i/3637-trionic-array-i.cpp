class Solution {
public:
    bool isTrionic(vector<int>& nums)
    {
        int n = nums.size();
        int i = 0;

        // First part: Increasing
        while (i < n - 1 && nums[i] < nums[i + 1])
        {
            i++;
        }

        if (i == 0)
        {
            return false;
        }

        // Second part: Decreasing
        int start = i;

        while (i < n - 1 && nums[i] > nums[i + 1])
        {
            i++;
        }

        if (i == start)
        {
            return false;
        }

        // Third part: Increasing
        start = i;

        while (i < n - 1 && nums[i] < nums[i + 1])
        {
            i++;
        }

        if (i == start)
        {
            return false;
        }

        return i == n - 1;
    }
};