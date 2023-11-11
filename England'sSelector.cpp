int arrayDivisibility(int n, vector<int> x, vector<int> y)
{
    // Write your code here.
    int operation = 0;
    for(int i = 0; i < n; i++) {
        int xi = x[i];
        int yi = y[i];
        int div = xi / yi;
        int nextDIv = div+1;
        operation += min(abs(x[i] - (yi*div)), abs(abs(x[i] - (yi*nextDIv))));
    }
    return operation;
}
