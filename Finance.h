/*header file forfinance*/
#include<iostream>
#include<string>
class finance
{
private :
char company_name;
public:
void setdetails(const char cname);
};
/*finance.cpp*/
#include"finance.h"
#include<iostream>
#include<string>
using namespace std;
void finance::setdetails(const char cname)
{
company_name = cname;
}