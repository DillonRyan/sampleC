#include "stdio.h"

int isValidEmailAddress(char email_address[], char * terminators[],int nterms){
  //set flags for . before @, an @ sign and also if terminator
  int atFlag = 0, preAtDot = 0, postAtDot = 0;
  int i, @pos, dotPos, secondDotPos;
  char terminator[3];

  for(i = 1; i < sizeof(email_address); i++){ //cant start with an @
    if(email_address[i] == '@' && isChar(alpha) && isAlpha(alpha)){
      @pos = i;
      atFlag = 1;
    }
  }
  for(i = 0; i < @pos; i++){
    if(email_address[i] == '.' && isChar(alpha) && isAlpha(alpha)){
      dotPos = i;
      preAtDot = 1;
    }
  }
  for(i = @pos + 1; i < sizeof(email_address); i++){
    if(email_address[i] == '.'&& isChar(alpha) && isAlpha(alpha)){
      secondDotPos = i;
      postAtDot = 1;
    }

    for(i = secondDotPos; i < sizeof(email_address); i++)){
      terminator[i - secondDotPos] = email_address[i];
    }
    for(i = 0;i<sizeof(terminator);i++){
      if(terminator[i] == terminators[i])
    }
  }

}
