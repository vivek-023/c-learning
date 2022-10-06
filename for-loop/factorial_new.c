 #include<stdio.h>
 int main(){
	 int i,a,f=1;
	 printf("a: ");
	 scanf("%d",&a);
	 for(i=a;i>=1;i=i-1){
		 if(i==a){
			 printf("%d",i);
		 }else{
			 printf("* %d",i);
		 }
		 f=f*i;
	 } printf("= %d",f);
		 
		 
 }

