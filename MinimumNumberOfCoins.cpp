vector<int> MinimumCoins(int n)
{
    // Write your code here
    vector<int> coins;
    while(n >= 1000) {
        coins.push_back(1000);
        n -= 1000;
    }
    while(n >= 500) {
        coins.push_back(500);
        n -= 500;
    }
    while(n >= 100) {
        coins.push_back(100);
        n -= 100;
    }
    while(n >= 50) {
        coins.push_back(50);
        n -= 50;
    }
    while(n >= 20) {
        coins.push_back(20);
        n -= 20;
    }
    while(n >= 10) {
        coins.push_back(10);
        n -= 10;
    }
    while(n >= 5) {
        coins.push_back(5);
        n -= 5;
    }
    while(n >= 2) {
        coins.push_back(2);
        n -= 2;
    }
    while(n >= 1) {
        coins.push_back(1);
        n -= 1;
    }
    return coins;
}