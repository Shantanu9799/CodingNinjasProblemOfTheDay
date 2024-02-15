#include <bits/stdc++.h> 

bool isPalindrome(string str) {
	int i = 0, j = str.size() - 1;
	while(i < j) {
		if(tolower(str[i]) != tolower(str[j])) return false;
		i++;
		j--;
	}
	return true;
}

int countNumberOfPalindromeWords(string s)
{
	//Your code goes here
	istringstream iss(s);

    // Create a vector to store individual strings
    vector<string> stringList;

    // Tokenize the input string and store each token in the vector
    string token;
    while (iss >> token) {
        stringList.push_back(token);
    }

	int count = 0;
	for (const auto& str : stringList) {
        if(isPalindrome(str)) count++;
    }
	return count;

}