int bFromA(string a, string b)
{
    // Write your code here
    char A[26] = {0};
    char B[26] = {0};
    for(int i = 0; i < a.length(); i++) {
        A[a[i]-'a']++;
    }
    for(int i = 0; i < b.length(); i++) {
        B[b[i]-'a']++;
    }
    int cnt = 0;
    while(true) {
        for(int i = 0; i < 26; i++) {
            A[i] -= B[i];
            if(A[i] < 0) return cnt;
        }
        cnt++;
    }
    return cnt;
}