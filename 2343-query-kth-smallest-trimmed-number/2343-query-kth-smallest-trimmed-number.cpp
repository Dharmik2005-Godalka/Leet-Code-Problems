class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int> answer;

        for(int q = 0; q < queries.size(); q++) {
            int k = queries[q][0];
            int trim = queries[q][1];

            vector<pair<string, int>> arr;

            for(int i = 0; i < nums.size(); i++) {
                string number = nums[i].substr(nums[i].size() - trim);
                arr.push_back({number, i});
            }

            sort(arr.begin(), arr.end());

            answer.push_back(arr[k - 1].second);
        }

        return answer;
    }
};