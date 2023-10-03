#include <stdio.h>

 int main () {
    int num , revnum=0 , rem , temp ;
    printf("Enter the number : ");
    scanf ("%d",&num);
    
    temp = num;
    while(num>0) {
        rem = num % 10;
        revnum = (revnum*10)+rem;
        num=num/10;
    }
    printf("Reverse number : %d" , revnum);
    
    if(temp==revnum) {
       printf("\n Number is Panindrome");
    }
       else{
           printf("\n Number is not Palindrome");
       }
         return 0;    
     
 }
