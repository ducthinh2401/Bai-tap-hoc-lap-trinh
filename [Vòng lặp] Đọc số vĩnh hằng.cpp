// Nhập vào số nguyên n, nếu n = 0 dừng chương trình, còn lại thì in ra n^5

/* Ví dụ: Input: 1 2 4 0 thì in ra
1 2^5 4^5 */

#include<iostream>
#include<algorithm>
#include<math.h>
#include<cstdlib> 
using namespace std;
int main() {
    ll n;
	while(true) {
		cin >> n;
		if (n == 0) break;
		cout << (ll)pow(n,5) << endl;
	}	 
} 
