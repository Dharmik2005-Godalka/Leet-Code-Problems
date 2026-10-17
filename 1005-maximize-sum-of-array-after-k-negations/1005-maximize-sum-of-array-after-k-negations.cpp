
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() && k > 0; i++) {
            if (nums[i] < 0) {
                nums[i] = -nums[i];
                k--;
            }
        }

        if (k % 2 == 1) {
            sort(nums.begin(), nums.end());
            nums[0] = -nums[0];
        }

        int answer = 0;

        for (int i = 0; i < nums.size(); i++) {
            answer += nums[i];
        }

        return answer;
    }
};
