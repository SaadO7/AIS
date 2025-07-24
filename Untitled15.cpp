#include <iostream>
using namespace std;

int main() { 
    string str;
    cout << "Enter a string: ";
    cin >> str;
	bool missfound=false;
    int n = str.length();
    for (int i = 0; i < n/2; i++) {
        if (str[i] != str[n - i - 1]) {
            missfound = true;
			break;
	  }
  	}
  	if(missfound){
  		cout << "Not a Palindrome";
	  }else {
	  	cout << "Pallindrome";
	  }
	  
	

    return 0;
}

