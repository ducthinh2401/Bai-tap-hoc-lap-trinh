// UCLN của hai số nguyên không thay đổi khi thay 1 trong 2 số thành số dư của nó với số còn lại. Có nghĩa là UCLN(a, b) = UCLN(b, a % b)

#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int a,b; cin >> a >> b;
    while (b != 0) {
      int r = a%b;
      a = b;
      b = r; // gán số dư cho b --> b sẽ về 0 trước --> nên cần điều kiện lặp b!= 0
    }  
  cout << a;
}
