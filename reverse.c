#include <stdio.h>

int main() {
    
    int values[5];

  printf("Enter 5 intgers : ") ;

  for (int i = 0; i<5; i++) {
    scanf("%d" , &values[i]);
  }
  printf("Displaying intergers : ");

  for(int i = 5 ; i<0 ; i--) {
    printf("%d\n" , values[i]);

  }
  return 0 ;
}