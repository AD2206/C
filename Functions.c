#include <stdio.h> 

// func here 
int area_of_rectangle(int l, int b) 
{
	int area;
	area = l * b; 
	return area; 

}



int main() { 
	int l = 10; 
	int b = 6; 
	int area = area_of_rectangle(l, b); 
	printf("%d\n", area); 
	return 0; 




}   