string decodeString(string &s){
    // Write your code here.
    string str = "";
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'z') {
            str += 'a';
        } else {
            str += (char) (s[i] + 1);
        }
    }
    return str;
}