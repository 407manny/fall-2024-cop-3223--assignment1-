//********************************************************
// fracturing.c
// Author: Emmanuel Arroyo
// Date: 9/3/2024
// Class: COP 3223C, Professor Parra

// Purpose: 

// Input: None
//
// Output: (to the command line) 

// //********************************************************


#include <stdio.h>
#include <math.h>

#define PI 3.14

double point1_x, point1_y, point2_x, point2_y;

double calculate_distance() {
    double distance = sqrt(pow(point2_x - point1_x, 2) + pow(point2_y - point1_y, 2));
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", point1_x, point1_y);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", point2_x, point2_y);
    printf("\nThe distance between the two points is %.2f\n", distance);
    return distance;
}

double calculate_perimeter() {
    double distance = calculate_distance();
    double radius = distance / 2;
    double perimeter = 2 * PI * radius;
    printf("\nThe perimeter of the city encompassed by your request is %.2f\n", perimeter);
    return perimeter;
}

double calculate_area() {
    double distance = calculate_distance();
    double radius = distance / 2;
    double area = PI * pow(radius, 2);
    printf("\nThe area of the city encompassed by your request is %.2f\n", area);
    return area;
}

double calculate_width() {
    double distance = calculate_distance();
    printf("\nThe width of the city encompassed by your request is %.2f\n", distance);
    return distance;
}

double calculate_height() {
    double distance = calculate_distance();
    printf("\nThe height of the city encompassed by your request is %.2f\n", distance);
    return distance;
}

int main() {
    printf("Enter coordinates for Point #1 (x1 y1): ");
    scanf("%lf %lf", &point1_x, &point1_y);

    printf("Enter coordinates for Point #2 (x2 y2): ");
    scanf("%lf %lf", &point2_x, &point2_y);

    calculate_perimeter();
    calculate_area();
    calculate_width();
    calculate_height();

    return 0;
}

