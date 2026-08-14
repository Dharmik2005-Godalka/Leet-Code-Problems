class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int max = 0;
        int answer = 0;
        for(int year = 1950; year <= 2050; year++)
        {
            int count = 0;
            for(int j = 0; j < logs.size(); j++)
            {
                if(logs[j][0] <= year && year < logs[j][1])
                {
                    count++;
                }
            }

            if(count > max)
            {
                max = count;
                answer = year;
            }
        }
        return answer;
    }
};