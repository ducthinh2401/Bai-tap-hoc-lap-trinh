#include<iostream>

using namespace std;

int main() {
	char c; cin >> c;
	if (c == 'Z' || c == 'z') {
		cout << 'a';
	} else {
		if ('A' <= c && c < 'Z') {
			c+= 32;
		}
		c++;
		cout << c;			
    }
}
