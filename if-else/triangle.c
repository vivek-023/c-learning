#include <stdio.h>

int main(){
 int side1=5;
 int side2=3;
 int side3=5;
  if(side1==side2 && side2==side3 && side3==side1){
	  printf("it is an eqilateral triangle",side1,side2,side3);
  } else if(side1==side2 || side2==side3 || side1==side3 ){
	  printf("it is an isosceles triangle",side1,side2,side3);
  }else{
	  printf("it is an scalene triangle");
  } 
}