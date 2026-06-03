// Q1
//     #include<stdio.h>
// int main (){
//     int n;
//     printf("Enter the Number : ");
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++){
//         printf("Hello Rishabh\n");
//     }
//     return 0;
// }

// Q2
//     #include<stdio.h>
// int main (){
//     for(int i=1;i<=100;i++){
//     if(i%2!=0) printf("%d ",i);
//     }
//     return 0;
// }

// Q3
//     #include<stdio.h>
// int main (){
//     int n,m,i;
//     printf("Enter the table Number : ");
//     scanf("%d",&n);
//     printf("Enter Upto how much : ");
//     scanf("%d",&m);
//     for(i=1;i<=m;i++){
//         printf("%d x %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }

// Q4
//     #include<stdio.h>
// int main (){
//     int n;
//     printf("Enter the Number : ");
//     scanf("%d",&n);
//     for(int i=1;i<=2*n-1;i=i+2){
//         printf("%d ",i);
//     }
//     return 0;
// }

// Q5
// #include<stdio.h>
// int main (){
//     int n;
//     printf("Enter the Number : ");
//     scanf("%d",&n);
//     for(int i=4;i<=3*n+1;i=i+3){
//         printf("%d ",i);
//     }
//     return 0;
// }

// Q - 1 Print all the numbers from 1 to 100 useing while loop.
// #include<stdio.h>
// int main (){
//     int i=1; 
//     while (i<=100){
//         printf("%d ",i);
//         i++;
//     }
//     return 0 ;
// }


// Q - 2 
// #include<stdio.h>
// int main (){
//     int x=4,y=0,z;
//     while (x>=0)
//     {
//         if(x==y)
//         break;
//         else
//         printf("\n%d %d",x,y);
//          x--;
//         y++;
//     }
// return 0;    
// }


// Q - 3 write a program to count the digits of a given number .  
// #include<stdio.h>
// int main (){
// int n; 
// printf("Enter the number : ");
// scanf("%d"&n);
// int count = 0;
// while (n!=0)
// {
//     n = n/10;
//     count++;
// }
// printf("The number of digits are %d",count);
// return 0;
// }


// Q - 4 Write a program to find the sum of digits of the given input
// #include<stdio.h>
// int main (){
// int n; 
// printf("Enter the number : ");
// scanf("%d",&n);
// int sum = 0;
// int lastdigit = 0;
// while (n!=0)
// {
//     lastdigit = n%10;
//     sum = sum + lastdigit;
//     n = n/10;
// }
// printf("The sum of digits are %d",sum);
// return 0;
// }

// Q - 5 Write a program to print sum of all the even digits and odd digits of a given number.
// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     int sum = 0;
//     int lastdigit;

//     while(n != 0) {
//         lastdigit = n % 10;   // take last digit

//         if(lastdigit % 2 != 0) {   // check if digit is even
//             sum = sum + lastdigit;
//         }

//         n = n / 10;   // remove last digit
//     }

//     printf("The sum of even digits is %d", sum);

//     return 0;
// }

// Q - 6 Write a program to print reverse of a given number.
// #include<stdio.h>
// int main () {
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     int r = 0;
//     while (n>0)
//     {
//         r = r*10;
//         r = r + (n%10);
//         n = n/10;
//     }
//     printf("The reverse number is %d",r);
//     return 0;
// }


// Q - 7 Writa a program to print the sum of given number and its reverse.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     int rev = 0;
//     int sum = 0;
//     int lastdigit = 0;
//     while (n>0)
//     {
//         rev = rev*10;
//         rev = rev + (n%10);
    
//         lastdigit = n%10;
//         sum = sum + lastdigit;
//         n = n/10;
//     }
//     printf("The reverse number is %d",rev);
//     printf("\nThe sum of number are %d",sum);
//     return 0;
// }

// Q - 8 Writa a program to print the sum of given number and its reverse.
// sum of input number + the sum of reverse number.
// #include<stdio.h>

// int main() {
//     int n, original;
//     int rev = 0;

//     printf("Enter the number : ");
//     scanf("%d", &n);

//     original = n;  // store original number

//     while(n > 0) {
//         rev = rev * 10 + (n % 10);
//         n = n / 10;
//     }

//     printf("The reverse number is %d", rev);
//     printf("\nThe sum of number and its reverse is %d", original + rev);

//     return 0;
// }


// Q - 9 Write a program to print the sum of this series 1-2+3-4+5-6.... upto 'n'.
// #include<stdio.h>
// int main (){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     int sum = 0;
//     if (n%2==0){
//         sum = -n/2;
//     }
//     else{
//         sum = -n/2+n;
//     }
//     printf("The sum is : %d",sum);
//     return 0;
// }


// Q - 10 Write a program to print the factorial of a given number 'n'.
// #include<stdio.h>
// int main (){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     int m = 1;
//     for(int i=1;i<=n;i++)
//     m = m * i ;
//     printf("The factorial of the number %d is = %d ",n,m);
//     return 0;
// }

// Q - 11 Write a program to print the nth fibonacci number.
// #include<stdio.h>
// int main (){
//     int n, first = 1 , second = 1 , sum = 1;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     for (int i=1;i<=n-2;i++){
//         sum = first + second;
//         first = second;
//         second = sum;
//     }
//     printf("The fiboacci number %d is : %d ",n,sum);
//     return 0;
// }


// Q - 12 Write a program to print first 'n' fibonacci number .
// #include<stdio.h>

// int main() {
//     int n, first = 1, second = 1, sum;

//     printf("Enter the number: ");
//     scanf("%d", &n);

//     if(n >= 1)
//         printf("%d ", first);

//     if(n >= 2)
//         printf("%d ", second);

//     for(int i = 3; i <= n; i++) {
//         sum = first + second;
//         printf("%d ", sum);
//         first = second;
//         second = sum;
//     }

//     return 0;
// }


// Q - 13 Write a program where two number are entered through the keyboard. Write a program to find the value of one number raised to the power of another.
// #include<stdio.h>
// int main (){
//     int n,m;
//     printf("Enter the base : ");
//     scanf("%d",&n);
//     printf("Enter the power : ");
//     scanf("%d",&m);
//     int power = 1;
//     for (int i=1;i<=m;i++){
//     power = power * n;
//     }
//     printf(" %d raised to the power %d is %d",n,m,power);
//     return 0;
// }


// Q - 14 Write a program to print all the ASCII values and their equivalent charachters of 26 alphabets using a while loop or for loop.
// #include<stdio.h>
// int main (){
//     for (int i=65;i<=90;i++){
//         char ch = (char)i;
//         printf("%c -->",ch);
//         printf("%d\n",i);
//     }
//     return 0;
// }
