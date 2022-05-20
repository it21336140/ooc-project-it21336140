*header file for report problem*/
#include<iostream>
#include<string>
class report_problem
{
private :
	char name;
	char address;
	char email;
	int mobile;




public:
	void setdetails(const char jname, const char jaddress, const char jemail, int jnum);
};

/*report problem.cpp*/

#include"report_problem.h"
#include<iostream>
#include<string>
using namespace std;


void report_problem::setdetails(const char jname, const char jaddress, const char jemail, int jnum)
{
	name = jname;
	address = jaddress;
	email = jemail;
	mobile = jnum;
}


 
