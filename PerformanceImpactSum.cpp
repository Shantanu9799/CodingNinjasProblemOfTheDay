int impact(int n, vector<int> x) {
   int sum = 0;
   for(int i = 0; i < n; i++) {
      sum += x[i];
   }
   return sum;
}

int divisible3(int n, vector<int> x)
{
   // Write you code here.
   for(int i = 0; i < n; i++) {
      if(x[i]%3 != 0) {
         x[i] = x[i]*x[i];
      }
   }
   return impact(n, x);
}