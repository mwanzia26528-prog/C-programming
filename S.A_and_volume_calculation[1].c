#include <stdio.h>

#define PI 3.14159   // Define the constant value of pi



int main() {

    float radius, height;

    float volume, surfaceArea;



    // Prompt user for input

    printf("Enter the radius of the cylinder: ");

    scanf("%f", &radius);



    printf("Enter the height of the cylinder: ");

    scanf("%f", &height);



    // Calculations

    volume = PI * radius * radius * height;

    surfaceArea = 2 * PI * radius * (height + radius);



    // Display results
    printf("..... results.......\n");

    printf("Volume: %.2f cubic units\n", volume);

    printf("Surface Area: %.2f square units\n", surfaceArea);



    return 0;

}