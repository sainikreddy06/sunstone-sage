SUNSTONE@SAGE

/*"hello world"*/
#include<stdio.h>
int main(){
printf("hello world");
return 0;
}

//* simple calcuater*//
#include<stdio.h>
int  main(){
int a,b;
printf("enter any two numbers");
scanf("%d%d",&a,&b);
printf("a+b=%d",a+b);
printf("a-b=%d",a-b);
printf("a*b=%d",a*b);
printf("a/b=%d",a/b);
printf("modular division=%d",a%b);
return 0;
}

//*area*//
#include <stdio.h>

int main(){
int a,b,rec,sq;
float pie=3.14,r,cir;
printf("Enter the values");
scanf("%f",&r);
cir=pie*r*r;
printf("area for circle = %f\n",cir);
printf("\nenter the a,b values");
scanf("%d%d",&a,&b); 
rec=a*b;
printf("area of rectangle=%d\n",rec);
printf("\nEnter side:");
scanf("%d",&a);
sq=a*a;
printf("area of square=%d",sq);
return 0;
}

/*simple intrest*/
#include<stdio.h>
int main(){
float p,t,r,si;
printf("enter the p,t,r values");
scanf("%f%f%f",&p,&t,&r);
si=p*t*r/100;
printf("si=%f",si);
return 0;
}

//* ASCII values using for loop *//
#include<stdio.h>
int main()
{
int i;
for(i>1;i>=127;i++);
printf("i=%d",i);
printf("i=%c",i);
return 0;
} 

//*cube of the numbers*//
#include<stdio.h>
int main ()
{
    int n ;
    int cube;
    printf("enter a number");
    scanf("%d",&n);
    
    cube= n*n*n;
    printf("cube is %d \n",n*n*n);
    return 0;
    
}

//*star pattern*//
#include<stdio.h>
int main()
{
 printf("*\n");
 printf("**\n");
 printf("***\n");
 printf("****\n");
 printf("*****\n");
   return 0;
   
}

//* pattern of numbers*//
#include<stdio.h>
int main()
{
 printf("1\n");
 printf("1 2\n");
 printf("1 2 3\n");
 printf("1 2 3 4\n");
 printf("1 2 3 4 5\n");
   return 0;
   
}

///write a program to print the table of 2 upto 10.


#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++){
        printf("%d\n",(2*i));
    }
}

////Write a program to print thnkyou for giving this homework


#include<stdio.h>
int main()
{
    printf(“Thank you umesh sir”);
    return 0;
}