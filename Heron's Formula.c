#include <stdio.h>
#include <math.h>

double herons_formula(int a, int b, int c) {
    // Check if the sides form a valid triangle using the triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a) {
        // Semi-perimeter
        double s = (a + b + c) / 2.0;
        // Area calculation using Heron's formula
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        return area;
    } else {
        // If not a valid triangle, area is 0
        return 0.0;
    }
}

int main() {
    int a, b, c;
    
    // Input three sides of the triangle
    scanf("%d %d %d", &a, &b, &c);
    
    // Calculate the area using Heron's formula
    double area = herons_formula(a, b, c);
    
    // Print the result rounded to 4 decimal places
    printf("%.4f\n", area);
    
    return 0;
}

