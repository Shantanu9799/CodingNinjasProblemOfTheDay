int gcd(int a, int b) 
{ 
    // Everything divides 0 
    if (a == 0) 
        return b; 
    if (b == 0) 
        return a; 
  
    // base case 
    if (a == b) 
        return a; 
  
    // a is greater 
    if (a > b) 
        return gcd(a - b, b); 
    return gcd(a, b - a); 
} 

int minimumJumps(int x, int y) {
	// Write your code here.
	if(gcd(x, y) == 0) {
		if(x == 0) return y;
		else return x;
	}
	return (x+y)/gcd(x, y);
}