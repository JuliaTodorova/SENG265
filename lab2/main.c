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


