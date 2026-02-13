#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect*r1,Rect *r2){
    double left,right,top,bottom;
    if(r1->x > r2->x){
        left = r1->x; 
        }else {
        left = r2->x;
        }
    
    if(r1->x + r1->w < r2->x + r2->w){
        right = r1->x + r1->w; 
        }else {
        right = r2->x + r2->w;
        }
    
    if(r1->y < r2->y){
        top = r1->y; 
        }else {
        top = r2->y;
        }
    
    if(r1->y - r1->h > r2->y - r2->h){
        bottom = r1->y - r1->h; 
        }else {
        bottom = r2->y - r2->h;
        }
    
    double width = right - left;
    double hight = top - bottom;
    if(width > 0 && hight > 0){
        return width * hight;
    }else {
        return 0;
    }


}