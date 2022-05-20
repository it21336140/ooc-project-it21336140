/*header file for water connection*/
#include<iostream>
#include<string>
class water_connection
{
private :
int postal_code;
int home_number;
public:
void setwaterdetails(int pcode,int hnum);
};
/*water connection.cpp*/
#include "water connection.h"
#include<iostream>
#include<string>
using namespace std;
void water_connection::setwaterdetails(int ppcode,int hhumn)
{
postal_code = ppcode;
home_number = hhumn;
}