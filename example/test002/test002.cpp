#include <stdio.h>
#include <stdlib.h>
#include "RTM-tool_core.h"

int main(){
    char data[] = "<path d=\"M300.0,-41.78022438834853 L-300.0,-41.78022438834853\" stroke=\"green\" stroke-width=\"2\" />\n";
    svg svg1("M:\\rtm-tool\\RTM-tool.core.c\\example\\test002\\output.svg", 800, 800);
    svg1.writedata(data);
    svg1.save();
    return 0;
}