/*header file for phone problem*/
#include<iostream>
#include<string>
class phone_problem
{
private :
	char problem;
	



public:
	void setsubmitsystem(const char jproblem);
};

/*phone problem.cpp*/

#include"phone_problem.h"
#include<iostream>
#include<string>
using namespace std;


void phone_problem::setsubmitsystem(const char jproblem)
{
	problem=jproblem;
}

