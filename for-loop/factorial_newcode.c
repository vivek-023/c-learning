 #include<stdio.h>


    int main(){ 
    int a,i,f=1;
		printf("a: ");
		scanf("%d",&a);
        printf(" 1");
        for(i=2;i<=a;i++){
             printf(" * %d ",i);
             f=f*i;
		}
		          printf("= %d",f);
    }