/* Julia Todorova
   SENG 265
   April 21 2016
*/

#include <stdio.h>
#include <stdlib.h> 

char *strrev(char *str) {
	if (str == NULL){
		return -1;
	}

	int len = strlen(str);	
	char *newString = (char*)malloc((len + 1)* sizeof(char));
	
	for (int i = 0; i < len; i++){
		newString[i] = str[len - i - 1];
	}
	
	return newString;
}

int isPalindrome(char *str){

	if(str == NULL) {
		return -1;
	}

	int len = strlen(str) - 1;

	for(int i = 0; i < len; i++, len--){
		if(str[i] != str[len]){
			return 0;
		}
	}	
	return 1;	
}

int main(int argc, char **argv[]) {

	if(argc <= 1){
		printf("Usage: pal str [str]*\n");
	}

	for (int i = 1; i < argc; ++i)
	{
		int isPal = isPalindrome(argv[i]);

		if (isPal == 1){
			printf("%s\n",argv[i]);
		}

		else if(isPal == 0) {
			char *oldString = argv[i];
			char *reversedString = strrev(argv[i]);
			printf("%s%s\n",reversedString,oldString);
			free(reversedString);
		}

		else {
			return -1;
		}
	}
}