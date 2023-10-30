string findWinner(int n, int m) {
    // Write your code here.
    return ((n/m)&1) == 0 ? "BOB" : "ALICE";
}