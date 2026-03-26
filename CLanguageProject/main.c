#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
//hour 2 exercises
/*ex02-02.c*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void display_line(void);
void exampleTwo(void);
void exampleThree(void);
//hour 3 exercises
void sizeOf(void);
int main(int argc, char *argv[]) 
{
	//hour 2 exercises
	display_line();
	printf("\n Teach Yourself C in One Hour a Day!\n\n");
	display_line();
	printf("\n");
	exampleTwo();
	exampleThree();
	sizeOf();
	return 0;
	//sleep(3);
}
//hour 2 exercises
/*print asterisk line*/
void display_line(void)
{
	int counter;
	for(counter=0; counter <40; counter++)
		printf("*");
}
void exampleTwo(void)
{
	int ctr;
	for( ctr=65; ctr <91; ctr++)
		printf("%c", ctr);
		printf("\n");
}
void exampleThree(void)
{
	char buffer[256];
	printf("Enter your name and press <Enter>:\n");
	fgets(buffer, sizeof(buffer), stdin);
	printf("\nYour name has %d characters and spaces!",strlen( buffer));
}
void sizeOf(void)
{
	printf("\nA char 	is %d bytes", sizeof(char));
	printf("\nAn int  is %d bytes", sizeof(int));
	printf("\nA short is %d bytes",sizeof(short));
	printf("\nA long is %d bytes", sizeof(long));
	printf("\nA long long is %d bytes \n", sizeof(long long));
	printf("\nAn unsigned char is %d bytes", sizeof(unsigned char ));
	printf("\nAn unsigned int is %d bytes", sizeof(unsigned int));
	printf("\nAn unsigned short is %d bytes", sizeof(unsigned short));
	printf("\nAn unsigned long is %d bytes", sizeof(unsigned long));
	printf("\nAn unsigned long long is %d bytes\n", sizeof(unsigned long long));
	printf("\nA float is %d bytes", sizeof(float));
	printf("\nA double is %d bytes\n", sizeof(double));
	printf("\nA long double is %d bytes\n", sizeof(long double));
}
/*end of program*/