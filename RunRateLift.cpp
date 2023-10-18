int liftStruggle(int d) {
    // Write your code here.
    if(d%3 == 0) return d/3;
    if(d%3 == 1) return (d/3)+2;
    return ((d+1)/3)+3;
}