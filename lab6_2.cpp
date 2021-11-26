#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double a){
    return a*M_PI/180;
}
double rad2deg(double b){
    return b*180/M_PI;
}
double findXComponent(double h1,double h2,double r1,double r2){
    return  h1*cos(r1)+h2*cos(r2);
}
double findYComponent(double s1,double s2,double d1,double d2){
    return s1*sin(d1)+s2*sin(d2);
}
double pythagoras(double x, double y){
    return sqrt(pow(x,2) + pow(y,2));
}
void showResult(double g, double p){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " <<g <<endl;
    cout << "Direction of the resultant vector (deg) = "<<p <<endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
