#include <stdio.h>

/**int main(){
 int a=50;
 printf("%d is area of square",a*a);
 
}**/

int main(){
	int side1=3;
	int side2=3;
	int side3=5;
	
	int side1sq = side1*side1;
	int side2sq = side2*side2;
	int side3sq = side3*side3;

	if(side1sq+side2sq==side3sq || side2sq+side3sq==side1sq||side3sq+side1sq==side2sq){
		printf("it is a right triangle",side1,side2,side3);
	} else {
		printf("it is not a right triangle",side1,side2,side3);
	}
	
	/**if(side1*side1+side2*side2==side3*side3||side2*side2+side3*side3==side1*side1||side3*side3+side1*side1==side2*side2){
		printf("it is a right triangle",side1,side2,side3);
	} else {
		printf("it is not a right triangle",side1,side2,side3);
	}**/
	
}