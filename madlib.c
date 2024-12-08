//Kaylene Wilson
//Final Group Project

#include <stdio.h>
#define SIZE 50
//Function Prototypes
void getNoun(char input[]);
void getVerb(char input[]);
void getAdj(char input[]);
void Print(char array[][SIZE], int line);


int main(){
	char input[SIZE];
	FILE* fp;
	char filename[SIZE];
	char array[SIZE][SIZE];
	int line = 0;
	
	printf("Enter file name (madlib1.txt or madlib2.txt)");
	scanf("%s", filename);
	
	fp = fopen(filename, "r");	           
	if(fp == NULL){
		printf("Cannot open file!");
	}
	
	while(fgets(array[line], SIZE, fp) != NULL){
		switch(array[line][0]) {
			case 'A':
			getAdj(input);
			for(int i = 0; i < SIZE; i++){
				array[line][i] = input[i];
			}
			break;
			
			case 'N':
			getNoun(input);
			for(int i = 0; i < SIZE ; i++){
				array[line][i] = input[i];
			}
			break;
			
			case 'V':
			getVerb(input);
			for(int i = 0; i < SIZE; i++){
				array[line][i] = input[i];
			}
			break;	
			default: 
			break;		
		}
		line++;
	}
	
	fclose(fp);
	
	Print(array,line);
	



return 0;
}
//Print file until it his 'A/N/V' then add corresponding words and keep printing


//Function Definitions:
void getNoun(char input[]){
printf("Please enter a noun: ");
scanf("%s", input);
}

void getVerb(char input[]){
printf("Please enter a verb: ");
scanf("%s", input);
}

void getAdj(char input[]){
printf("Please enter an adjective: ");
scanf("%s", input);
}
void Print(char array[][SIZE], int line){
	for(int i = 0; i < line; i++){
	printf("%s", array[i]);
	}
}
