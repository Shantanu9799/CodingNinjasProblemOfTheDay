int calculateNumberOfDays(string &s){
    // Write your code here.
    int interviewCount = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1') {
            if(s[i+1] == '1') {
                s[i+1] = 0;
                interviewCount++;
            } else {
                interviewCount++;
            }
        }
    }
    return interviewCount;
}