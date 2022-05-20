/*header file for the register user*/
#include<iostream>
#include<string>
class register_user
{
private :
	char email[50];
	char name[20];
	int password;

public:
	  void registered_user();
         void setvalues(const char rmail, const char rname, int rpassword);
	  void viewdetails();
 
};
/*register_user.cpp*/

#include " register_user.h"
#include<iostream>
#include<string>
using namespace std;

register_user::register_user()

{
 cout << "Default constructor of register_user class is called"
<< endl;
} 
void register_user::setvalues(const char rmail, const char rname, int rpassword)
{
	rmail[] = email[50];
	rname[] = name[20];
	rpassword = password;


}
register_user::register_user() {
	cout << "register_user  destructed" << endl;
}


