#include "PhoneNumber.h"
#include <iostream>
#include<string>
using namespace std;



PhoneNumber::PhoneNumber()
{
}


void PhoneNumber::getPhoneNumber() {
	for (int index = 0; index < 15; index++) {

		cout << "Enter your phone number:" << endl;
		cin >> phoneNumber[15];
		cout << "Your phone number is:" << phoneNumber[15] << endl;
	}
}


void PhoneNumber::getOperators() {
	for (int index = 0; index < 15; index++) {

		cout << "Enter operator name:" << endl;
		cin >> operators[50];
		cout << "Operator: " << operators[50] << endl;
	}

}