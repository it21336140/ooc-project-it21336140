/*header file for land phone connection*/
#include<iostream>
#include<string>
class landphone_connection
{
private :
char lp_model;
public:
void setlandphonedetails(const char mode);
};
/*land phone connection.cpp*/
#include land phone connection.h"
#include<iostream>
#include<string>
using namespace std;
void landphone_connection::setlandphonedetails(const char mode)
{
lp_model = mode;
}