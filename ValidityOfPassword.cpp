bool isValid(string &str)
{
	// Write your code here.
	int n = str.length();
	bool lengthParam = false;
	bool digitParam = false;
	bool upperParam = false;
	bool lowerParam = false;
	bool specialParam = false;
	bool notWhiteSpace = true;
	if(n>=8 && n<=15) {
		lengthParam = true;
	} else {
		return false;
	}
	for(int i = 0; i < n; i++) {
		if(str[i]>=65 && str[i]<=91) {
			upperParam = true;
		}
		if(str[i]>=97 && str[i]<=123) {
			lowerParam = true;
		}
		if(str[i]>=48 && str[i]<=57) {
			digitParam = true;
		}
		if((str[i]>=32 && str[i]<=47) || (str[i]>=58 && str[i]<=64) || (str[i]>=91 && str[i]<=96) || (str[i]>=123 && str[i]<=126)) {
			specialParam = true;
		}
		if(isspace(str[i])) {
			notWhiteSpace = false;
		}
	}
	return (lengthParam && digitParam && upperParam && lowerParam && specialParam && notWhiteSpace);
}