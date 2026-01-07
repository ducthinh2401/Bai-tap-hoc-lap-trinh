#include <iostream>
#include<algorithm>
#include<math.h>
#include<ctype.h>
using namespace std;

int main() {
	char a,b; cin >> a >> b;
  // Chuẩn hoá a,b
	a = tolower(a);
	b = tolower (b);
	if (a < b) cout << b-a-1;
	else if ( a == b) cout << 0;
	else cout << a-b-1;
}
