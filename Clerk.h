/*header file for cleark*/
#include<iostream>
#include<string>
class clark
{
private :
char company_name;
public:
void setdetails(const char cname);
};
/*clark.cpp*/
#include"clark.h"
#include<iostream>
#include<string>
using namespace std;
void clark::setdetails(const char cname)
{
company_name = cname;
}