#include <string.h>
#include <stdio.h>
#include <ctype.h>

// forward declarations
//int can_print_it(char ch);
//void print_letters(char arg[]);

// int can_print_it(char ch)
// {
// 	return isalpha(ch) || isblank(ch);
// }


void print_letters(char arg[],int length)
{
	int i = 0;

	// for(i = 0; arg[i] != '\0'; i++) {
	for(i = 0;i<length; i++) {
		char ch = arg[i];

		if(isalnum(ch) || isblank(ch)) {
			printf("'%c' == %d ", ch, ch);
		}
	}

	printf("\n");
}

void print_arguments(int argc, char *argv[])
{
	int i = 0;

	for(i = 0; i < argc; i++) {
		int arglen=strlen(argv[i]);
		print_letters(argv[i],arglen);
	}
}

int main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return 0;
}
