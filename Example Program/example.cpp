#include "stdio.h"

int main() {
    int length = 15;
    int width = 10;
    int area;
    
    area = length * width;
    
    printf("A Rectangle with the length and width of:\n");
    printf("Length: %d meters\n", length);
    printf("Width: %d meters\n", width);
    
    printf("Then the area of the rectangle is %dm²", area);
    
    return 0;
}