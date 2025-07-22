#include <iostream>
using namespace std;
int main() {
	char c1, c2;
	cout << "Enter First Character: ";
	cin>> c1;
	cout << "Enter Second Character: ";
	cin>> c2;
	
	int diff = ((int)c1-(int)c2);
	if(diff<0) {
	cout << "The Difference Is: "<< diff*-1 << endl;
}
    else { 
    cout << "The Difference Is: "<< diff << endl;
	}
	return 0;
	}
	


