#include<iostream>

using namespace std;

int main() {
	int N; cin >> N;
	int tongbia = N/28;
	int vochai = tongbia;
	while(vochai >= 3) {
		int biadoiduoc = vochai/3;
		tongbia += biadoiduoc;
		vochai = (vochai % 3) + biadoiduoc;
	}	
	cout << tongbia;
	
}
