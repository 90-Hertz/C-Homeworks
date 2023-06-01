#include<iostream>
using namespace std;

bool isAlpha(char c){
	if(('a' < c && c < 'z') || ('A' < c && c < 'Z')){
		return true;
	}
	return false;
}
string convertToCamelCase(string input){
	char c;
	string result = "";
	bool capitalizeNext = false;
	for(size_t i=0 ; i<input.length() ; i++){// using size_t because int wil be wrong in some case 
		c = input[i];
		if(isAlpha(c)){
			if(capitalizeNext){
				result += toupper(c);// toupper to capitalize the character
				capitalizeNext = false;
			}
			else{
				result += c;
			}
		}
		else if(c == ' '){// the space just write by ' ' not " "
			capitalizeNext = true;
		}
		else{
			result += c;
		}
	}
	return result;
}
int main(){
	string input;
	getline(cin, input);
	string camelCase = convertToCamelCase(input);
	cout << camelCase;
	return 0;
}

