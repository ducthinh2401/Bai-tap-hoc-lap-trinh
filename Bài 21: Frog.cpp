*/ Một con ếch hiện đang ở điểm 0 trên trục tọa độ Ox. Nó nhảy theo thuật toán sau: 
bước nhảy thứ nhất là a đơn vị về bên phải, bước nhảy thứ hai là b đơn vị về bên trái, bước nhảy thứ ba là a đơn vị bên phải, bước nhảy thứ tư là b đơn vị bên trái, v.v. 
.Nếu con ếch đã nhảy một số lần chẵn (trước lần nhảy hiện tại), nó nhảy từ vị trí hiện tại x sang vị trí x + a, mặt khác, nó nhảy từ vị trí hiện tại x sang vị trí x − b. 
Nhiệm vụ của bạn là tính toán vị trí của ếch sau k bước nhảy
/*
 // Cách 1 
#include<iostream?
using namespace std;
int main() {
	int x,a,b,k; cin >> x >> a >> b >> k;
	int m,n;
	if( k % 2 == 0 ) m = k/2, n = k/2;
	else m = (k+1)/2, n = (k-1)/2;
	cout << 1ll * (x + m*a - n*b); 
}

// Cách 2
#include<iostream?
using namespace std;
int main() {
  int x,a,b,k; cin >> x >> a >> b >> k;
  if( k % 2 == 0 ) {
     cout << x + k/2*a + k/2*b;
  } else {
     cout << x + (k+1)/2 * a + (k-1)/2 * b;
  }
}
