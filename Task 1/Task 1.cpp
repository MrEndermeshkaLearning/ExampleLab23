#include <stdio.h>
#include <string.h>
#include <cctype> 

//3

int main() {
	
	char string[255];
	printf("Please enter the string\n=>");
	gets_s(string);
	int countUpper=0;
	for (int i = 0; i < strlen(string); i++) {
		if (isupper(string[i])) {
			countUpper++;
		}
	}
	printf("Count of upper letter is %d", countUpper);

}