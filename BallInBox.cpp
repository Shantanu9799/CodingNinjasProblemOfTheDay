int boxFilling(int n, int x, int y){
    // Write your code here
    return (n*x)%y == 0 ? (n*x)/y : ceil((double) (n*x)/(double) y);
}