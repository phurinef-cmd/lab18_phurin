#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};


double overlap(Rect *R1,Rect *R2){
    double left,right,top,bottom;
    if(R1->x>R2->x) left=R1->x;
	else left=R2->x;
    if(R1->x+R1->w>R2->x+R2->w)right=R2->x+R2->w;
	else right=R1->x+R1->w;
    if(R1->y+R1->h<R2->y+R2->h)top=R1->y;
	else top=R2->y;
    if(R1->y-R1->h<R2->y-R2->h)bottom=R2->y-R2->h;
	else bottom=R1->y-R1->h;
    double x_over=right-left;
    double y_over=top-bottom;
    double area_over= x_over*y_over;
    if(area_over<0)return 0;
    else return area_over;
}