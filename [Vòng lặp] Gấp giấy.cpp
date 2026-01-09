#include <iostream>

using namespace std;

int main() {
    long long n; cin >> n;
    long long do_day = 1; // cẩn thận, khai báo int là toang
    int solan = 0;
    while (do_day < n) {
    	do_day *= 2;
    	solan++;
	}
	cout << solan;
} 
