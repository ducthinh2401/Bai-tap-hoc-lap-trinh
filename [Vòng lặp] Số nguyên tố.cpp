#include <iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
    int n; cin >> n;
    int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (n%i == 0) sum++;
	}
	if (sum == 2) cout << "YES";
	else cout << "NO";
}    
