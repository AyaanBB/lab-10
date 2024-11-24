#include <stdio.h>

struct Diddy {
    int x1;
    int x2;
    int y1;
    int y2;
    int area;
};

int main() {
    
    struct Diddy d = {1,2,3,4,24};
    
    int dis = (d.y2-d.y1)/(d.x2-d.x1);
    
    if(dis > d.area)
    {
        printf("Out");
    }
    else
    {
        printf("in");
    }

    return 0;
}