#include <stdio.h> 
float area(float r);          
/* prototype */ 
int main() { 
float radius, a; 
printf("Enter the radius: "); 
scanf("%f", &radius); 
a = area(radius); 
printf("Area = %.2f\n", a); 
return 0; 
} 
float area(float r) 
{         
/* definition */ 
return 3.14159 * r * r; 
}