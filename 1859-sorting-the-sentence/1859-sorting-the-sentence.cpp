
class Solution {
public:
    string sortSentence(string s)
    {
        stringstream ss(s);

        vector<string> arr(10);

        string word;

        while (ss >> word)
        {
            int pos = word.back() - '0';

            word.pop_back();

            arr[pos] = word;
        }

        string answer = "";

        for (int i = 1; i <= 9; i++)
        {
            if (arr[i] != "")
            {
                if (answer != "")
                {
                    answer += " ";
                }

                answer += arr[i];
            }
        }

        return answer;
    }
};
