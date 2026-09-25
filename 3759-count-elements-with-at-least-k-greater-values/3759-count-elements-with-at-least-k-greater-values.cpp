class Solution {
public:
    int countElements(vector<int>& nums, int k) 
    {
        int n = nums.size();

        if(k == 0)
            return n;

        sort(nums.begin(), nums.end());
        int answer = 0;
        
        for(int i = 0; i < n-k; i++) 
        {
            if(nums[i] < nums[n-k])
                answer++;
        }
        return answer;
    }
};