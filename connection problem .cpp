#include<iostream>
#include<string>
class connection_problem
{
private :
	char problem;
	



public:
	void setsubmitsystem(const char jproblem);
};

/*connection problem.cpp*/

#include"connection_problem.h"
#include<iostream>
#include<string>
using namespace std;


void connection_problem::setsubmitsystem(const char jproblem)
{
	problem=jproblem;
}

