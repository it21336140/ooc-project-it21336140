/*header file for get connection*/
#include<iostream>
#include<string>
class get_connection
{
private :
char connection_type;
char address;
char email;
public:
void setdetails(const char ctype,const char gaddress,const char gemail);
};
/*getconnection.cpp*/
#include "getconnection.h"
#include<iostream>
#include<string>
using namespace std;
void get_connection::setdetails(char ctype,char gaddress,char gemail)
{
connection_type = ctype;
address = gaddress;
email = gemail;
}





