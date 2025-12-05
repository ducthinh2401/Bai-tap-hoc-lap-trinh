#incude<iostream>
#include<algorithm>

using namespace std;
int main() {
  long long n; int a, b; cin >> n >> a >> b;
  long long p_1 = n*a;

  long long p_2 = n/2*b + (n%2)*a;
  cout << min(p_1, p_2);
}

      
