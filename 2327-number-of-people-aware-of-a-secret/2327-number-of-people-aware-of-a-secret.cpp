class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget)
    {
        const int MOD = 1000000007;

        vector<long long> dp(n + 1, 0);

        dp[1] = 1;

        long long sharing = 0;

        for (int i = 2; i <= n; i++)
        {
            if (i - delay >= 1)
            {
                sharing += dp[i - delay];
            }

            if (i - forget >= 1)
            {
                sharing -= dp[i - forget];
            }

            sharing = (sharing + MOD) % MOD;

            dp[i] = sharing;
        }

        long long answer = 0;

        for (int i = n - forget + 1; i <= n; i++)
        {
            if (i >= 1)
            {
                answer = (answer + dp[i]) % MOD;
            }
        }

        return answer;
    }
};