#include <stdio.h>

int check(char *ptr, char ch){
    char *pointer =ptr;
    while (*pointer != '\0'){
        
        if (*pointer == ch){
            return 1;
        }

        pointer++;
    } 
    return 0;

}
git commit -am "my commit message"
void main(){
    char str[]= "hello";
    printf("%d",check(str,'r'));
}