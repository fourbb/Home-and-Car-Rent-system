#include <string>
#include <iostream>
#include <vector>
#include <conio.h>
#include <fstream>
#include <cstdlib>
#include <clocale>
#include <ctype.h>
#include <iomanip>
#include <locale.h>
#include "Class.h"
#include "operator.h"

using namespace std;





class Member {
public:
	vector <string> username;
	vector <string> password;
	vector <string> name;
	vector <string> lastname;
	vector <string> biletnum;
};
string bilet() {
	string bilet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string bilet2 = "0123456789";
	string biletNum = "";
	for (int i = 0; i < 4; i++) {
		char a = bilet[rand() % bilet.length()];
		char b = bilet2[rand() % bilet2.length()];
		biletNum += a;
		biletNum += b;

	}
	return biletNum;
}

void randevu() {
	srand(time(NULL));
	string model2, country2;
	string* model = &model2;
	int money2, day2;
	int* money = &money2;
	int* day = &day2;
	string* country = &country2;
	string name;
	string lastname;
	int cvp;
	Homee a;
	Member ran;
	string biletNum;
	biletNum = bilet();
	ran.biletnum.push_back(biletNum);
	cout << "\t\t	| Create an Appointment Section " << endl;
	cout << "\t\t	| Name; ";
	cin >> name;
	ran.name.push_back(name);
	cout << "\t\t	| Last Name: ";
	cin >> lastname;
	ran.lastname.push_back(lastname);

	cout << "\t\t	| ------------------------------------- " << endl;
	cout << "\t\t	| Randevu Ã‡eÅŸiti: " << endl;
back:
	cout << "\t\t	| 1-Car " << endl;
	cout << "\t\t	| 2-Home " << endl;
	cout << "\t\t        | Selection:"; cin >> cvp;
	if (cvp == 1) {
		cout << "\t\t	| ------------------------------------- " << endl;
		cout << "\t\t	| Car Randevu OluÅŸturma BÃ¶lÃ¼mÃ¼ne HoÅŸgeldiniz: " << endl;

		cout << "\t\t\t\t Randevu BaÅŸarÄ±lÄ± Bir Åekilde OluÅŸturuldu:" << endl;
		cout << "\t\t	| Randevuyu OluÅŸturan:" << "------------------|" << ran.name.back() << " " << ran.lastname.back() << " |" << endl;
		cout << "\t\t	| Randevu Kodu:" << "-------------------------|" << "#" << biletNum << "   |" << endl;
		cout << "\t\t	| Randevu Ã‡eÅŸiti:" << "-----------------------|" << "Car" << "         |" << endl;
		cout << "\t\t	| Araba Modeli:" << "-------------------------|" << "CarM" << "        |" << endl;

	}
	else if (cvp == 2) {
		cout << "\t\t	| ------------------------------------- " << endl;
		cout << "\t\t	| Home Randevu OluÅŸturma BÃ¶lÃ¼mÃ¼ne HoÅŸgeldiniz: " << endl;
		a.Home(&model2,&money2,&day2,&country2);
		cout << "\t\t\t\t Randevu BaÅŸarÄ±lÄ± Bir Åekilde OluÅŸturuldu:" << endl;
		cout << "\t\t	| Randevuyu OluÅŸturan:" << "-------------------|" << ran.name.back() << " " << ran.lastname.back() << " |" << endl;
		cout << "\t\t	| Randevu Kodu:" << "---------------------------|" << "#" << biletNum << "   |" << endl;
		cout << "\t\t	| Randevu Ã‡eÅŸiti:" << "-----------------------|" << "Home" << "     |" << endl;
		cout << "\t\t	| Ev Ã‡esiti:" << "-----------------------------|" << *model << "     |" << endl;
		cout << "\t\t	| Kalınacak Gün Sayısı:" << "-------------------|" << *day<< "       |" << endl;
		cout << "\t\t	| İl:" << "-------------------------------------|" << *country << "   |" << endl;
		cout << "\t\t	| Ödenecek Tutar:" << "-------------------------|" << *money << "$     |" << endl;
	}
	else {
		cout << "\n\t\t	| SeÃ§imi Kontrol ediniz " << endl;
		goto back;
	}

	

}
void menu() {
	setlocale(LC_ALL, "Turkish");
	Member a;
	a.password.push_back("admin");
	a.username.push_back("admin");
	int cvp, i, say;
	char passs;
	string username;
	string pass;
	cout << "\n\t\t     WELCOME TO THE HOME AND CAR RENTAL SYSTEM                  " << endl;
log:
	cout << "\n\t\t	| 1-Login " << endl;
	cout << "\t\t	| 2-Registering " << endl;
	cout << "\t\t	| 3-Exit " << endl;
	cout << "\t\t        | Selection:"; cin >> cvp;
	if (cvp == 1) {
		i = 0; say = 0;
		cout << "\t\t	| User Name :";
		passs = _getch();
		while (passs != 13) {
			username.push_back(passs);
			cout << passs;
			passs = _getch();
		}
		cout << "\n\t\t	| Password:";
		passs = _getch();
		while (passs != 13) {
			pass.push_back(passs);
			cout << '*';
			passs = _getch();
		}
		while (i < a.password.size()) {
			if (pass == a.password.at(i) && username == a.username.at(i)) {
				cout << "\n\n\n\t\t\t\t\t\t" << " Hello" << username << "\n";
				say++;
				randevu();
				system("PAUSE");
				system("CLS");
			}
			i++;
		}

		if (say == 0) {
			cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\tYou can register or try to log in to the system again\n\n";
			pass.clear();
			username.clear();
			goto log;
			system("PAUSE");
			system("CLS");
		}
	}
	else if (cvp == 2) {
		cout << "\t\t	| User Name :";
		passs = _getch();
		while (passs != 13) {
			username.push_back(passs);
			cout << passs;
			passs = _getch();
		}
		a.username.push_back(username);
		username.clear();
		cout << "\n\t\t	| Password:";
		passs = _getch();
		while (passs != 13) {
			pass.push_back(passs);
			cout << '*';
			passs = _getch();
		}
		a.password.push_back(pass);
		pass.clear();

		cout << "\n\n\t\t\t KayÄ±tÄ±nÄ±z BaÅŸarÄ±lÄ± OluÅŸturuldu Sisteme GiriÅŸ Yapabilirsiniz." << endl;
		goto log;
	}
	else if (cvp == 3) {
		cout << "\n\t\t	| Exit sucesfully" << endl;
		system("PAUSE");
		system("CLS");

	}
	else {
		cout << "\n\t\t	| please check the selection. \n\t\t\t| Please log in (1-3)" << endl;
		goto log;
		system("PAUSE");
		system("CLS");
	}
}

int main()
{

	setlocale(LC_ALL, "Turkish");
	menu();

}
