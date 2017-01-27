#ifndef BRAINFUCK_H
#define BRAINFUCK_H
#include <cstdlib>
using namespace std;

void incrementPtr(char *ptr) {
	++ptr;
}
void decrementPtr(char *ptr) {
	--ptr;
}
void incrementPtrValue(char *ptr){
	++*ptr;
}
void decrementPtrValue(char *ptr){
	--*ptr;
}
void outputByte(char *ptr){
	putchar(*ptr);
}
void inputByte(char *ptr){
	*ptr = getchar();
}

#endif