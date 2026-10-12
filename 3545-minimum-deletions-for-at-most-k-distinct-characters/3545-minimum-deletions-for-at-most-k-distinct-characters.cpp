
class Solution {
public:
    int minDeletion(string s, int k) {
        int freq[26] = {0};
        vector<int> counts;

        for (int i = 0; i < s.size(); i++) 
        {
            freq[s[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++) 
        {
            if (freq[i] > 0) {
                counts.push_back(freq[i]);
            }
        }

        if (counts.size() <= k) 
        {
            return 0;
        }
        sort(counts.begin(), counts.end());
        int answer = 0;
        int remove = counts.size() - k;

        for (int i = 0; i < remove; i++)
        {
            answer += counts[i];
        }
        return answer;
    }
};
