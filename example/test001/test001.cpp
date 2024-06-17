#include <stdio.h>
#include <stdlib.h>
#include "RTM-tool_core.h"

int main(){
    float p1, p2;
    scanf("%f %f", &p1, &p2);
    position pc(position::minecraft, p1, p2);
    float x = pc.get_real().p1;
    float y = pc.get_real().p2;
    printf("x: %3.2f\ny: %3.2f", x, y);
    return 0;
}