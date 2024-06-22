#include <stdio.h>
#include <stdlib.h>
#include "RTM-tool_core.h"

int main(){
    float p1, p2;
    scanf("%f", &p1);
    angle pc(angle::minecraft, p1);
    float degree = pc.get_real();
    printf("real degree: %3.2f", degree);
    return 0;
}