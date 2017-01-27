#include <string>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "brainfuckFunctions.h"
using namespace std;




int main(int argc, char *argv[]) {
	if (argc != 2)
		cerr << "Usage: " << argv[0] << " inputFile" << endl;
	ifstream ifs;
	char brainfuck;
	// ofstream ofs;

	char array[30000] = {0};
	char *arrayPtr = array;

	ifs.open(argv[1]);
	if (ifs.fail())
		cerr << "Could not open file: " << argv[1] << endl;

	ifs >> brainfuck;

	while (!ifs.eof()) {
		switch (brainfuck) {
			case '>': incrementPtr(arrayPtr);
					  break;
			case '<': decrementPtr(arrayPtr);
					  break;
			case '+': incrementPtrValue(arrayPtr);
					  break;
			case '-': decrementPtrValue(arrayPtr);
					  break;
			case '.': outputByte(arrayPtr);
					  break;
			case ',': inputByte(arrayPtr);
					  break;
		}

		ifs >> brainfuck;
	}

	ifs.close();

	if (ifs.fail())
		cerr << "Could not close file: " << argv[1] << endl;

	return 1;

}


