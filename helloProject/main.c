// main.c
#include <stdio.h>
#include "hello.h"

void print_hello() {
	printf("Hello, World from Planet C Language!!!\n");
}
void print_goodbye() {
	printf("Goodbye, Earth; returning back to home planet!!!!\n");
}
int main() {
	print_hello();
	print_goodbye();
	return 0;
}
