//Use (&&) and (||)

//  Q1 &&
//     #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter Number : ");
//     scanf("%d",&a);
//     if(a>99 && a<1000){
//         printf("This is a Three digit numher");
//     }
//     else {
//         printf("This Number don't come under 99 to 1000 and it is not a three digir number : %d",a);
//     }
//     return 0;
// }

//  Q2 &&
//     #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter Number : ");
//     scanf("%d",&a);
//     if(a%5==0 && a%3==0){
//         printf("This number is divisible by 5 and 3");
//     }
//     else {
//         printf("This number is not divisible by 5 and 3");
//     }

//     Q3 ||
//     if(a%5==0 || a%3==0){
//         printf("This number is divisible by 5 or 3");
//     }
//     else{
//         printf("This number is not divisible by 5 or 3");
//     }
//     return 0;
// }

//  Q4
//     #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter Number : ");
//     scanf("%d",&a);
//     int a,b,c;
//     printf("Enter 1st Number : ");
//     scanf("%d",&a);
//     printf("Enter 2nd Number : ");
//     scanf("%d",&b);
//     printf("Enter 3rd Number : ");
//     scanf("%d",&c);
//     if(a>b && a>c){
//         printf("%d Is gratest",a);
//     }
//     if(b>a && b>c){
//         printf("%d Is gratest",b);
//     }
//     if(c>a && c>b){
//         printf("%d Is gratest",c);
//     }
//     return 0;
// }

//  Q5
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter Number : ");
//     scanf("%d",&a);
//     int a,b,c;
//     printf("Enter 1st Number : ");
//     scanf("%d",&a);
//     printf("Enter 2nd Number : ");
//     scanf("%d",&b);
//     printf("Enter 3rd Number : ");
//     scanf("%d",&c);
//     if ((a+b)>c && (b+c)>a && (c+a)>b){
//         printf("valid triangle");
//     }
//     else{
//         printf("Invalid Triangle");
//     }
// return 0;
// }

//  Q6 find the youngest of three sabse chhota 
//     #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter Number : ");
//     scanf("%d",&a);
//     int Ram , Shyam , Ajay;
//     printf("Enter the age of Ram : ");
//     scanf("%d",&Ram);
//     printf("Enter the age of Shyam : ");
//     scanf("%d",&Shyam);
//     printf("Enter the age of Ajay : ");
//     scanf("%d",&Ajay);
// return 0;
// }

//  ##         Methord 1 only with (if)
//     #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter Number : ");
//     scanf("%d",&a);
//     if(Ram<Shyam && Ram<Ajay){
//         printf("%d Ram is youngest",Ram);
//     }
//     if(Shyam<Ram && Shyam<Ajay){
//         printf("%d Shyam is youngest",Shyam);
//     }
//     if(Ajay<Ram && Ajay<Shyam){
//         printf("%d Ajay is youngest",Ajay);
//     }
//     return 0;
// }


//  ##        Methord 2 only with (if-else and else-if)
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter Number : ");
//     scanf("%d",&a);
//     if (Ram<Shyam && Ram<Ajay)
//     printf("%d Ram is the Youngest",Ram);
//     else if (Shyam<Ram && Shyam<Ajay)
//     printf("%d Shyam is the Youngest",Shyam);
//     else
//     printf("%d Ajay is the Youngest",Ajay);
//     return 0;
// }

//  Q7    Without the use of && and ||
//  #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter your Number : ");
//     scanf("%d",&x);
//     if(x%5==0){
//         if(x%3==0){
//             printf("The number is divisible by 5 and 3");
//         }
//         else{
//             printf("The number is not divided by 5 and 3");
//         }
//     }
//     else{
//         printf("The number is not Divisible by 5 and 3");
//     }
//     return 0;
// }

//  Q8 write a c program (take a integer input and tell that the number is divisible by 5 or 3 and not divisible by 15.)
//  Methord-1 Without Useing (&&) (||)
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the Number : ");
//     scanf("%d",&n);
//     if(n%15!=0){
//         if(n%5==0){
//             printf("The number is divisible by 5 or 3 ");
//         }
//         else if (n%3==0){
//             printf("The number is divisible by 5 or 3 ");
//         }
//         else {
//             printf("The number is not divisible by 5 or 3 ");
//         }
//     }
//     else{
//         printf("The number is  not divisible by 5 or 3 ");
//     }
//     return 0;
// }

//  Methor-2 Use of only (&&)
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter Number : ");
//     scanf("%d",&a);
//     int n;
//     scanf("%d", &n);
//     if ( ((n % 3 == 0) ^ (n % 5 == 0)) && (n % 15 != 0) ) {
//         printf("The number is divisible by 3 or 5 but not by 15");
//     } else {
//         printf("The condition is not satisfied");
//     }
//     return 0;
// }

//  Methord-3 With useing (||)
//     #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter Number : ");
//     scanf("%d",&a);
//     int n;
//     scanf("%d", &n);
//     if ( ! ( !(n % 5 == 0 || n % 3 == 0) || (n % 15 == 0) ) )
//         printf("Number is divisible by 5 or 3 but not divisible by 15");
//     else
//         printf("Condition not satisfied");
//         return 0;
// }

//  Methord-4 With useing (&&) (||)
//     #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter Number : ");
//     scanf("%d",&a);
//     int num;
//     printf("Enter an integer: ");
//     scanf("%d", &num);
//     if ((num % 5 == 0 || num % 3 == 0) && num % 15 != 0) {
//         printf("The number is divisible by 5 or 3 but not divisible by 15.\n");
//     } else {
//         printf("The condition is not satisfied.\n");
//     }
// return 0;
// }

//  Q9 Take 3 positive integers input and print the geastest of them but with out useing (||) (&&)
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter the first Number : ");
//     scanf("%d",&a);
//     printf("Enter the second Number : ");
//     scanf("%d",&b);
//     printf("Enter the third Number : ");
//     scanf("%d",&c);
//     if(a>b){
//         if(a>c)
//         printf("%d Is the greatest",a);
//         else
//         printf("%d Is the greatest",c);    
//     }
//     else{
//         if(b>c)
//         printf("%d Is the greatest",b);
//         else
//         printf("%d Is the greatest",c);
//     }
//     return 0;
// }

//  Q10 find the youngest one but without (||) (&&)
//     #include<stdio.h>
// int main(){
//     int r,s,a;
//     printf("Enter the age of r : ");
//     scanf("%d",&r);
//     printf("Enter the age of s : ");
//     scanf("%d",&s);
//     printf("Enter the age of a : ");
//     scanf("%d",&a);
//     if(r<s){
//         if(r<a)
//         printf("%d Is the youngest one",r);
//         else
//         printf("%d Is the youngest one",a);
//     }
//     else{
//         if(s<a)
//         printf("%d Is the youngest one",s);
//         else 
//         printf("%d IS the youngest one",a);
//     }
//      return 0;
// }
