int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    // var consisting the xor value
	int XOR = 0;
    // finding the xor value for the array
    for(int it : arr) XOR ^= it;
    // as ques says, elements belongs to 1 .. n-1 and all the present exactly once except one
    // one element present two times, so we want to appear it odd time
    // others will then appear even times and they got eleminated
    for(int i = 1; i < arr.size(); i++) XOR ^= i;
    return XOR;
}

