class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[1] > b[1];
             });

        int answer = 0;
        for(int i = 0; i < boxTypes.size(); i++) 
        {
            int boxes = min(truckSize, boxTypes[i][0]);
            answer += boxes * boxTypes[i][1];
            truckSize -= boxes;

            if(truckSize == 0)
                break;
        }
        return answer;
    }
};