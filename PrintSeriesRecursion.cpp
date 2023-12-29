vector<int> tillNeg(vector<int> v, int n, int k) {
    if(n <= 0) {
        v.push_back(n);
        return v;
    }
    v.push_back(n);
    return tillNeg(v, n-k, k);
}

vector<int> tillN(vector<int> v, int size) {
    if(size == 0){
        v.push_back(v[size]);
        return v;
    }
    v.push_back(v[size]);
    return tillN(v, size-1);;
}

vector<int> printSeries(int n, int k)
{
    // Write your code here
    vector<int> Series;
    Series = tillNeg(Series, n, k);
    Series = tillN(Series, Series.size()-2);
    return Series;
}