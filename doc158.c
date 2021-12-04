//diameter,circumference,area
#include <stdio.h>
#include <math.h>

double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);
int main() 
{
    float radius, dia, circ, area;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    
    dia  = getDiameter(radius);       // Call getDiameter function,
    circ = getCircumference(radius);  // Call getCircumference function
    area = getArea(radius);           // Call getArea function
    
    printf("Diameter of the circle = %.2f units\n", dia);
    printf("Circumference of the circle = %.2f units\n", circ);
    printf("Area of the circle = %.2f sq. units", area);
    
    return 0;
}
double getDiameter(double radius) 
{
    return (2 * radius);
}

double getCircumference(double radius) 
{
    return (2 * M_PI * radius); // M_PI = PI = 3.14 ... 
}

double getArea(double radius)
{
    return (M_PI * radius * radius); // M_PI = PI = 3.14 ...
}

