/*input a=2
b=3
output a=3
b=2*/
 #include<stdio.h>
 int main(){
   int a,b;
     printf("a: ");
     scanf("%d",&a);
     printf("b: ");
     scanf("%d",&b);
        if(a>=1 || a<=1){
            printf("b= %d\n",a);
        }if(b>=1 || b<=1){
            printf("a= %d",b);
        } else{
            printf("not",a,b);
        }
 }