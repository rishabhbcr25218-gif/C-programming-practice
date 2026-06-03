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
