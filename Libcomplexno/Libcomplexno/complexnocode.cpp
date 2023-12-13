#include "complexNum.h"
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

complexNum::complexNum(int initrealno, int initimagineno)
{

	realno = initrealno; //set the initial  value for realno(real number)
	imagineno = initimagineno; //set the initial  value for the coefficient of imaginry number
	//cout << "Constructor runs.\n yout iniial complex number is /t("<< realno <<")+"<< imaginno<<"i";
}

complexNum::~complexNum()
{
	cout << "Run destructor.\n"; // running a destructor, in case of when detele the pointer value to release the memory
}


void complexNum::display()
{
	cout << "Yout current complex number is\t " << realno << "+" << imagineno << "i" << endl; 
	// display the current complex number 
}

bool complexNum::geterr()
{
	return errNumber;
	//in order to prvent the situation that 0+0i complex number, this is the boolean function set to correct the error input(0+0i)
}

void complexNum::setno()
{
	int x, y; // set up local varibles x and y
	cout << "please enter your new real number: "; // ask for input x
	cin >> x; // user enter x
	cout << "please enter your new imagine number: "; // ask for input y
	cin >> y; //user enter y
	if (x== 0 && y == 0) //preventing user input (0+0i) situation
	{
		errNumber = true; // making a loop for asking user to input none zero number 
	}
	else // correct situation
	{
		realno = x; // set up input x = realno(real number)
		imagineno = y; // set up input y = imagineno (the coeffiecent of imaginry number)
		cout << "Your new complex number is\t" << realno << "+" << imagineno << "i" << endl; // show the new result that user just enter
		errNumber = false; // no error then no loop for asking correct since already correct 
	}
}

void complexNum::reciprocal() //task 4
{
	double st_part; // st_part varible refer to 1 st part that example show that (5/(5^2+7^2))  == x part of task 4
	double nd_part; // nd_part varible refer to 2 nd part that example show that (-7/(5^2+7^2)) == y part of task 4
	double r = realno; // set up local varible r = class varible realno
	double i = imagineno; // set up local varible i = class varible imagineno
	st_part = r / (r * r + i * i); // make the formula of example : (5/(5^2+7^2))
	nd_part = -i / (r * r + i * i); //  make the formula of example :(-7/(5^2+7^2))
	realno = st_part; // save the 1st result into realno
	imagineno = nd_part; // save the 2nd result into imagineno
	cout << "Your reciprocal complex number is\t" << realno << " + " << imagineno << "i" << endl; // show the result to user

}

void complexNum::sqrtNum() // last part of the credit === find the square root of the complex number
{
	double a = sqrt(realno * realno + imagineno * imagineno); 
	// it is the local varible that represent sqrt(x^2+y^2) ,
	//reduce the reaped work ~x~ since it could be share the same with both x and y
	double v = sqrt((realno + a) / 2);  // v is the real number part
	double pre_s = sqrt((-realno + a) / 2); // local varible pre_s mean to the s not multi with sgn(y) yet 
	int sgn_y;
	if (imagineno == 0) {               // define 3 situations with 3 values for sgn(y)
		sgn_y = 0;
	}
	if (imagineno > 0) {
		sgn_y = 1;
	}
	if (imagineno < 0) {
		sgn_y = -1;
	}
	double s = sgn_y * pre_s;
	realno = v; //save the reult to be new realno
	imagineno = s; // save the reult to be new imagineno
	cout << "Your squt complex number is\t" << realno << " +  +-(" << imagineno << "i) " << endl;


}

void complexNum::information()
// just make the detail information for user that do not know what's going on which is a design for user.
{
	cout << endl << endl;
	cout << "=================Information of ADA=================" << endl;
	cout << "This is an object-oriented console application that perform calcutions on complexnumber." << endl;
	cout << "(x+yi) <------ x is the real number part, and y is the coefficient part of *i(imagaiary unit)" << endl;
	cout << " *note: square of i is -1 // i^2 = -1 " << endl;

	cout << endl << "I was assign to complete task 4" << endl;
	cout << "Team 24 ==>  24%5 = 4 ==> Do Task 4" << endl;

	cout << endl << "==========Detail of Task 4==========" << endl;
	cout << "Here is the detail to introduce menu option 3.Calculate the reciprocal of your complex number" << endl;
	cout << "The option 3 is the function that finds thereciprocal of the complex number  " << endl;
	cout << "and return the result as complex number." << endl;

	cout << endl << "For example:" << endl;
	cout << "our defaulted complex number is 5+7i" << endl;
	cout << "the function will return x = 0.0676=(5/(5^2+7^2)) , y = -0.0946==(-7/(5^2+7^2))" << endl;
	cout << "then we solve the reciprocal of (5+7i) and also save automatically this reciprocal as our new complex number" << endl;
	cout << "The new saved complex number is : 0.0676 + -0.0946i" << endl;

	cout << endl << "==========Detail of square root==========" << endl;
	cout << "Here is the detail to introduce menu option 4.Get the square root" << endl;
	cout << "The option 4 is the function that implement a member function to the class that can compute " << endl;
	cout << "the square root of the complex number(x + yi) " << endl;

	cout << endl << "For example:" << endl;
	cout << "our defaulted complex number for this case is 9+0i" << endl;
	cout << "the function will return x = 3= sqrt((9+squrt(9^2+0^2))/2) , y = 0 = *sgn(0) sqrt((-9+squrt(9^2+0^2))/2)" << endl;
	cout << "then we solve the square root of (9+0i) and also save automatically this reciprocal as our new complex number" << endl;
	cout << "The new saved complex number is : 3 + 0i" << endl;
	cout << "*note: sgn(y) is the signum function defined as follow," << endl;
	cout << "sgn(y) = -1 , when y <0" << endl;
	cout << "sgn(y) = 0 , when y =0" << endl;
	cout << "sgn(y) = 1 , when y >0" << endl;

	cout << "==========Credit==========" << endl;
	cout << "Team 24 --- Kwok Kevin" << endl;
	cout << endl << endl << "BACK TO THE MENU" << endl;
}