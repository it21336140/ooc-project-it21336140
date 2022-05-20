/*header file for architecture*/
#include<iostream>
#include<string>
class architecture
{
private :
char company_name;
public:
void setdetails(const char cname);
};
/*finance.cpp*/
#include"architecture.h"
#include<iostream>
#include<string>
using namespace std;
void architecture::setdetails(const char cname)
{
company_name = cname;
}