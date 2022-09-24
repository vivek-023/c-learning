# include <stdio.h>
int main(){
	  //number is in between 1 to 100 or less than 1 or greater than 100 (COMPLETED)
	  int A=90;
	  if(A>=1 && A<=100){
		  printf("%d is in between 1 to 100",A);
	  } else if(A<1){
		  printf("%d is less than 1",A);
	  } else{
		  printf("%d is greater than 100",A);
	  }
	  
  }