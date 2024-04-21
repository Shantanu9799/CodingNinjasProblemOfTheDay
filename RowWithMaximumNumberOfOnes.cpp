// we have to return s
int firstOccuranceOne(vector<int> arr, int m) {
    int s = 0, e = m-1;
    while(s <= e) {
        int mid = s + (e-s) / 2;
        // if the element is still 0, find in the right half
        if(arr[mid] == 0) s = mid + 1;
        // else find in the left half
        else e = mid - 1;
    }
    return s;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    //    Write your code here.
    int maxNumberOne = -1, rowNumber = -1;
    for(int i = 0; i < n; i++) {
        // m - firstOcc will give us the total number of 1s
        int countOfOne = m - firstOccuranceOne(matrix[i], m);
        // if countOfOne is strictly greater than maxNumber
        // because if both have same value we have to return the smaller row index
        if(countOfOne > maxNumberOne) {
            rowNumber = i;
            maxNumberOne = countOfOne;
        }
    }
    return rowNumber;
}