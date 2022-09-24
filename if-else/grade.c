#include <stdio.h>

int main(){
	float a,b,c,d,e;
	printf("Physics: ");
	scanf("%f",&a);
	printf("Chemistry: ");
	scanf("%f",&b);
	printf("Maths: ");
	scanf("%f",&c);
	printf("English: ");
	scanf("%f",&d);
	printf("C.S.E: ");
	scanf("%f",&e);
	float total=a+b+c+d+e;
	float percentage=(total/500)*100;
	printf("%f\n",percentage);
	if(percentage>=91 && percentage<=100){
		printf("A1 grade",percentage);
	}else if(percentage>=81 && percentage<=90){
		printf("A2 grade",percentage);
	}else if(percentage>=71 && percentage<=80){
		printf("B1 grade",percentage);
	}else if(percentage>=61 && percentage<=70){
		printf("B2 grade",percentage);
	}else if(percentage>=51 && percentage<=60){
		printf("C1 grade",percentage);
	}else if(percentage>=41 && percentage<=50){
		printf("C2 grade",percentage);
	}else if(percentage>=33 && percentage<=40){
		printf("D grade",percentage);
	}else if(percentage>=21 && percentage<=32){
        printf("E1 grade",percentage);
    }else if(percentage>=0 && percentage<=20){
        printf("E2 grade",percentage);
    } else{
		printf("fail",percentage);
	}
	
	
	 
 }