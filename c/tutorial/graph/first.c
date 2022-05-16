#include <stdio.h>
void main(){
	FILE *ptr;
	ptr = fopen("hello.txt","w");
	if (ptr = NULL ) {
		printf("cant create new file");
	}
	else { 
		printf("created a new file"); 
	}
	fprintf(ptr,"i study BCA");
	fclose(ptr);
}
