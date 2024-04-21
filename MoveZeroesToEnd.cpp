#include <bits/stdc++.h> 
void moveZerosToLeft(int *arr, int n) {
    int i=n-1;    
    for(int j=n-1;j>=0;j--){        
        if(arr[j]!=0){            
            swap(arr[i],arr[j]);            
            i--;        
        }    
    }
}



void pushZerosAtEnd(vector<int> &arr) 
{
	// Write your code here.
	// maintaing the index till where no zero presents and
	// keeping the count of 0's till index
	int index = 0, zero = 0;
	for(int i = 0; i < arr.size(); ++i) {
		// if arr[i] = 0, increasing the count of 0
		if(arr[i] == 0) zero++;
		// else coping the element in the index to make the array perfect
		else arr[index++] = arr[i];
	}
	// put rest indexes with 0, 
	while(zero--) {
		arr[index++] = 0;
	}
}

