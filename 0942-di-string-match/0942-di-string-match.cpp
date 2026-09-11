class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> answer;
        int low = 0;
        int high = s.size();

        for(int i = 0; i < s.size(); i++) 
        {
            if(s[i] =='I') 
            {
                answer.push_back(low);
                low++;
            }
            else 
            {
                answer.push_back(high);
                high--;
            }
        }
        answer.push_back(low);
        return answer;
    }
};