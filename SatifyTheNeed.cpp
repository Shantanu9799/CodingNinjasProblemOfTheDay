int countSatisfiedPersons(int n, int m, vector<int> quantity, vector<int> need) {
// Write your code here.
int count = 0;
for(int i = 0; i < m; i++) {
if(quantity[need[i]-1] > 0) {
count++;
quantity[need[i]-1]--;
}
}
return count;
}