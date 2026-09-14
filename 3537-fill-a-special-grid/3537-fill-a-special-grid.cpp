class Solution {
public:
    vector<vector<int>> specialGrid(int n) {
        int size = 1 << n;

        vector<vector<int>> grid(size, vector<int>(size));

        int value = 0;

        fill(grid, 0, size, 0, size, value);

        return grid;
    }

    void fill(vector<vector<int>>& grid,
              int top, int bottom,
              int left, int right,
              int& value) {

        if(bottom - top == 1) {
            grid[top][left] = value;
            value++;
            return;
        }

        int midRow = (top + bottom) / 2;
        int midCol = (left + right) / 2;

        // Top-right
        fill(grid, top, midRow, midCol, right, value);

        // Bottom-right
        fill(grid, midRow, bottom, midCol, right, value);

        // Bottom-left
        fill(grid, midRow, bottom, left, midCol, value);

        // Top-left
        fill(grid, top, midRow, left, midCol, value);
    }
};