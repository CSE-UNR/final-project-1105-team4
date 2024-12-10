//GROUP 4
//Final Project

#include <stdio.h>
#define LENGTH 100
#define LINE 50
#define FILE_NAME "madlib2.txt"

void getInput(char input[], char letter);
void Print(char array[][LENGTH], int line);
int readfile(char *filename, char array[][LENGTH], int maxLines);
void removeNewlines(char array[][LENGTH], int line); 
void addinput(char array[][LENGTH], int line);

int main() {
	int line = 0;               
	char input[LENGTH];
	char array[LINE][LENGTH];

   
	line = readfile(FILE_NAME, array, LINE);
	removeNewlines(array, line);
	addinput(array, line);
	Print(array, line);
    
	return 0;
}

void getInput(char input[], char letter) {
	switch (letter) {
		case 'A':
			printf("Please enter an adjective: ");
		break;
		case 'N':
			printf("Please enter a noun: ");
		break;
		case 'V':
			printf("Please enter a verb: ");
		break;
		default:
		return;
	}
	scanf("%s", input);  
}

void Print(char array[][LENGTH], int line) {
	for (int i = 0; i < line; i++) {
		printf("%s ", array[i]);  
    }
    printf("\n");
}

int readfile(char *filename, char array[][LENGTH], int maxLines) {
	FILE *fp = fopen(filename, "r");
	if(fp == NULL) {
	printf("Cannot open file\n");
	return 0;
	}

	int i = 0; 
	while (i < maxLines && fgets(array[i], LENGTH, fp) != NULL) {
		for (int j = 0; array[i][j] != '\0'; j++) {
			if (array[i][j] == '\n') {
				array[i][j] = '\0'; 
			}
		}
        i++;
	}

	fclose(fp);
	return i; 
}
void removeNewlines(char array[][LENGTH], int line) {
	for(int i = 0; i < line; i++) {
		for(int j = 0; array[i][j] != '\0'; j++) {
			if(array[i][j] == '\n') {
				array[i][j] = '\0'; 
			}
		}
	}
}
void addinput(char array[][LENGTH], int line) {
	char input[LENGTH];
	for(int i = 0; i < line; i++){  
		if(array[i][0] == 'A' || array[i][0] == 'N' || array[i][0] == 'V') {
			getInput(input, array[i][0]);  
			for(int j = 0; j < LENGTH; j++){
				array[i][j] = input[j];
			}
		}
	}
}
