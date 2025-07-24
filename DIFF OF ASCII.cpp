#include <iostream>
using namespace std;
int main() {
	char a;
	cout << "Enter a Character: ";
	cin >> a;
	char b;
	cout << "Enter 2nd Character: ";
	cin >> b;
	cout << "ASCII value of " << a << " Is: " << ((int)a) << endl;
	cout << "ASCII value of "<< b << " Is: " << ((int)b)<< endl;
	int diff = a-b;
	if(diff<0) {
	
	cout << "The Difference of the values is: " << diff*-1 << endl;
}
else {
	cout << "The Difference of th e values is: " << diff << endl;
}
}
