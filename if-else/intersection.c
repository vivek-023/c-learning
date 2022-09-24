 #include<stdio.h>
 int main(){
	 int t1,t2,t3,t4;
	 printf("t1: ");
	 scanf("%d",&t1);
	 printf("t2: ");
	 scanf("%d",&t2);
	 printf("t3: ");
	 scanf("%d",&t3);
	 printf("t4: ");
	 scanf("%d",&t4);
	 if(t2<t3){
		 printf("invalid",t2,t3);
	 }else if(t2>t3 && t2>t4){
		 printf("in between %d and %d",t3,t4);
	 }else if(t2>t3 && t2<t4){
		 printf("in between %d and %d",t3,t2);
	 }else if(t2==t3){
		 printf("intersection is %d",t2);
	 }else{
		 printf("not",t1,t2,t3,t4);
	 }
 }
 