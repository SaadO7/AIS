#include <iostream>
using namespace std;
int main() {
	string s;
	cout << "Enter a String: ";
	cin >> s;
	bool missfound = false;
	int n = s.length();
	for(int i=0;i<n/2;i++) {
		if(s[i] != s[n-1-i]) {
			missfound = true;
			break;
		}
		char a = s[i];
		int x = ((int)a);
		if(x<=90){
			cout << a;
		}
		else if(x>=97 && x<=122) {
			x=x-32;
			char c=((char)x);
		
		}
		
		}
		if(missfound) {
			cout << "Not a Pallindrome ";
		}
		else {
			cout << "Pallindrome ";
		}
	
}
