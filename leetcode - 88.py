class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // first copy nums2 into the nums1 array:
        for(int i = 0; i < n;i++){
            nums1[m+i] = nums2[i];
        }

        //now sorthing using fun:
        sort(nums1.begin(),nums1.end());
    }
};