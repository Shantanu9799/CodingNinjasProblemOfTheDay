int consecutiveOnes(vector<int>& arr){
    //Write your code here.
    int maxCons = 0, startPos = -1, lastPos = -1;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i]==1 && startPos==-1) {startPos = i; lastPos = i;}
        else if(arr[i]==1 && startPos!=-1) lastPos = i;
        else if(arr[i]==0 && startPos!=-1 && lastPos!=-1) {
            maxCons = max(maxCons, lastPos-startPos+1);
            startPos = -1;
            lastPos = -1;
        }
    }
    if(startPos != -1 && lastPos != -1) {
        maxCons = max(maxCons, lastPos-startPos+1);
    }
    return maxCons;
}