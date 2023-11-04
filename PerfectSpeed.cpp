bool binarySearch(int n, vector<int> a, int target, int s, int e) {
    while(s <= e) {
        int mid = s + (e-s)/2;
        if(a[mid] == target) return true;
        else if(a[mid] < target) s = mid+1;
        else e = mid-1; 
    }
    return false;
}

int maxEvenSum(int n, vector<int> a) {
    // Write your code here.
    if(n == 1) return -1;
    for(int i = n-1; i >= 0; i--) {
        if((a[i]!=0) && ((a[i] & 1) == 0)) {
            int j = i;
            while(j >= 0) {
                if(((a[j] & 1) == 0) && ((a[i] - a[j]) & 1) == 0 && binarySearch(n, a, (a[i] - a[j]), 0, i)) return a[i];
                else j--;
            }
        }
    }
    return -1;
}