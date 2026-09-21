class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total = 0;

        for(int i = 0; i < apple.size(); i++)
            total += apple[i];

        sort(capacity.rbegin(), capacity.rend());

        int sum = 0;
        int answer = 0;

        for(int i = 0; i < capacity.size(); i++) {
            sum += capacity[i];
            answer++;

            if(sum >= total)
                return answer;
        }

        return answer;
    }
};