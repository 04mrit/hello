#include <stdio.h>
void main(){
    int n, m=5;
    printf("No of Students : ");
    scanf("%d",&n);
    int marks[n][m];

    for (int i=0 ; i< n ; i++){
        for (int j=0 ; j<m  ; j++){
            printf("enter marks of std %d in sub %d : ",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    printf("\n\nSTD\t|\tC\t|\tMATHS\t|\tM.P.A\t|\tAccount\t|\tEnglish\t|\n");
    
    for (int i=0 ; i< n ; i++){
        printf("%d\t|\t",i+1);
        for (int j=0 ; j<m  ; j++){
            printf("%d\t|\t",marks[i][j]);
        }
        printf("\n");
    }
}