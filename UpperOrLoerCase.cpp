string uppercaseORLowercase(int n, string& s) {
    // Write Your Code Here.
    int lowerCase = 0;
    for(int i = 0; i < n; i++) {
        if(s[i]>=97 && s[i]<=123) lowerCase++;
    }
    string str = "";
    if(lowerCase >= (n - lowerCase)) {
        for(int i = 0; i < n; i++) {
           str += tolower(s[i]);
        }
    } else {
        for(int i = 0; i < n; i++) {
           str += toupper(s[i]);
        }
    }
    return str;
}