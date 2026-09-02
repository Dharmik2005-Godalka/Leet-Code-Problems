class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26] = {};

        for(int i=0; i<magazine.size(); i++)
        {
            count[magazine[i] - 'a']++;
        }

        for(int j=0; j<ransomNote.size(); j++)
        {
            count[ransomNote[j] - 'a']--;
            if(count[ransomNote[j] - 'a'] < 0)
            {
                return false;
            }
        }
        return true;
    }
};