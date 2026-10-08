class Solution {
public:
    bool isPalindrome(int x) {
        int origin = x;
        long reverse = 0;
        if (x < 0) 
        {
            return false;
        }
        while (x != 0) 
        {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x /= 10;
        }
        return origin == reverse;
    }
};