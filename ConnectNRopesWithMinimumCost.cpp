long long connectRopes(int* arr, int n)
{
    // Your code goes here
    long long cost = 0;

    priority_queue<long long> pq;
    for(int i = 0; i < n; i++) {
        pq.push(arr[i]*-1);
    }

    while(pq.size() > 1) {
        long long lowCost = pq.top() * -1;
        pq.pop();
        lowCost += pq.top() * -1;
        pq.pop();
        pq.push(lowCost * -1);

        cost += lowCost;
    }

    return cost;
}