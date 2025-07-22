#include <iostream>
using namespace std;
int main() {
	char a;
	cout << "Enter a Character : ";
	cin >> a;
	int x = ((int)a);
	if(x <= 90) {
		cout << "Character Remains Same: " << a;
	}
	else if(x >= 97 && x <= 122) {
		x-=32;
		char c= ((char)x);
		cout << "Converted Charater : " << c;
	}
	return 0;
}

