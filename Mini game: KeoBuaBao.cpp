#include<iostream>
#include<cstdlib> // chua hàm rand và srand
#include<ctime>   // chua hàm time
using namespace std;
int main () {	
	int choitiep;
	int luotchoi = 1;
	int summay = 0;
	int sumnguoichoi = 0;
	do {
		srand(time(NULL));
		system("cls");
		cout << "-----Chao mung den voi tro choi Keo Bua Bao-----     \n";
		cout << "          ---------------------         \n" << "     TI SO: BAN: " << sumnguoichoi << "   |  Ti SO: MAY: " << summay << endl;
		cout << "          ---------------------         \n";		
	    cout << "1. Keo\n" << "2. Bua\n" << "3. Bao\n";
	    cout << "Moi ban nhap phim 1-3: ";
	    int nguoichoi; cin >> nguoichoi;
	    int may = 1 + rand() % 3;
	    cout << "Ban chon: ";
	    switch (nguoichoi) {
	    	case 1:
	    		cout << "Keo"; break;
	    	case 2:
	    		cout << "Bua"; break;
			case 3:
	    		cout << "Bao"; break;
		}
		cout << "   |   May tinh chon: ";
		switch (may) {
			case 1:
				cout << "Keo"; break;
			case 2:
			    cout << "Bua"; break;
			case 3:
			    cout << "Bao"; break;	
		}
		cout << endl;
		if (nguoichoi == may) cout << "KET QUA: Hoa\n";
		else if ((nguoichoi == 1 && may == 3) || (nguoichoi == 2 && may == 1) ||(nguoichoi == 3 && may == 2)) cout << "KET QUA: Ban win\n";
		else cout << "KET QUA: Ban lose\n";
		for (int i = luotchoi; i <= luotchoi; i++) {
		    if ((nguoichoi == 1 && may == 3) || (nguoichoi == 2 && may == 1) ||(nguoichoi == 3 && may == 2)) {
		    	sumnguoichoi++;
		    	summay+=0;
			}
	 	    else if ((nguoichoi == 1 && may == 2) || (nguoichoi == 2 && may == 3) ||(nguoichoi == 3 && may == 1)) {
	 	        summay++;
	 	        sumnguoichoi+=0;
			}
	    }
		cout << "So diem nguoi choi la: " << sumnguoichoi;
		cout << "   |   So diem may tinh la: " << summay << endl; 	
		luotchoi++;
		cout << "Nhan phim 0 neu ban muon choi tiep, nhan phim bat ki de dung lai: "; cin >> choitiep;
		cout << endl;
    } while (choitiep == 0);
	return 0;
}
