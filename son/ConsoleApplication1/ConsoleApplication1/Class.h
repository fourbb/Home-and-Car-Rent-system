
#include <string>
#include <iostream>


using namespace std;

class I_Interface{
public:
	int money(int, int, int );
};


class Homee
{
public:
	void Home(string*, int*, int*, string*);
	string homemodel;
	string country;
	string plansize;
};
class HomeM : public Homee {
public:
	int money = 0;
	int day;
	int buildingAge;
	int floor;
};
class House : public HomeM, I_Interface {
private:
	string type="Home";
	string balcony;
	string get_Balcony() {
		return balcony;
	}
	string get_Type() {
		return type;
	}
public:
	int money(int , int, int );

};

class Village : public HomeM, I_Interface {
private:
	string type2="Villa";
	string balcony2;

	string get_Typee() {
		return type2;
	}
	string get_Balconyy() {
		return balcony2;
	}
public:
	int money(int , int , int );
};



