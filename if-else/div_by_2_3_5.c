#include <stdio.h>

int main(){
	int a=12;
	if(a%2==0){
		printf("%d is divisible by 2\n",a);
	}
	if(a%3==0){
		printf("%d is divisible by 3\n",a);
	}
	if(a%5==0){
		printf("%d is divisible by 5\n",a);
	}
	if(a%2==0 && a%3==0){
		printf("%d is divisible by 2 and 3\n",a);
	}
	if(a%2==0 && a%5==0){
		printf("%d is divisible by 2 and 5\n",a);
	}
	if(a%3==0 && a%5==0){
		printf("%d is divisible by 3 and 5\n",a);
	}
	if(a%2==0 && a%3==0 && a%5==0){
		printf("%d is divisible by 2,3,5\n",a);
	} else {
		printf("%d is not divisible by 2,3,5\n",a);
	}
		
	
		
}	