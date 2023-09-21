#include<iostream>
#include "scoreboard.h"
using namespace std;



int main(){
	
	entry player1;
	Scoreboard* board = new Scoreboard;
	char op;
	
	do {
		cout << "OP: ";
		cin >> op;
		
		switch(op) {
			
			case 'a':
		
				cin.ignore();
				cout << "Enter Name: ";
				getline(cin, player1.name);
			
				
				cout << "Enter Country: ";
				getline(cin, player1.country);
			
				
				cout << "Enter Score: ";
				cin>>player1.score;
			
				
				cout << board->add(player1) << endl;
			
			break;
			
			case 'p':
				board->print();
			break;
		}
		
	} while (op != 'x');
	

	


	

	
	
	return 0;
}
