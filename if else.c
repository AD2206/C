#include <stdio.h> 
int main() 
{
	int speed; 
	printf("\n Enter your speed as an integer:"); 
	scanf("%d", &speed);   
	if (speed < 65)
		printf("\n No speeding ticket\n\n");
	else
		printf("\n Speeding ticket\n\n"); 
	return 0;                               

	 
	  

}                     
 