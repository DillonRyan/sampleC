#include "stdio.h"
#include "stdlib.h"

int isValidEmailAddress(char email_address[], char * terminators[], int nterms){
	int i = 0;
	int isValid = 1;
	//iterate over the email until an @ sign, has to have at least one letter
	do{
		//if not an allowable character, reject;
		if(!isalpha(email_address[i]) && !isdigit(email_address[i])
			&& email_address[i]!='.') isValid = 0;
		i++;
	}while(email_address[i]!= '@' && isValid);
	if(isValid){ //implies an @ symbol
		//account for the @ symbol
		i++;
		//iterate over the rest of the e-mail, making sure it contains valid characters
		do{
			if(!isalpha(email_address[i]) && !isdigit(email_address[i])
				&& email_address[i]!='.') isValid = 0;
			i++;
		}while(email_address[i]!= '\0' && isValid);
		if(isValid){
			//account for end of string
			i--;
			//move back to find terminator
			do{
				i--;
			}while(email_address[i-1] != '.');
			int j, k;
			int validTerminator = 0;
			//iterate over the terminators , checking to see if any match the email's
			for(j = 0; j < nterms && !validTerminator; j++){
				char * terminator = terminators[j];
				int indexCopy = i;
				int continueComparison = 1;
				for(k = 0; continueComparison; k++, indexCopy++){
					//if do not match, move to next terminator
					if(email_address[indexCopy] != terminator[k]) {
continueComparison = 0;
}


// if both the email's and the terminators next character
					// are end of strings, email's terminator is valid
					if(terminator[k+1]== '\0' &&
email_address[indexCopy]== '\0' ){
						continueComparison = 0;
						validTerminator = 1;
					}
				}
			}
		}
	}
	return isValid;
}
