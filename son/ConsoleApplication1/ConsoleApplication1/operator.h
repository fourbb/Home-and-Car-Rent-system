
#include <string>
#include <iostream>

using namespace std;

class OperatorOver
{
private:
	char* str;
public:
	OperatorOver();
	~OperatorOver();
	OperatorOver operator+(const OperatorOver &a) const;
	bool  operator ==(const OperatorOver &a) const;
	OperatorOver operator-() const;

};

OperatorOver::OperatorOver(): str{ nullptr } {
	str = new char[1];
	*str = '\0';

}

OperatorOver::~OperatorOver()
{
	delete[] str;
}
