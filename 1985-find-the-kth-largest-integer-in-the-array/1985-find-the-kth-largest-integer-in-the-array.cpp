class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), [](string x, string y) 
        {
            if (x.size() ==y.size())
            {
                return x> y;  
            }    
            return x.size() >y.size(); 
        });
        return nums[k -1];
    }
};