#include <iostream>
using namespace std;
int main() {
	string s;
	cout << "Enter a String: ";
	cin >> s;
	cout << "\n";
	bool missfound = false;
	int n = s.length();
	for(int i=0;i<n/2;i++) {
		char a = s[i];
		char z = s[n-1-i];
		
		if((int)a >= 97){
			a -= 32;
		}
		
		if((int)z >= 97){
			z -= 32;
		}
		
		if(a != z){
			cout << "Not a Palindrome";
			missfound = true;
			break;
		}
	}
	
	if(!missfound){
		cout << "Palindrome";
	}
	return 0;
}
