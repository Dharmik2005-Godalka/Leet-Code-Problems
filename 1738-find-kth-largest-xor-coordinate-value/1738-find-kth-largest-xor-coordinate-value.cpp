class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> prefix(m, vector<int>(n));
        vector<int> values;

        for(int i = 0; i < m; i++) 
        {
            for(int j = 0; j < n; j++) 
            {

                prefix[i][j] = matrix[i][j];

                if(i > 0)
                    prefix[i][j] ^= prefix[i-1][j];

                if(j > 0)
                    prefix[i][j] ^= prefix[i][j-1];

                if(i > 0 && j > 0)
                    prefix[i][j] ^= prefix[i-1][j-1];

                values.push_back(prefix[i][j]);
            }
        }
        sort(values.rbegin(), values.rend());
        return values[k-1];
    }
};