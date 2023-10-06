/* Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading  */

#include<iostream> 
 using namespace std; 
 class demo{ 
         public: 
                 double ans; 
                 void area(double r){ 
                         cout<<"enter the radius of circle:"; 
                         cin>>r; 
                         ans=3.14*r*r; 
                         cout<<"area of circle:"<<ans<<endl<<endl; 
                 } 
                 void area(int a,int b){ 
                         cout<<"enter the lenght and width of rectangle:"; 
                         cin>>a>>b; 
                         ans=a*b; 
                         cout<<"area of rectangle:"<<ans<<endl<<endl; 
                 } 
                 void area(double a,double b){ 
                         cout<<"enter the base and height of triangle:"; 
                         cin>>a>>b; 
                         ans=0.5*a*b; 
                         cout<<"area of triangle:"<<ans<<endl<<endl; 
                 } 
 }; 
  
 int main(){ 
         int a,b; 
         double c,d; 
         demo obj; 
         obj.area(c); 
         obj.area(a,b); 
         obj.area(c,d); 
         return 0; 
 }
