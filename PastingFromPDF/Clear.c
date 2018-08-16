/*
Harehn Kaundun 260786113
Comp 206 Assignment 1 Question 1
The following program reads a file and replaces tags #A# by float values.
The program accepts 3 arguments, file path, and 2 floats. The file exits if there are any wrong input.
This version allows for only 2 tags to be replaced and any further tags would be left blank. 
By making a preliminary pass through the file and determining the number of tags and assigning default values would make a more flexible version.
*/
#include <stdio.h>

int main(int argc, char * argv[]) {
	//Checking for right number of input	
	if (argc !=2){
		printf("ERROR: Wrong number of arguments\n");
		return -1;
	}
	
	//Reading file and exiting if unreadable
	FILE * shape_template;
	if((shape_template = fopen(argv[1], "r")) == NULL){
		printf("Can't read from file %s\n", argv[1]);
		return -1;
	}
	
	

	char str[60];//for fgets
	while(fgets(str,60,shape_template)!=NULL){
		int n=0;
		while(str[n]!='\0'){
			if(str[n]=='\n'){
				printf(" ");
			} else if (str[n]=='@'){printf("\n");} else{printf("%c",str[n]);}
			n++; 
		}
	
	}
	return 0;
}
