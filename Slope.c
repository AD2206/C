#include <stdio.h> 


int main(void) { 
	float x1, y1, x2, y2, slope; 

	printf("Please enter x1: \n");  
    scanf("%f", &x1);   
	printf("Please enter y1: \n");
	scanf("%f", &y1);  
	printf("Please enter x2: "); 
	scanf("%f", &x2); 
    printf("Please enter y2: ");  
	scanf("%f", &y2);  

	slope = (y2 - y1) / (x2 - x1); 
	printf("%f", slope); 


}
