 #include<stdio.h>
 int main(){
	 int m,factorial=1;
	 printf("m: ");
	 scanf("%d",&m);
	 for(int i=m;i>=1;i=i-1){
		 factorial=factorial*i;
	 }        
	 printf("factorial of %d is %d",m,factorial);
 }