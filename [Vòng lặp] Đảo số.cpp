#include <iostream>
using namespace std;

int main() {
    int a,b; cin >> a >> b;
    long long sum = a+b;
    long long d = 0;
    while (sum>0) {
    	d = d*10 + sum%10;
    	sum/=10;
	}
	cout << d;
}
