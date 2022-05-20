/*header file for the system*/
#include<iostream>
#include<string>
class system
{
private :
	int userid;
	int connectionis;
	int problemid;
	int jobid;
	int paymentid;

public:
	void setsubmit(int uid,int cid,int pid,int jid,int ptid);
	void getconfirmationletter();
};

/*system.cpp*/

#include " system.h"
#include<iostream>
#include<string>
using namespace std;


void  system::setsubmit(int uid, int cid, int pid, int jid, int ptid)
{
	userid = uid;
	connectionis = cid;
	problemid = pid;
	jobid = jid;
	paymentid = ptid;
}
	

void system::getconfirmationletter()
{
	cout << "confirmation letter send succesfully" << endl;
	
}

