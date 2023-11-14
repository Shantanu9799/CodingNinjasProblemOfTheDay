#include<bits/stdc++.h>
void removeConsecutiveDuplicates(char *input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/
	vector<char> v;
	for(int i = 0; i < strlen(input); i++) {
		if(v.size()>0 && v[v.size()-1] == input[i]) continue;
		else v.push_back(input[i]);
	}
	v.push_back('\0');
	strcpy(input, v.data());
}