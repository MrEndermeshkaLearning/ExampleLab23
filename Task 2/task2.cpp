#include <stdio.h>
#include <string.h>

//15

int main() {
	char string[255];
	printf("Insert string please\n");
	gets_s(string);
	printf("Your string is '%s' ", string);
	int lastChar = 0;
	int countComa = 0;
	for (int i = 0; i < 255; i++) {
		if (string[i] == ' ' && (i!=0 && i!=254)){
			if (string[i - 1] == ',' || string[i + 1] == ',') {
				countComa++;
			}
		}
		if (string[i] == '■') {
			lastChar = i - 1;
			break;
		}
	}
	if (string[strlen(string)-1] == '.') {
		printf("\nString ends by dot\n");
	}
	printf("In string this count of point %d", countComa);
}