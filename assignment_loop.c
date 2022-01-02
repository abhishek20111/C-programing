//1.	Write a C program to convert given decimal number to binary number.
/*#include<stdio.h>
int main(){
    int i=0,a,aa[20];
    printf("enter the decimal no -");
    scanf("%d",&a);
    while (a!=0)
    {
        aa[i] = a%2;
        a=a/2;
        i++;

    }
    

    for(int z=i-1;z>=0;z--){
        printf("%d",aa[z]);

    }
    printf("\nAbhishek kushwaha");
    
}*/
//2.	 Write a c program to print n terms of Fibonacci series.
/*
#include<stdio.h>
int main(){
    int a,b=0,c=1,count=0;
    printf("enter the n term--");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        count =b+c;
        b=c;
        c=count;
    }
    printf("%d",count);
}
*/
//3.	Write a C program to find average of all odd number in the given range.
/*
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter range\n");
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){
        if (i%2 != 0)
        {
            sum = sum +i;
        }
    }
    printf("%d\n",sum);
}*/

//4.	The program will read two integer numbers and find the multiplication of them using arithmetic plus (+) operator. Do not use multiplication operator to multiply the numbers.
/*
#include<stdio.h>
int main()
{
    int a,b,zz=0;
    printf("enter two no");
    scanf("%d %d",&a,&b);
    for(int i=0;i<b;i++){
        zz = zz + a;
    }
    printf("%d is answer",zz);
    return 0;
}
*/

//Armstrong no
// #include<stdio.h>
// #include<math.h>
// void armstrong_no(a,b){
    
//     for(int i=a;i<=b;i++){
//         int xx = i,sum=0,yy=i;

//         int len = 0;
//         while(i>0){
//         i = i/10;
//         len++;
//         }

//         while (xx!=0)
//         {
//             int aa = xx%10;
//             sum = sum + pow(aa,len);
//             xx = xx/10;
//         }

//         if(sum == yy){
//             printf("%d ",i);
//         }
    
        
//     }
// }

// int main()
// {
//     int a,b;
//     printf("enater the range \neg- 20 20000\n");
//     scanf("%d %d",&a,&b);
//     armstrong_no(a,b);

//     return 0;
// }


// 8.	Write a program to check whether a given number is prime or not.
// #include<stdio.h>
// int main(){
//     int n,count = 0;

//     printf("enter no");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         if(n%i == 0){
//             count++;
//         }
//     }
//     if(count == 2){
//         printf("It is prime no");
//     }
//     else{
//         printf(" it is not a prime no");
//     }
// }

//9.	Write a program using do while loop to read the numbers (positive and negative both) until -1 is encountered. Also find the sum of only positive numbers.
// #include<stdio.h>
// int main(){
//     int no,xx,a, count = 0;
//     do{
//         printf("enter no\n");
//         scanf("%d",&no);

//         if(no > 0){
//             count = count + no;
//         }

//         printf("if you want to exit you can type -1\nFor continue you can press -");
//         xx = scanf("%d",&a);

//     }while(xx != -1);
//     printf("%d",no);
// }
//10.	Write a program to print table of sine and cos functions for the interval 0-360 degrees in increments of 30.4
// #include<stdio.h>
// #include <math.h>
// int main()
// {

//   #include <math.h>
// int main()
// {

// //   double interval, i = 0;
// //   printf("Enter the desired interval (eg. 0.1):\n");
// //   scanf("%lf", &interval);
// //   for (; i <= 1; i += interval) {
// //     printf("sin(%f)=%f\n", i, sin(i));
// //     printf("cos(%f)=%f\n", i, cos(i));

// //   }

//   int a;
//   printf("enete the desire degree");
//   scanf("%d",&a);
//   if(a == 60){
//       printf("sinX = 1.732/2");
//       printf("cosX = 1/2");
//   }
//   return 0;
// }
//11.	Write a program to print the following patterns-
 	// 1 2 3 4 5
 	// 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the no");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int j=1; j<=n; j++){
//             printf("%d ",j);
//         }
//         printf(" \n");
//     }
// }
//-----------------------------------------------------------------
// *  * * * *
// *  * * * *
// *  * * * *
// *  * * * * 
// int main(){
//     int n;
//     printf("enter the no");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int j=1; j<=n; j++){
//             printf("*");
//         }
//         printf(" \n");
//     }
// }
//-----------------------------------------------------------------------
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// #include<stdio.h>
// int  main(){
//     int a;
//     printf("enter the no");
//     scanf("%d",&a);
//     for(int i=1; i<=a; i++){
//         for(int j=1; j<=i; j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }
//-------------------------------------------------------------------------
// A
// A B
// A B C 
// // A B C D
// #include<stdio.h>
// int  main(){
//     int a;
//     printf("enter the no");
//     scanf("%d",&a);
//     for(int i=65; i<=(65+a); i++){
//         for(int j=65; j<i; j++){
//             printf("%c",j);
//         }
//         printf("\n");
//     }
// }
//---------------------------------------------------------------------
//   1 
//   2 3 
//   4  5 6
//   7  8 9 10
// #include<stdio.h>
// int  main(){
//     int a,c=0;
//     printf("enter the no");
//     scanf("%d ",&a);
//     for(int i=1; i<=a; i++){
//         for(int j=1; j<=i; j++){
//             c++;
//             printf("%d",c);
//         }
//         printf("\n");
//     }
// }
//----------------------------------------------------------------------
//       1
//     1 2
//   1 2 3
// 1 2 3 4 
// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the no");
//     scanf("%d",&a);
//     for(int i=1; i<=a; i++){
//         for(int j=a; j>=i; j--){
//             printf(" ");
//         }
//         for(int z=1; z<=i; z++){
//             printf("%d",z);
//         }
//         printf("\n");
//     }
// }
//21.	Write a program to find number is palindrome or not.
// #include<stdio.h>
// #include<string.h>
// int main(){
//     int a,tmp,sum=0;
//     printf("enter no");
//     scanf("%d",&a);
//     tmp=a;
//     while(a>0){
//         int c = a%10;
//         sum = (sum*10)+c;
//         a = a/10;
//     }
//     if(tmp == sum){
//         printf("%d is palindrome\n",tmp);
//     }
//     else{
//         printf("%d is not a palindrome\n",tmp);
//     }
// }
// 26.	Write a C program to print the following pattern of stars and alphabets having n rows:-
// 				     *
// 			        *A*
// 			       *A*A*
// 			      *A*A*A*
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter no");
//     scanf("%d",&a);
//     for(int i=1; i<=a; i++){
//         for(int j=a; j>=i ; j--){
//             printf(" ");
//         }
//         for(int z=0; z<=i-1; z++){
//             if((i+z)%2==0){
//                 printf("A");
//             }
//             else{
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }
// }
#include<stdio.h>
int main(){
    int a;
    printf("Enter the no");
    scanf("%d",&a);

}