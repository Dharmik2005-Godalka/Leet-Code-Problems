class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int count = 0;
        for(int i=0; i<intervals.size();i++)
        {
            for(int j=i+1; j<intervals.size(); j++)
            {
                if(max(intervals[i][0],intervals[j][0]) <= min(intervals[i][1], intervals[j][1]))
                {
                    count++;
                }
            }
        }
        return count;
    }
};