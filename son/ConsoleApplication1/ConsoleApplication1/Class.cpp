#include "Class.h"
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


using namespace std;


int Village :: money(int model, int model2, int day) {
	switch (model) {
	case 1:
		switch (model2) {//istanbul villa
		case 1:
			return 390 * day;
		case 2:
			return 470 * day;
		case 3:
			return 567 * day;
		case 4:
			return 680 * day;
		}
	case 2:
		switch (model2) {//ankara villa
		case 1:
			return 300 * day;
		case 2:
			return 450 * day;
		case 3:
			return 600 * day;
		case 4:
			return 650 * day;
		}
	}
}
int House:: money(int model3, int model4, int day2) {
	switch (model3) {
	case 1:
		switch (model4) {//istasnbul home
		case 1:
			return 155 * day2;
		case 2:
			return 172 * day2;
		case 3:
			return 195 * day2;
		case 4:
			return 250 * day2;
		}
	case 2:
		switch (model4) {//ankara
		case 1:
			return 100 * day2;
		case 2:
			return 110 * day2;
		case 3:
			return 180 * day2;
		case 4:
			return 250 * day2;
		}
	}
}

int konut() {
	int cvp;
	cout << "\t\t	| Konut tüürünü seçin: " << endl;
	cout << "\t\t	| 1-)Daire. " << endl;
	cout << "\t\t	| 2-)Village. " << endl;
	cout << "\t\t	| Section: ";
	cin >> cvp;
	switch (cvp) {
	case 1:
		return 1;
	case 2:
		return 2;
	}
}
void Homee::Home(string* model, int* money, int* day, string* country) {
	HomeM a;
	House b;
	Village c;
	int cvp, day2, time, homee, moneyy;
log2:
	cout << "\t\t	| Lütfen Þehir Seçiniz " << endl;
	cout << "\t\t	| 1-)Ýstanbul. " << endl;
	cout << "\t\t	| 2-)Ankara. " << endl;
	cout << "\t\t	| Section: ";
	cin >> cvp;

	
}