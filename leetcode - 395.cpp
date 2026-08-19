class Solution {
public:
    int longestSubstring(string s, int k) {
        int result = 0;

        for(int i=0; i<s.size(); i++)
        {
            vector<int> count(26,0);

            for(int j =i;j<s.size(); j++)
            {
                count[s[j] - 'a']++;

                bool value = true;

                for(int n =0;n<26; n++)
                {
                    if(count[n]>0 && count[n]<k)
                    {
                        value =false;
                    }
                }

                if(value)
                {
                    result = max(result, j-i+1);
                }
            }
        }
        return result;
    }
};