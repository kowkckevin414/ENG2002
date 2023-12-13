#include <iostream>
using namespace std;
#include "complexNum.h"
bool menu();
complexNum babycomplexno(5,7); // set the default complex number for the class object

int main()
{
	
	bool exitflag = false; // define the local bool function for looping menu int main()
	cout << "Welcome to ADA" << endl;                                  // welcome message
	cout << "Notice: Your default complex Number is 5 + 7i" << endl;   // tell the deault number to user
	cout << "Option 5 of the menu is a LONG article !!! becarefull to click in !!!" << endl; // warning message with option 5
	while (exitflag == false) // make the loop for menu
	{
		exitflag = menu(); //set the local bool = the bool menu() function that i set below.
		
	}
	return 0; // end the program
}


bool menu()
	{
	
		int choice; //set up the local int varible to allow user choice the option then run my default program
		bool flag = true; // set up the local bool true for start the program
		// show the menu and the option choosing
		cout << "======================== MENU ========================" << endl;
		cout << "1.Show your now statue of complex number" << endl;
		cout << "2.Edit your complex number" << endl;
		cout << "3.Calculate the reciprocal of your complex number" << endl;
		cout << "4.Get the square root " << endl;
		cout << "5.Information of this ADA(ªø¤å·V¤J)" << endl;
		cout << "6.Quit" << endl;
		cout << "Enter your choice (1,2,3,4,5,6):";
		cin >> choice; // ask for user to input the command

		switch (choice)
		{
		case 1: // display the current complex number 
			babycomplexno.display(); break;
		case 2: // set up new complex number
			do // require  to imput none zero complex number
			{
				babycomplexno.setno();
				flag = babycomplexno.geterr();
				if (flag == true) {
					cout << "0 complex number is not accpted! Please enter again!!!" << endl;
				}
				
			} while (flag == true);

			 break;
		case 3: // execute the task 4 requirement
			babycomplexno.reciprocal(); break;
		case 4: // execute the square root (the last requirment of credit)
			babycomplexno.sqrtNum(); break;
		case 5: // provide the very detail with the ada project and the team who build this whole project
			babycomplexno.information(); break;
		case 6: // quit the menu and close the program
			return true; //make the bool become true to end the loop of the menu
		default: // not accept choice except (1-6)
			cout << "Unrecognized input, enter again!" << endl << endl; break;
		}
		return false; // keep looping the program by outcome fasle

	}
