// Cách 1
#include <iostream>

using namespace std;

int main() {
	unsigned int x; int y; cin >> x >> y;
	int so_nam = 0;
	for (int i = 1; i <= y; i++) {
		if (x <= 6) {
			so_nam++;
		}
	x++;
	if (x > 8) x = 2; 	
	}
	cout << so_nam;
}

