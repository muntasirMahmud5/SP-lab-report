#include <stdio.h>
//Develop a C program that calculates the area of different geometric shapes
 //such as circle, rectangle, and triangle.

int main() {
    int choice;
    float radius, length, width, base, height, area;

    printf("Choose a shape:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius; // π ≈ 3.14159
            printf("Area of the circle = %.2f\n", area);
            break;
        case 2:
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of the rectangle = %.2f\n", area);
            break;
        case 3:
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of the triangle = %.2f\n", area);
            break;
        default:
            printf("Invalid choice. Please select 1, 2, or 3.\n");
            break;
    }

    return 0;
}
