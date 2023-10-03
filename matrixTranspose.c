#include <stdio>

int main() {
    
    int a[10]b[10],transpose[10][10],r,c;
    printf("Enter Rows and Columns \n");
    scanf("%d %d",&r,&c);

    printf("\n Enter matrix elements : \n");
    for( int i=0 ; i<r ; i++ )
    for( int j=0 ; j<c ; j++ ) {
         printf( " enter element a%d%d : " ,i+1 , j+1);
         scanf("%d",&a[i][j]);
    } 
    printf("\nEntered matrix : \n");
    for( int i=0 ; i<r ; i++ )
    for( int j=0 ; j<c ; j++ ) {
        printf("%d", a[i][j]);
        if (j == c-1)
        printf("\n");
    }
    for()
} 
