#ifndef PHONENUMBER_H_INCLUDED
#define PHONENUMBER_H_INCLUDED
class PhoneNumber {
private:
	int phoneNumber[15];

	char operators[50];

public:
	PhoneNumber();
	void getPhoneNumber();
	void getOperators();
};


#endif 