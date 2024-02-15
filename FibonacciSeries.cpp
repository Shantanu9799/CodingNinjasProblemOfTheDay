void fibonacci(int n, vector<int>& fibonacciSeries) {
    if(n < 1) return;
    fibonacciSeries.push_back(fibonacciSeries[fibonacciSeries.size() - 1] + fibonacciSeries[fibonacciSeries.size() - 2]);
    fibonacci(n-1, fibonacciSeries);
}

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> fibonacciSeries;
    if(n == 1) {
        fibonacciSeries.push_back(0);
        return fibonacciSeries;
    }
    if(n == 2) {
        fibonacciSeries.push_back(0);
        fibonacciSeries.push_back(1);
        return fibonacciSeries;
    }
    fibonacciSeries.push_back(0);
    fibonacciSeries.push_back(1);
    fibonacci(n - 2, fibonacciSeries);
    return fibonacciSeries;
}