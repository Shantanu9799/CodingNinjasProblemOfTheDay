bool passLen(string str) {
	return (str.size()>=8 && str.size()<=15);
}

bool hasNumber(string str) {
	for(int i = 0; i < str.size(); i++) {
		if(str[i]>=48 && str[i]<=57) return true;
	}
	return false;
}

bool hasLowerCase(string str) {
	for(int i = 0; i < str.size(); i++) {
		if(str[i]>=97 && str[i]<=123) return true;
	}
	return false;
}

bool hasUpperCase(string str) {
	for(int i = 0; i < str.size(); i++) {
		if(str[i]>=65 && str[i]<=91) return true;
	}
	return false;
}

bool hasSpecialChar(string str) {
	for(int i = 0; i < str.size(); i++) {
		if((str[i]>=33 && str[i]<=47) || (str[i]>=58 && str[i]<=64) || (str[i]>=91 && str[i]<=96) || (str[i]>=123 && str[i]<=126)) return true;
	}
	return false;
}

bool hasSpace(string str) {
	for(int i = 0; i < str.size(); i++) {
		if(isspace(str[i])) return true;
	}
	return false;
}

bool isValid(string &str)
{
	// Write your code here.
	return (passLen(str) && hasNumber(str) && hasLowerCase(str) && hasUpperCase(str) && hasSpecialChar(str) && !hasSpace(str));
}
