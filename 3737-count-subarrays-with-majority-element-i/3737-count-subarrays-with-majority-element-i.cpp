class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int answer = 0;

        for(int i = 0; i < nums.size(); i++) {
            int count = 0;

            for(int j = i; j < nums.size(); j++) 
            {
                if(nums[j] == target)
                    count++;

                int length = j - i + 1;
                if(count * 2 > length)
                    answer++;
            }
        }
        return answer;
    }
};