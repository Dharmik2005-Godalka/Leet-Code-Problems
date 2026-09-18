class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> rows;

        for(int i = 0; i < mat.size(); i++) {
            int count = 0;

            for(int j = 0; j < mat[i].size(); j++) {
                if(mat[i][j] == 1)
                    count++;
            }

            rows.push_back({count, i});
        }

        sort(rows.begin(), rows.end());

        vector<int> answer;

        for(int i = 0; i < k; i++) {
            answer.push_back(rows[i].second);
        }

        return answer;
    }
};