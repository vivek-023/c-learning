/*input a=2
b=3
output a=3
b=2*/
 #include<stdio.h>
 int main(){
   int a,b,c;
     printf("a: ");
     scanf("%d",&a);
     printf("b: ");
     scanf("%d",&b);// if a=20 and b=10
	 c=a; //c=20
	 a=b; //a=10
	 b=c; //b=20
	 printf("%d\n",a);
	 printf("%d",b);
	 
        
 }