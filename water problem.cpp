/*header file for  water connection problem*/
#include<iostream>
#include<string>
class waterconnection_problem
{
private :
	char problem;
	



public:
	void setsubmitsystem(const char jproblem);
};

/*water connection problem.cpp*/

#include"waterconnection_problem.h"
#include<iostream>
#include<string>
using namespace std;


void waterconnection_problem::setsubmitsystem(const char jproblem)
{
	problem=jproblem;
}

