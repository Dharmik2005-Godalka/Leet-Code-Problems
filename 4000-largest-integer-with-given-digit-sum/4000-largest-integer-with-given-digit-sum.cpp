class Solution {
public:
    int largestInteger(int n, int s) {
        if(s > 9*n)
        {
            return -1;
        }

        int y = 0;
        for(int i=0; i<n; i++)
        {
            int x = min(s,9);
            y = y*10 + x;
            s = s - x;      
        }
        return y;

    }
};