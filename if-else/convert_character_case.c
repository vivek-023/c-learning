# include <stdio.h>

//Convert the case of character given (smaller case to upper case and vice-versa)
int main(){
	  char Z='A';
	  if(Z>='A' && Z<='Z'){
		  printf("%c is a small letter",Z+32);
	  } else if(Z>='a' && Z<='z'){
		  printf("%c is a capital letter",Z-32);
	  } else{
		  printf("%c is not an alphabet",Z);
	  }
		  
		   
  }