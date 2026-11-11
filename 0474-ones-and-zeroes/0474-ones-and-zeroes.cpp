class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n)
    {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (int i = 0; i < strs.size(); i++)
        {
            int zeros = 0;
            int ones = 0;

            for (int j = 0; j < strs[i].size(); j++)
            {
                if (strs[i][j] == '0')
                {
                    zeros++;
                }
                else
                {
                    ones++;
                }
            }

            for (int z = m; z >= zeros; z--)
            {
                for (int o = n; o >= ones; o--)
                {
                    dp[z][o] = max(dp[z][o], 1 + dp[z - zeros][o - ones]);
                }
            }
        }

        return dp[m][n];
    }
};