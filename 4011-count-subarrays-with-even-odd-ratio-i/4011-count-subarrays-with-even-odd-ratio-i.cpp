class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int answer = 0;

        for(int i = 0; i < nums.size(); i++) 
        {
            int odd = 0;
            for(int j = i; j < nums.size(); j++) 
            {
                if(nums[j] % 2 != 0)
                    odd++;

                int length = j - i + 1;
                int even = length - odd;
                if(odd > 0 && even * b <= odd * a)
                    answer++;
            }
        }
        return answer;
    }
};