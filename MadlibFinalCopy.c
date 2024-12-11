//Kaylene Wilson
//Final Group Project

#include <stdio.h>
#define SIZE 50
#define FILENAME "madlib1.txt"

void getWord(char input[]);
void Print(char array[][SIZE], int line);
int stringLength(char input[]);
void Copy(char array[][SIZE], int line, char input[]);
void DeleteNewLines(char array[][SIZE], int line);

int main() {
    char input[SIZE];
    FILE* fp;
    char array[SIZE][SIZE];
    int line = 0;


    fp = fopen(FILENAME, "r");
    if(fp == NULL) {
        printf("Cannot open file!");
        return 1;
    }

	while(fgets(array[line], SIZE, fp) != NULL){
	DeleteNewLines(array,line);


        switch(array[line][0]) {
            case 'A':
                printf("Please enter an adjective: ");
                getWord(input);
                Copy(array, line, input);
                break;

            case 'N':
                printf("Please enter a noun: ");
                getWord(input);
                Copy(array, line, input);
                break;

            case 'V':
                printf("Please enter a verb: ");
                getWord(input);
                Copy(array, line, input);
                break;

            default:
                break;
        }
        line++;
    }

    fclose(fp);
    Print(array, line);

    return 0;
}

void getWord(char input[]) {
    scanf("%s", input);
}

void Print(char array[][SIZE], int line) {
    for(int i = 0; i < line; i++) {
        printf("%s ", array[i]);
    }
}

int stringLength(char input[]) {
    int i = 0;
    while(input[i] != '\0') {
        i++;
    }
    return i;
}

void Copy(char array[][SIZE], int line, char input[]){
    for (int i = 0; i < stringLength(input); i++) {
        array[line][i] = input[i];
    }
    array[line][stringLength(input)] = '\0'; 
}

void DeleteNewLines(char array[][SIZE], int line){
    int length = stringLength(array[line]); 
    if (array[line][length - 1] == '\n') {
        array[line][length - 1] = '\0';
    }
}



