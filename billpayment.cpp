/*header file for the bill payment*/
#include<iostream>
#include<string>
class bill_payment
{
private :
char bill_name[50];
char address[50];
char emai[50];
int phone_number;
public:
void setbillpayment(const char bname, const char baddress, const char bemail, int
bnumber);
};
/*bill payment.cpp*/
#include "bill_payment.h"
#include<iostream>
#include<string>
using namespace std;
void bill_payment::setbillpayment(const char bname, const char baddress, const char
bemail, int bnumber)
{
bill_name = bname;
address = baddress;
email = bemail;
phone_number = bnumber;
}