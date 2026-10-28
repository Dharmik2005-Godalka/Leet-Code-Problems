class Solution {
public:
    string removeKdigits(string num, int k)
    {
        string answer = "";

        for (int i = 0; i < num.size(); i++)
        {
            while (answer.size() > 0 && k > 0 && answer.back() > num[i])
            {
                answer.pop_back();
                k--;
            }

            answer.push_back(num[i]);
        }

        while (k > 0 && answer.size() > 0)
        {
            answer.pop_back();
            k--;
        }

        int i = 0;

        while (i < answer.size() && answer[i] == '0')
        {
            i++;
        }

        answer = answer.substr(i);

        if (answer == "")
        {
            return "0";
        }

        return answer;
    }
};