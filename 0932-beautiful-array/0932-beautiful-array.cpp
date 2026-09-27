class Solution {
public:
    vector<int> beautifulArray(int n) {
        if(n == 1)
            return {1};

        vector<int> odd = beautifulArray((n + 1) / 2);
        vector<int> even = beautifulArray(n / 2);

        vector<int> answer;

        for(int x : odd)
            answer.push_back(2 * x - 1);

        for(int x : even)
            answer.push_back(2 * x);

        return answer;
    }
};