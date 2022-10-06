#include <stdio.h>

int main(){
	  /**it is capital letter
	  it is small letter (COMPLETED)**/
	  char a;
	  printf("a: ");
	  scanf("%c",&a);
	  if(a>='A' && a<='Z'){
		  printf("%c is capital letter",a);
	  } else if(a>='a' && a<='z'){
			  printf("%c is small letter",a);
		  }else {
			  printf("%c is not an alphabet",a);
		  }
  }