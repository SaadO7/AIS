#include <iostream>
using namespace std;
int main() {
	string str;
	cout << "Enter Your Word: ";
	cin >> str;
	int n= str.length() ;
	for(int i=0; i<n/2; i++) {
		if(str[i] != str[n-1-i] ) {
		
		
		cout << "False :(" << endl;{
		return 0;}
       
	} else {
		cout << "True :)" << endl;
	
	}
}
return 0;
}
