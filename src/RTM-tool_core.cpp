#include "RTM-tool_core.h"

position::position(position_type type, float x, float y){
    if(type == minecraft){
        this->p1 = x;
        this->p2 = -y;
    }
    if(type == real){
        this->p1 = x;
        this->p2 = y;
    }
}

position::p position::get_minecraft(){
    p pos;
    pos.p1 = this->p1;
    pos.p2 = -this->p2;
    return pos;
}
position::p position::get_real(){
    p pos;
    pos.p1 = this->p1;
    pos.p2 = this->p2;
    return pos;
}

angle::angle(angle_type type, float degree){
    if(type == minecraft){
        this->degree = degree-90;
    }
    if(type == real){
        this->degree = degree;
    }
    float process_degree = this->degree;
    while(process_degree >= 360){
        process_degree -= 360;
    }
    while(process_degree < 0){
        process_degree += 360;
    }
    this->degree = process_degree;
}

float angle::get_minecraft(){
    float process_degree = this->degree + 90;
    while(process_degree >= 180){
        process_degree -= 360;
    }
    while(process_degree < -180){
        process_degree += 360;
    }
    return process_degree;
}
float angle::get_real(){
    float process_degree = this->degree + 90;
    return process_degree;
}


svg::svg(char* path, int width, int height){
    this->F = fopen(path, "w+");
    this->initial(width, height);
}

void svg::initial(int width, int height){
    float minX = width/-2;
    float minY = height/-2;
    fprintf(this->F, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n");
    fprintf(this->F, 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"%d\" height=\"%d\" viewBox=\"%.1f %.1f %d %d\" style=\"transform: rotateX(180deg)\">\n",
    width,
    height,
    minX, 
    minY, 
    width, 
    height);
    fprintf(this->F, "<defs>\n");
    fprintf(this->F, "</defs>\n");
}

void svg::writedata(char* data){
    fprintf(this->F, data);
}

void svg::save(){
    fprintf(this->F, "</svg>\n");
    fclose(this->F);
}