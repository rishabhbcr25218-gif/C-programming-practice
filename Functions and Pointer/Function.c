// Q1 -  Basic of function in C programming language
// #include <stdio.h>
// void rishabh (){
//     printf("This is the main fuction who call me every time \n");
//     return;
// }

// int main (){
//     for (int i=1;i<=20;i++) {
//     rishabh();
//     }
//     return 0;
// }

// Q2 -  Pascal triangle and pyramids 
// #include <stdio.h>
// int factorial(int x){
//     int fact = 1 ;
//     for ( int i=2;i<=x;i++){
//         fact = fact*i;
//     }
//     return fact;
// }
// int combination (int n , int r ){
//     int ncrf = factorial(n)/(factorial(r)*factorial(n-r));
//     return ncrf;
// }
// int main (){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         for ( int k=0;k<=n-i;k++){
//             printf("  ");
//         }
//         for (int j=0;j<=i;j++){
//             int icj = combination(i,j);
//             printf("%4d ",icj);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q3 -  Swapping of two numbers using pointers.
// #include<stdio.h>
// void swap( int* x, int* y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
//     return;
// }
// int main(){
//     int a;
//     printf("Enter the number a: ");
//     scanf("%d",&a);
//     int b;
//     printf("Enter the number b: ");
//     scanf("%d",&b);
//     swap(&a,&b);
//     printf("This is the swap number : %d\n",a);
//     printf("This is the swap number : %d",b);
//     return 0;
// }


// Q3a - 

// #include<stdio.h>
// int main (){
//     int x;
//     printf("Enter the number x : ");
//     scanf("%d",&x);
//     int y;
//     printf("Enter the number y : ");
//     scanf("%d",&y);
//     int temp;
//     temp = x;
//     x =  y;
//     y = temp;
//     printf("this is swap number now: %d\n",x);
//     printf("this is swap number now: %d",y);
//     return 0;
// }

// Q3b - 

// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number a: ");
//     scanf("%d",&a);
//     int b;
//     printf("Enter the number b: ");
//     scanf("%d",&b);
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     printf("This is now get swap %d: \n",a);
//     printf("This is now get swap %d: ",b);
//     return 0;
// }


// Q4 sum of 2 numbers with function
// #include<stdio.h>
// int find ( int a , int b ){
//     return a+b;
// }
// int main (){
//     int r,s;
//     printf("Enter the first number:");
//     scanf("%d",&r);
//     printf("Enter the second number:");
//     scanf("%d",&s);
//     int sum = find(r,s);
//     printf("This is the sum of two numbers : %d",sum);
//     return 0;
// }

// Q5 find the combination and permutaion 
// #include<stdio.h>
// int factorial ( int x ){
//     int multi = 1;
//     for (int i=2;i<=x;i++){
//         multi = multi*i;
//     }
//     return multi;
// }
// int main (){
//     int s;
//     printf("Enter the number s : ");
//     scanf("%d",&s);
//     int g;
//     printf("Enter the number g : ");
//     scanf("%d",&g);
//     int nfact = factorial(s);
//     int rfact = factorial(g);
//     int nrfact  = factorial(s-g);
//     int permutation = nfact/(rfact*nrfact);
//     printf("%d",permutation);
//     return 0;
// }

// Q6 find the permutation 

// #include<stdio.h>
// int factorial ( int x){
//     int fact = 1;
//     for ( int i=2;i<=x;i++){
//         fact = fact*i;
//     }
//     return fact;
// }
// int permutation ( int n , int r ){
//     int npr = factorial(n)/factorial(n-r);
//     return npr;
// }
// int main(){
//     int n;
//     printf("Enter the number n : ");
//     scanf("%d",&n);
//     int r;
//     printf("Enter the number r : ");
//     scanf("%d",&r);
//     int sum = permutation(n,r);
//     printf("%d",sum);
//     return 0;
// }

// Q6 - Finding the HCF.

// #include<stdio.h>
// int min(int a, int b){
//     if(a<b) return a; 
//     else return b;
// }
// int multi(int x, int y){
//     int hcf;
// for(int i=min(x,y);i>=1;i--){
//     if(x%i==0 && y%i==0){
//         hcf = i;
//         break;
//     }
// }
// return hcf; 
// }
// int main(){
//     int c;
//     printf("Enter the number c :");
//     scanf("%d",&c);
//     int d;
//     printf("Enter the number d :");
//     scanf("%d",&d);
//     int hcf = multi(c,d);
//     printf("This is the HCF of %d and %d: %d",c,d,hcf);
//     return 0;
// }
