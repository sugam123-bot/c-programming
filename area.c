// Write a program in c that finds area, perimeter of circle
#include <stdio.h>
#define PI 3.14

float radius, area, perimeter;
int main(){
	printf("Enter the radius of a circle:");
	scanf("%f", &radius);
	
	perimeter = 2 * PI * radius;
	area = PI * radius * radius;
	printf("The area of a circle is %.2f\n", area);
	printf("The perimeter of a circle is %.2f", perimeter);
	return 0;
}
