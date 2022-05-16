#include <stdio.h>
void main(){
    int num,prm=1;
    printf("Enter final no : ");
    scanf("%d",&num);

    for (int i = 2; i< num ; i++){
        prm =1;
        for (int j=2; j<(i/2)  ; j++){

            if ( (i%j) == 0 ) {
                prm = 0;
                break;
            }
            
        }

        if (prm == 1){
            printf("%d\t",i);
        }
    }
}