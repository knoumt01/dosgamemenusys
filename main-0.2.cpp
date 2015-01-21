// A simple menu written in C++ to make it easier my wife to access games on the DOS box.
// This is also designed to show basic implementation of if/else & while constructs as well
// as functions of different types.
//
// (c)2015 Matt Knouff

#include <cstdio>
#include <iostream>
using namespace std;

void listMenu(void);
int loadGame(void);


int main(int argc, char **argv) {
	listMenu();
}

void listMenu(void) {
	char choice;
	cout << "DOS Game Menu - BETA" << endl;
	cout << "(A)void the Noid" << endl;
	cout << "(B)attle Chess" << endl;
	cout << "(H)ome Alone" << endl;
	cout << "Hu(g)os House of Horrors" << endl;
	cout << "(J)ill of the Jungle" << endl;
	cout << "(O)regon Trail" << endl;
	cout << "Press (Q) to quit..." << endl;
	cout << "Enter your choice:" << endl;
	loadGame();
} 

int loadGame(void) {
	char game;
	cin >> game;
	fflush(stdout);
	if (game == 'A' || game == 'a') { system("/usr/home/mkdesign/bin/dosbox"); listMenu(); }
	else if (game == 'B' || game == 'b') { system("a"); listMenu();}
	else if (game == 'H' || game == 'h') { system("a"); listMenu();}
	else if (game == 'G' || game == 'g') { system("a"); listMenu();}
	else if (game == 'J' || game == 'j') { system("a"); listMenu();}
	else if (game == 'O' || game == 'o') { system("a"); listMenu();}
	else if (game == 'Q' || game == 'q') { 
		cout << "Are you sure? (y/n): ";
		char yesOrNo;
		cin >> yesOrNo;		
		if (yesOrNo == 'Y' || yesOrNo == 'y')
			return 0;
		else
			listMenu();
	}
	else {
		fflush(stdout);
		cout << "Invalid option! Try again..." << endl;
		listMenu();
	}
				
}
