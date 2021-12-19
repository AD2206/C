#include <stdio.h> 


int main() {
	float  x1, x2, x3, y1, y2, y3 , area; 

	printf("Please enter x1: \n"); 
	scanf("%f", &x1);  
	printf("Please enter x2:  \n"); 
	scanf("%f", &x2);
	printf("Please enter x3: \n"); 
	scanf("%f", &x3);
	printf("Please enter y1:  \n"); 
	scanf("%f", &y1); 
	printf("Please enter y2: \n");  
	scanf("%f", &y2); 
	printf("Please enter y3: \n"); 
	scanf("%f", &y3); 
	 
	area = 0.5*(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));    
	printf("%f", area);




	
}