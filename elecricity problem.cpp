/*header file for electricity problem*/
#include<iostream>
#include<string>
class electricity_problem
{
private :
	char problem;
	



public:
	void setsubmitsystem(const char jproblem);
};

/*water connection problem.cpp*/

#include"electricity_problem.h"
#include<iostream>
#include<string>
using namespace std;


void electricity_problem::setsubmitsystem(const char jproblem)
{
	problem=jproblem;
}

