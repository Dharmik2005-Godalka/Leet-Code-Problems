
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());

        vector<int> answer;

        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i - 1];
        }

        for (int i = 0; i < queries.size(); i++) {
            int count = 0;

            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] <= queries[i]) {
                    count++;
                } else {
                    break;
                }
            }

            answer.push_back(count);
        }

        return answer;
    }
};
