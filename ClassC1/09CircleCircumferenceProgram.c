#include <stdio.h>

int main()
{
    const double PI = 3.141592;
    double radius;
    double circumference;
    double area;

    printf("Ange cirkelns radie: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Cirkelns omkrets är: %lf", circumference);
    printf("Cirkelns area är: %lf", area);

    return 0;
}