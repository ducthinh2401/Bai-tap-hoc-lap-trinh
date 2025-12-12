// Cho trước N ngày, hãy đổi N thành số năm, số tuần và số ngày. Biết rằng một năm có 365 ngày.


#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main() {
	unsigned int t,n; cin >> t >> n;
	if (t < 1 || t > 12 || n > 5000 ) {
		cout << "INVALID";
	} else {
		switch (t) {
			case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
			cout << "31";
			break;
			case 4: case 6: case 9: case 11: 
			cout << "30";
			break;
			case 2:
				if ((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0))) {
					cout << "29";					
				} else {
					cout << "28";					
				}
				break;
		}
	}
}


