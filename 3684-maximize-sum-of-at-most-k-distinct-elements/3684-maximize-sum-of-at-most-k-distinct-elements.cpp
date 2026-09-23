class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) 
    {
        sort(nums.rbegin(), nums.rend());
        vector<int> answer;

        for(int i = 0; i < nums.size(); i++) 
        {
            if(i > 0 && nums[i] == nums[i - 1])
                continue;

            answer.push_back(nums[i]);
            if(answer.size() == k)
                break;
        }

        return answer;
    }
};