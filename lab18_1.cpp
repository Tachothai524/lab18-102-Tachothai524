#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
    double left = (R1.x > R2.x) ? R1.x : R2.x;
    double right = (R1.x + R1.w < R2.x + R2.w) ? R1.x + R1.w : R2.x + R2.w;
    double top = (R1.y < R2.y) ? R1.y : R2.y;
    double bottom = (R1.y - R1.h > R2.y - R2.h) ? R1.y - R1.h : R2.y - R2.h;
    
    double width = right - left;
    double hight = top - bottom;
    if(width > 0 && hight > 0){
        return width * hight;
    }else {
        return 0;
    }
    
}