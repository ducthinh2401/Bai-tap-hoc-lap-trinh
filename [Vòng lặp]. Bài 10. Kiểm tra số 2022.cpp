#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main() {
	unsigned int n; cin >> n;
	int temp;
	bool check = false;
	for (int i = 1; i <= n; i++) {
		cin >> temp;
		if (temp == 2022) check = true; // da gap so 2022 
	}
	if (check == true) cout << "Yes";
	else cout << "No";
}
