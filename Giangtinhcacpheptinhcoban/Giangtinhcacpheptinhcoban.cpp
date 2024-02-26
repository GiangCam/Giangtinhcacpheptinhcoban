#include <iostream>
using namespace std;
	int tinhtong(float, float) {
		// int sotong = so1 + so2;
		// return sotong;
		return so1 + so2;
	}
	int tinhhieu(float, float) {
		// int sotong = so1 - so2;
		// return sotong;

		return so1 - so2;
	}
	int tinhtich(float, float) {
		// int sotong = so1 - so2;
		// return sotong;

		return so1 - so2;
	}
	int tinhthuong(float, float) {
		// int sotong = so1 - so2;
		// return sotong;

		return so1 - so2;
	}

int main() {
	//thai báo biến 
	float so1, so2, tong;

	//nhập dữ liệu vào biến
	cout << "CHUONG TRINH TINH CAC PHEP TINH CO BAN\n";
	cout << "nhap so thu nhat;"; cin >> so1;
		cout << "nhap so thu hai"; cin >> so2;
		
	//tính tổng 
	tong = tinhtong(so1, so2);
	tong = tinhhieu(so1, so2);
	tong = tinhtich(so1, so2);
	tinhthuong(so1, so2)
	//xuất dữ liệu
	cout << so1 << " + " << so2 << " = " << tong << endl;
	cout << so1 << " - " << so2 << " = " << tong << endl;
	cout << so1 << " * " << so2 << " = " << tong << endl;
	float t
	return 0;
}
