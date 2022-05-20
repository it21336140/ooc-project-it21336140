/*header file for tv connection*/
#include<iostream>
#include<string>
class tv_connection
{
private :
char model;
public:
void setdetails(const char tmodel);
};
/*tv connection.cpp*/
#include "tv connection.h"
#include<iostream>
#include<string>
using namespace std;
void tv_connection::setdetails(char tmodel)
{
model = tmodel;
}
