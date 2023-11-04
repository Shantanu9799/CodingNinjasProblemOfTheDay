int doubleBeauty(int k, vector<int> &a)
{
    // Write your code here
    priority_queue<int> pq;
    for(int i = 0; i < a.size(); i++) {
        pq.push(a[i]);
    }
    int beauty = 0;
    while(k-- > 0) {
        beauty += (2 * pq.top());
        pq.pop();
    }
    return beauty;
}