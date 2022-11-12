#include "stdio.h"

int main() {
    int side;
    int area;
    
    printf("Insert side length in meter: ");
    scanf("%d", &side);
    area=side * side;
    
    printf("If the side length of square is %d meters, then the area is %dm²", side, area);
    
    return 0;
}