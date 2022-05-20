/*header file for thephone bill*/
#include<iostream>
#include<string>
class  bill
{
private :
       int accoun_num;
       int amount;
public:
       void setbilldetails(int anumber, int aamount);
/*bill.cpp*/
#include "bill.h"
#include<iostream>
#include<string>
using namespace std;
void bill::setbilldetails(int anumner, int aamount)
{
accoun_num = anumner;
amount = aamount;
  }