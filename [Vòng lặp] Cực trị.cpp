#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int bien;
    cin >> bien;
    int max = bien;
    int min = bien;
    for (int i = 2; i <= n; i++) {
        cin >> bien;
        if (max < bien) max = bien;
        if (min > bien) min = bien;
	}	
	cout << max << " " << min;
}
