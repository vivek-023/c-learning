#include <stdio.h>

int main(){
	  /**it is capital letter
	  it is small letter (COMPLETED)**/
	  char X='b';
	  if(X>='A' && X<='Z'){
		  printf("%c is capital letter",X);
	  } else if(X>='a' && X<='z'){
			  printf("%c is small letter",X);
		  }else {
			  printf("%c is not an alphabet",X);
		  }
  }