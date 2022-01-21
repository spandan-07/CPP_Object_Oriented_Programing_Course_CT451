/*
q3_area_using_function_overloading
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<complex.h>
using namespace std;

class functionoverload
{   
    double a,b,c;
    float s;
    public: 
    double area(double a){
        return(a*a);
    }
    double area(double l, double b){
        return(a*b);
    }
    double area(double a, double b, double c){
        s=(a+b+c)/2;
        return(sqrt(s*(s-a)*(s-b)*(s-c)));
    }

};


int main(){
    double x,y,z;
    int ans;
    functionoverload f1;
    cout<<"Enter the no. of sides: ";
    cin>>ans;
    cout<<endl;
   if (ans==1)
   {
       cout<<"Enter a side: ";
       cin>>x;
       cout<<"The area of square is "<<f1.area(x)<<endl;
   }
   else if (ans==2)
   {
       cout<<"Enter two sides: ";
       cin>>x>>y;
       cout<<"The area of rectangle is "<<f1.area(x,y)<<endl;
   }
   else if (ans==3)
   {
       cout<<"Enter three sides: ";
       cin>>x>>y>>z;
       cout<<"The area of triangle is "<<f1.area(x,y,z)<<endl;
   }
   else
   {
       cout<<"Invalid !!!";
   }
   
return 0;
}
