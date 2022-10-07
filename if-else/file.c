 #include <stdio.h>

/*int main(){
	int a;
	printf("Enter age: ");
	scanf("%d",&a);
	if(a<13 && a>=0){
		printf("He/She is child",a);
	}else if(a>=13 && a<=19){
		printf("He/She is teenager",a);
	}else if(a>=19 && a<=50){
		printf("He/She is adult",a);
	}else if(a>=50){
		printf("He/She is an old person",a);
	}else{
		printf("He/She is not belong to this planet",a);
	}
}*/

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
	//ALWAYS REMEMBER WHEN THERE IS MULTIPLE CHOICES WHICH CAN BE CORRECT BASED ON SOME CONDITIONS, THEN USE IF-ELSE CONCEPT
	
	if(t3>t2){
		printf("union is invalid\n",t2,t3);
	    printf("intersection is invalid\n",t2,t3);
	}else if(t3<t2 && t4<t2){
        printf("union is in between %d and %d\n",t1,t2);
	    printf("intersection is in between %d and %d\n",t3,t4);
	}else if(t3<t2 && t4>t2){
        printf(" union is in between %d and %d\n",t1,t4);
        printf("intersection is in between %d and %d\n",t3,t2);
	}else if(t3==t2){
        printf("union is in between %d and %d\n",t1,t4);
		 printf("intersection is %d\n",t3);
	}else{
        printf("not",t1,t2,t3,t4);
	}		
	
	return 0;
	
}