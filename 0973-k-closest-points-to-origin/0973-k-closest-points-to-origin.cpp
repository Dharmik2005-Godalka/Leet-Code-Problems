class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int, vector<int>>> array;

        for(int i=0; i<points.size(); i++)
        {
            int x = points[i][0];
            int y = points[i][1];
            int dis = x*x + y*y;

            array.push_back({dis, points[i]});
            
        }
        sort(array.begin(), array.end());

        vector<vector<int>> arr;
        for(int i=0;i<k;i++)
        {
            arr.push_back(array[i].second);
        }
        return arr;
    }
};