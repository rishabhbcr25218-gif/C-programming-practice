//Ques: Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

// #include<stdio.h>
// int main (){
//     float x1,y1,x2,y2,x3,y3;
//     float  result;
//     printf("Enter x1 : ");
//     scanf("%lf",&x1);
//     printf("Enter y1 : ");
//     scanf("%lf",&y1);
//     printf("Enter x2 : ");
//     scanf("%lf",&x2);
//     printf("Enter y2 : ");
//     scanf("%lf",&y2);
//     printf("Enter x3 : ");
//     scanf("%lf",&x3);
//     printf("Enter y3 : ");
//     scanf("%lf",&y3);
//     result = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
//     if (result == 0)
//         printf("All three points lie on a straight line");
//     else
//         printf("The points do not lie on a straight line"); 
//     return 0;
// }



// Q2-Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

// #include<stdio.h>
// int main (){
//     int x,y;
//     printf("Enter the Coordinates : ");
//     scanf("%d %d",&x,&y);
//     if (x==0 && y==0){
//     printf("The Points are on Origin");
//     }
//     else if(y==0){
//     printf("The Points are on X-axis");
//     }
//     else if(x==0){
//         printf("The Points are on Y-axis");
//     }
//     else{
//         printf("The Point are not on any axis");
//     }
//     return 0;
// }

//  Q1- Calculate the Percentage 

// #include <stdio.h>
// int main ()
// {
//     float E1 = 90; //English Marks
//     float H2 = 80; //Hindi Marks
//     float P3 = 89; //Physic Marks 
//     float C4 = 98; //Chemistry Marks 
//     float B5 = 67; //Biology Marks
//     float P = (E1+H2+P3+C4+B5)/5;
//     printf("Percentage of 5 subject is : %f",P);
//     printf("\n\n Home work ");
//     float m1 = 34; //English Marks
//     float m2 = 36; //Physic Marks 
//     float m3 = 23; //Chemistry Marks 
//     float m4 = 28; //Biology Marks
//     float G = (m1+m2+m3+m4)/160*100;
//     printf("\n Percentage of 4 subject is : %f" ,G );
// return 0;
// }


//  Q2 To find the absoute valur of any Number.

// #include <stdio.h>
// int main ()
// {
//     int n;
//     printf("Enter the Number :");
//     scanf("%d",&n);
//     if (n<0){
//         n=n*(-1);
//         printf("The Absolute valuse is : %d",n);
//     }
//     return 0;
// }

// Q1
//     #include <stdio.h>
// int main()
// {
//     float Lenght,Breath;
//     printf("Enter Length : \n");
//     scanf("%f" ,&Lenght);
//     printf("Enter Breath : ");
//     scanf("%f" ,&Breath);
//     float Areaofrectangle = Lenght * Breath ;
//     printf("The area of rectangle is : %f" , Areaofrectangle);
//      return 0;
// }

// Q2
//     #include <stdio.h>
// int main()
// {
//     int i = 2, j= 3, k,l;
//     float a,b;
//     k = i/j*j;
//     l = j/i*i;
//     a = i/j*j;
//     b = j/i*i;
//     printf("%d\n %d\n %f\n %f\n",k,l,a,b);
//      return 0;
// }

// Q3 Even/odd
//     #include <stdio.h>
// int main()
// {
//     int n;
//     printf(" Enter your number :");
//     scanf("%d",&n);
//     if (n%2==0){
//         printf(" this is a even number ");
//     }
//     else {
//         printf("this is a odd number ");
//     } return 0;
// }

// Q4 Divisible by 5
//     #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter your number : ");
//     scanf("%d",&n);
//     if(n%5==0){ 
//         printf("this number is divisible by 5 ");
//     }
//     else {
//         printf("this number is not divisible by 5 ");
//     }
//      return 0;
// }

// Q5 Write the absolute value.
//     #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter your number : ");
//     scanf("%d",&n);
//     if(n<0){
//         n = n * (-1);
//     }
//     printf("the absolute value is : %d",n);
//     Q6 Print any Table 
//     int i,n;
//     printf("Enter the Table : ");
//     scanf("%d",&n);
//     for(i=1;i<=10;i++)
//     printf("%d X %d = %d\n",n,i,n*i);
    
//     return 0;
// }

//  Q6 - Give the length and breadth of a rectangle, 
//  write a program to find whether the area of the 
//   rectange is greater than its perimeter.

// #include<stdio.h>
// int main()
// {
//     int l,b;
//     printf("Enter your Length : ");
//     scanf("%d",&l);
//     printf("Enter your Breadth : ");
//     scanf("%d",&b);
//     int A = l*b;
//     int P = 2*(l+b);
//     if(A>P){
//         printf("Area is grater then Perimeter");
//     }
//     if(P>A){
//         printf("Primeter is greater then Area");
//     }
// }

// Q7- Sum of two given number by taking input.

// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("Enter the First Number : ");
//     scanf("%d",&x);
//     int y;
//     printf("Enter the Second Number : ");
//     scanf("%d",&y);
//     int sum = x + y;
//     printf("Sum of both Number : %d",sum);
//     return 0;
// }

// Q - 1 Find the odd and even number by taking input.

// #include <stdio.h>
// int main(){
//     int x;
//     printf("Enter the Number :");
//     scanf("%d",&x);
//     if (x%2==0){
//         printf("This is a Even Number "); 
//     }if(x%2!=0){
//         printf("This is a odd number");
//     }
//     else{
//         printf("This is a Odd Number ");
//     }
//     return 0;
// }

// Q - How to find the reminder in c.

//#include<stdio.h>
//int main()
//{
//   int a,b;
//    printf("Enter Divident : ");
//    scanf("%d",&a);
//    printf("Enter Divisor : ");
//    scanf("%d",&b);
// With formula 
// int q = a/b;
// int r = a - (b*q);      //Divisor * Quotient + Reminder = Divident
// printf("The Remainder when %d is divided by %d is : %d ",a,b,r);

// Without formula with [Modulo Operator:- (%)]
//    int r = a % b;
//    printf("The Remainder when %d is divided by %d is : %d ",a,b,r);
//    return 0;
//}

// How to find the Simple Interest in c . 

// #include<stdio.h>
// int main ()
// {
//     float Principal,Rate,Time,SI;
//     printf("Enter Principal : ");
//     scanf("%f",&Principal);
//     printf("Enter Rate : ");
//     scanf("%f",&Rate);
//     printf("Enter Time : ");
//     scanf("%f",&Time);
//     SI = (Principal*Rate*Time)/100;
//     printf("Your simple interest is : %f",SI);
//         return 0;
// }

// Use of ternary operater. 
//#include<stdio.h>
//int main(){
//    int n;
//    printf("Enter the Number : ");
//    scanf("%d",&n);
// Ternary Operator
// formula (exp1 ? exp2 : exp3)
// n%2==0 ? printf("Even Number") : printf("Odd Number");
// if(n%2==0)
// printf("Even Number");
// else
// printf("Odd Number");
//    return 0;
//}

// //Take input percentage of a student and print the grade according to marks but with (&&) (||)
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the Percentage : ");
//     scanf("%d",&n);
//  if(n>80){
//  printf("A Grade");
//  }
//  else if(n>60){
//     printf("B Grade");
//  }
//  else if(n>40){
//     printf("C Grade");
//  }
//  else 
//  {
//     printf("D Grade");
//  }
// }
