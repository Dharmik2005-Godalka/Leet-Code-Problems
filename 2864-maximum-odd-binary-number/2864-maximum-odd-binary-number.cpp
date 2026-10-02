class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '1')
                ones++;
        }

        string answer = "";

        for(int i = 0; i < ones - 1; i++)
            answer += '1';

        for(int i = 0; i < s.size() - ones; i++)
            answer += '0';

        answer += '1';

        return answer;
    }
};