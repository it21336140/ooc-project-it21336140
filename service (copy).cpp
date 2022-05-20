/*header file for the service*/
#include<iostream>
#include<string>
class service
{
private :
char name[20];
public:
void setservicedetails(const char name);
void viewdetails();
};
/service.cpp*/
#include " service.h"
#include<iostream>
#include<string>
using namespace std;
void service::setservicedetails(const char sname)
{
name[] = sname[];
}
void service::viewdetails()
{
cout << "service is " << name << endl;
}