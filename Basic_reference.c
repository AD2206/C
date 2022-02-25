#include <stdio.h> 
int main(void) {
	int d; 
	scanf("%d", &d); 
	int r = d % 8; 
	if (r == 0) {
		printf("true");  

	} 
	else {
		printf("false"); 
	}

}  

