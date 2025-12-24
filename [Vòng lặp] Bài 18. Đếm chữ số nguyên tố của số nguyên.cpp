#include<iostream>

using namespace std;

int main() {
	long long n; cin >> n; int dem = 0;
    while (n != 0) {
    	int chu_so = n%10;
    	if (chu_so == 2|| chu_so == 3|| chu_so == 5|| chu_so == 7) dem++;
		n/=10;
	}
	cout << dem;
}
