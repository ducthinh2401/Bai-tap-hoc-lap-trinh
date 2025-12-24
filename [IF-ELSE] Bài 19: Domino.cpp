/* Bạn được cung cấp một bảng hình chữ nhật có kích thước M × N hình vuông đơn vị. Ngoài ra, bạn được cung cấp một số lượng không giới hạn các mảnh domino tiêu chuẩn kích thước 2 × 1. 
Bạn được phép xoay các mảnh domino. Bạn được yêu cầu đặt càng nhiều domino càng tốt trên bảng để đáp ứng các điều kiện sau:
Mỗi domino hoàn toàn bao gồm hai hình vuông đơn vị.
Không có hai domino trùng nhau.
Mỗi domino nằm hoàn toàn bên trong bảng. Nó được phép chạm vào các cạnh
của bảng. Tìm số lượng domino tối đa thỏa mãn điều kiện trên.
*/

#include<iostream> 
using namespace std; 
int main() {
  long long M, N; 
  cin >> M >> N;
  if ( M % 2 == 0 ) {
     cout << M/2 * N;
  } else {
     cout << (M-1)/2 * N + N/2;
  }
  return 0;
}
