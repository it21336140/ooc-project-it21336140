/*header file for job*/
#include<iostream>
#include<string>
class job
{
private :
char name;
char address;
char email;
int mobile;
public:
void setjobdetails(const char jname,const char jaddress,const char jemail,int
jnum);
};
/*job.cpp*/
#include"job.h"
#include<iostream>
#include<string>
using namespace std;
void job::setjobdetails(const char jname,const char jaddress,const char jemail,int jnum)
{
name = jname;
address = jaddress;
email = jemail;
mobile = jnum;
  }