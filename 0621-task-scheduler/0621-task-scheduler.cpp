class Solution {
public:
    int leastInterval(vector<char>& tasks, int n)
    {
        vector<int> count(26, 0);

        for (int i = 0; i < tasks.size(); i++)
        {
            count[tasks[i] - 'A']++;
        }

        sort(count.begin(), count.end());

        int maxCount = count[25];
        int answer = (maxCount - 1) * (n + 1);

        for (int i = 0; i < 26; i++)
        {
            if (count[i] == maxCount)
            {
                answer++;
            }
        }

        return max((int)tasks.size(), answer);
    }
};