int calculateNumberOfDays(string &s){
    // Write your code here.
    int matches = 0;
    const int length = s.length(); 
    char* arr = new char[length + 1]; 
    strcpy(arr, s.c_str()); 
    for (int i = 0; i < length; i++) 
    { 
        if((i==0 && arr[i]=='1') || (i>0 && arr[i]=='1' && arr[i-1]!='1')) matches++;
        else if(i>0 && arr[i]=='1' && arr[i-1]=='1') arr[i]='0';
    }
    return matches;
}