#include <stdio.h>
#include <string.h>
#define use_CRT_SECURE_NO_WARNIGNS
#pragma warning(disable : 4996)
//12

int main(){
    char string[255];
    printf("Please enter numstring:\n=> ");
    gets_s(string);
    char* leksemsFromString = strtok(string, " ");
    int countPair = 0, countNotpair = 0;
    while (leksemsFromString != NULL) { // c use ASCII code so if you wanna to get num from the string you should make -48
        int temp = int(*leksemsFromString)-48;
        if (temp % 2 == 0) {
            countPair++;
        }
        else {
            countNotpair++;
        }
        leksemsFromString = strtok(NULL, " ");
    }
    printf("Count pair is equal to %d, count not pair is equal to %d", countPair, countNotpair);
}