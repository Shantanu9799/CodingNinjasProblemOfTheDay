int minimumCost(int n, int x, int y, string& s) {
    // Write Your Code Here. 
    int vowel = 0;
    for(int i = 0; i < n; i++) {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') vowel++;
    }
    return min(vowel*x, (n-vowel)*y);
}