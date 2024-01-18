string findMagicalNumber(int n, int x) {
// Write your code here.
string magic = "1";
while(n) {
magic += "0";
n--;
}
string x1 = to_string(x);
int len = x1.size();
magic.replace(magic.size() - len, len, x1);
return magic;
}