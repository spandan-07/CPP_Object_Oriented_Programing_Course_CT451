#include<iostream>
#define PI 3.14
using namespace std;


int area(int a){
    return(a*a);
}
int area(int a, int b){
    return(a*b);
}
float area(float r){
    return(PI*r*r);
}


int main(){
    int x, y;
    float z;
    cout<<"Enter length, breadth and radius: ";
    cin>>x>>y>>z;

    cout<<"The area of square is "<<area(x)<<endl;
    cout<<"The area of rectangle is "<<area(x,y)<<endl;
    cout<<"The area of circle is "<<area(z)<<endl;
    
    return 0;
}
