/*header file for the unregister user*/
#include<iostream>
#include<string>
class unregister_user
{
private :
	char namel[20];
	char address[50];
	int number;
	char email[20];

public:
	void setvalues(const char pname, const char paddress, int pnumber, const char pemail);
	void viewdetails();
};

/*unregister_user.cpp*/

#include " unregister_user.h"
#include<iostream>
#include<string>
using namespace std;


void unregister_user:: setvalues(const char pname, const char paddress, int pnumber, const char pemail)
{
	namel[]= pname;
	address[] = paddress;
	number = pnumber;
	email[] = pemail;

}

void unregister_user::viewdetails()
{
	cout << "name " << namel << endl;
	cout << "address is " << address<<  endl;
	cout << "number us " << number << endl;
	cout << "emails is " << email << endl;
}

 
