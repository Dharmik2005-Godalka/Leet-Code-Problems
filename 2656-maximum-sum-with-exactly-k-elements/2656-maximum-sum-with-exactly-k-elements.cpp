class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int largest = *max_element(nums.begin(), nums.end());
        int answer = 0;

        for(int i = 1; i <= k; i++) 
        {
            answer += largest;
            largest++;
        }
        return answer;
    }
};
