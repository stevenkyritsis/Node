//
//
//

#include<iostream>
using namespace std;

struct node{
	//What has to be placed in the node structure?
}



int main()
{
	int input;

do{
	cout << "This program dynamically allocates memory.\n";
	cout << "What would you like to do?\n";
	cout << "1. Start a linked list\n";
	cout << "2. Display the linked list\n";
	cout << "3. Add a node\n";
	cout << "4. Edut a node\n";
	cout << "5. Delete a node\n";
	cout << "6. Search the linked list\n";
	cout << "7. EXIT\n";
	cin >> input;
	cout << endl;

	switch(input){
		case 1:{
			break;
		}

		case 2:{
			break;
		}

		case 3:{
			break;
		}

		case 4:{
			break;
		}

		case 5:{
			break;
		}

		case 6:{
			break;
		}

		case 7:{
			return 0;
			break;
		}

		default: cout << "Error! Please enter 1 of the numbers above.\n";
	}
}while(input != 7);

	return 0;
}
