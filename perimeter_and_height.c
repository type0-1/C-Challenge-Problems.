#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*args[]){
    double width = 15.0;
    double height = 5.0;
    double perimeter = (height + width) * 2;
    double area = width * height;
    printf("The width and height of the square is: %.2f, %.2f.\n", width, height);
    printf("The perimeter is: %.2f.\n", perimeter);
    printf("The area is: %.2f.\n", area);
    return 0;
}
