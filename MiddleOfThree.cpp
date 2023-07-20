#include <bits/stdc++.h> 
int middleOfThree(int x, int y, int z)
{
    // Write your code here  
    priority_queue<int> pq;
    pq.push(x); 
    pq.push(y); 
    pq.push(z); 
    pq.pop();
    return pq.top();
}