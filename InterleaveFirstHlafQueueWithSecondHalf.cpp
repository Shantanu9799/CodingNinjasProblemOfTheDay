#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    // Write your code here.
    int queueSize = q.size();
    queue<int> f, s;
    // first half of the queue
    for(int i = 0; i < queueSize/2; ++i) {
        f.push(q.front());
        q.pop();
    }
    // second half of the queue
    for(int i = queueSize/2; i < queueSize; ++i) {
        s.push(q.front());
        q.pop();
    }
    // add both front element to the queue
    while(!f.empty() && !s.empty()) {
        // adding firsthalf front element
        q.push(f.front());
        f.pop();
        //adding secondhalf front element
        q.push(s.front());
        s.pop();
    }
}