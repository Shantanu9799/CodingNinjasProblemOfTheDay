vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    // Write your code here.
    // Resultant list to store the spiral order
    vector<int> result;

    // Get the number of rows and columns
    int n = MATRIX.size();
    int m = MATRIX[0].size();

    // Initialize pointers for traversal
    int left = 0, right = m - 1, top = 0, bottom = n - 1;

    while (left <= right && top <= bottom) {
        // Traverse from left to right across the top row
        for (int i = left; i <= right; i++) {
            result.push_back(MATRIX[top][i]);
        }
        top++; // Move the top boundary down

        // Traverse from top to bottom along the right column
        for (int i = top; i <= bottom; i++) {
            result.push_back(MATRIX[i][right]);
        }
        right--; // Move the right boundary left

        // Traverse from right to left along the bottom row, if rows remain
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                result.push_back(MATRIX[bottom][i]);
            }
            bottom--; // Move the bottom boundary up
        }

        // Traverse from bottom to top along the left column, if columns remain
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                result.push_back(MATRIX[i][left]);
            }
            left++; // Move the left boundary right
        }
    }

    return result;
}
