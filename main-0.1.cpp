// A simple menu written in C++ to make it easier 
// my wife to access games on the DOS box.
// Feel free to use or modify the code for any
// non-commercial purpose.
//
// (c)2015 Matt Knouff

#include <cstdio>
#include <iostream>
using namespace std;

char listMenu(void) {
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
	cin >> choice;
	fflush(stdout);
	return choice;
} 

void loadGame(char) {
	if (char == 'A' || char == 'a')
		system("atn.exe");
	else if (char == 'B' || char == 'b')
		system("bc.exe");
	else
		GOTO 36;			
}

int main(int argc, char **argv) {
	char option = listMenu();
	
	while(option != 'Q' || option != 'q')
		loadGame(option);
		if (option == 'Q' || option == 'q')
			return 0;
		else {
			loadGame(option);
			listMenu();
	}
}
