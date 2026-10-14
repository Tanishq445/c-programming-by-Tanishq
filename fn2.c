#include <stdio.h> 
int add(int a, int b) { 
int sum; sum = a + b; 
return sum; 
} 
int main() { 
int x, y, result; 
printf("Enter two numbers: "); 
scanf("%d %d", &x, &y); 
result = add(x, y); 
printf("%d + %d = %d\n", x, y, result); 
return 0; }