#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {

    struct Point p, *ptr = &p; 
    
    ptr->x = 5;
    ptr->y = 10;

    printf("\nPoint : (%d, %d)\n", ptr->x, ptr->y);

    return 0;
}
