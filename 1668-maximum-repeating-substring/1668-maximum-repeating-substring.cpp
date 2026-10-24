class Solution {
public:
    int maxRepeating(string sequence, string word) 
    {
        int answer = 0;
        string temp = word;
        while (sequence.find(temp) != string::npos) 
        {
            answer++;
            temp += word;
        }
        return answer;
    }
};