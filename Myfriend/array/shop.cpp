#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
string product[10][2] = { {"Noodles 55g x 10pcs","50"},
{"Coke Soft Drink Original 1.5L","24"},
{"Hale's Blue Boy Red 1L","52"},
{"Euro cake Custard Cream 24g x 6pcs","35"},
{"Colgate Salt Herbal Protection Toothpaste 80g","28"},
{"Lactasoy Hi Calcium UHT Soymilk 300ml x 6pcs","47"},
{"Dozo Corn Cheese Flavored Japanese Rice Cracker 10pcs","19.50"},
{"Ros Dee Pork Flavour Seasoning Powder 165g","24.50"},
{"Dutch Mill 4in1 Mixed Fruits Drinking Yoghurt 180ml x 4pcs","35"},
{"Copp Sky Honey Flavour Breakfast Cereals 70g","18"} };


string receipt[99][2];
int q = 0;

void menu(int& se);
void show_product();
void scan_product();
void smenu();
void calc(int a);

int main() {
	int se;
	for (int i = 0; i < 99; i++) {
		receipt[i][1] = "0";
	}
	menu(se);
	switch (se) {
	case 1: show_product();
		break;
	case 2: exit(0);
		break;
	case 3: scan_product();
		break;
	default: exit(0);
		break;
	}
	return(0);

}

void show_product() {
	char se;
	system("cls");
	cout << "+" << setfill('=') << setw(89) << "+" << endl;
	cout << setfill(' ') << setw(60) << "TESCO LOTUS" << endl;
	cout << "+" << setfill('=') << setw(89) << "+" << endl;
	cout << setfill(' ') << setw(31) << "Name" << setw(58) << "Price" << endl;

	for (int i = 0; i < 10; i++) {
		cout << setfill(' ') << setw(58) << left << product[i][0] << setw(31) << right << product[i][1] << endl;  //i คือแทนอาเรย์ตัวแรก 0กับ1 แทนตัวหลัง
	}
	cout << "+" << setfill('=') << setw(89) << "+" << endl;
	for (int i = 1; i < 2; i++) {
		cout << "Would you buy it? (y/n)\n";
		cin >> se;
		cout << "Do you confirm? (y/n)\n";
		char se1;
		cin >> se1;
		switch (se1) {
		case 'y': i++;
		default: i--;
		}
	}
	switch (se) {
	case 'y': break;
	default: exit(0);
		break;
	}
}

void menu(int& se) {
	cout << "+" << setfill('=') << setw(107) << "+" << endl;
	cout << setfill(' ') << setw(60) << "TESCO LOTUS" << endl;
	cout << "+" << setfill('=') << setw(107) << "+" << endl;
	cout << "selce Case\n";
	cout << " 1. Show Product\n";
	cout << " 2. Cler Product\n";
	cout << " 3. Exit\n";
	cin >> se;
}

void scan_product() {
	system("cls");
	int pid;
	int total = 0;
	smenu();
	for (int i = 0; i < 20; i++) {
		if (receipt[i][0] != " ") {
			for (int j = 0; j < 2; j++) {
				if (receipt[i][1] != "0") {
					cout << receipt[i][j] << "     ";
				}
			}
			total += atoi(receipt[i][1].c_str());
			cout << endl;
		}
	}
	cout << endl << "+" << setfill('=') << setw(107) << "+" << endl;
	cout << "Total : " << total << endl;
	cout << "Enter product id : ";
	cin >> pid;
	if (pid == 0) {
		calc(q);
	}
	else {
		receipt[q][0] = product[pid - 1][0];
		receipt[q][1] = product[pid - 1][1];
		q++;
		cin.clear();
		cin.ignore();
		scan_product();
	}
}

void smenu() {
	cout << "+" << setfill('=') << setw(107) << "+" << endl;
	cout << setfill(' ') << setw(5) << "TESCO LOTUS" << endl;
	cout << "+" << setfill('=') << setw(107) << "+" << endl;
}

void calc(int a) {
	int money, totalm{}, change;
	cout << "Total product : " << a << endl;
	for (int i = 0; i < 99; i++) {
		totalm += atoi(receipt[i][1].c_str());
	}
	cout << "Money  : "; 
	cin >> money;
	change = money - totalm;
	cout << "Change : " << change << endl;
}