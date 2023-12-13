#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class complexNum // declare the class object
{
public:
	complexNum(int realno, int imagineno); // Constructor of complex number  
	~complexNum();       //// Destructor of complex number  
	void display();      // public function for show the present complex number
	void setno();        //public function for customize the complex number
	void reciprocal();  //public function for reciprocal function (task 4)
	void sqrtNum();     //public function for square root function (last part of credit)
	bool geterr();      //public boolean function for send message to notice error
	void information(); //public function for information article
private:
	double realno;     //member variable for real no
	double imagineno;  //member variable for imagine number
	bool errNumber;    //member variable for error messagae
};
