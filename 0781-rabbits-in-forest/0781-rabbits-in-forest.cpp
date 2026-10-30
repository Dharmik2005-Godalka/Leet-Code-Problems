class Solution {
public:
    int numRabbits(vector<int>& answers)
    {
        unordered_map<int, int> mp;
        

        for (int i=0; i < answers.size(); i++)
        {
            mp[answers[i]]++;
        }
        int answer=0;
        for (auto p : mp)
        {
            int same = p.first + 1;
            int count = p.second;
            answer += ((count + same - 1) / same) * same;
        }

        return answer;
    }
};