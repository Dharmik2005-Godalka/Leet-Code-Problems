class Solution {
public:
    string addBinary(string a, string b)
    {
        map<int, int> mp;

        mp[0] = 0;
        mp[1] = 1;
        mp[2] = 0;
        mp[3] = 1;

        int i = a.size() - 1;
        int j = b.size() - 1;

        int carry = 0;
        string answer = "";

        while (i >= 0 || j >= 0 || carry > 0)
        {
            int d1 = 0;
            int d2 = 0;

            if (i >= 0)
            {
                d1 = a[i] - '0';
            }

            if (j >= 0)
            {
                d2 = b[j] - '0';
            }

            int sum = d1 + d2 + carry;

            int digit = mp[sum];
            carry = sum / 2;

            answer += to_string(digit);

            i--;
            j--;
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};