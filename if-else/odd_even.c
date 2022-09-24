#include <stdio.h>

int main(){
	  // numer is even otherwise it is odd (COMPLETED)
	  int a=431; 
	  if(a%2==0){
		  printf("%d is even",a);
	  } else if(a%2!=0){
		  printf("%d is odd",a);
	  } else{
		  printf("%c is neither even nor odd",a);
	  }
	  return 0;
  }