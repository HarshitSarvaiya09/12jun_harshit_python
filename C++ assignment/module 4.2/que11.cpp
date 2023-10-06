/* Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading 
 Rectangle: Area * breadth
 Triangle: ½ *Area* breadth
 Circle: Pi * Area *Area */

#include<iostream>
using namespace std;
class area
{
    public:
    static float pi = 7.14;
    void calculate(float area, float breadth)
    {
        int rectangle;
        rectangle = area * breadth;
        cout<<"Area of Rectangle : "<<rectangle;
    }
    void calculate(int area, float breadth)
    {
        int triangle;
        triangle = 1/2*area*breadth;
        cout<<"Area of Triangle : "<<triangle;
    }
    void calculate(int area)
    {
        int circle;
        circle = pi * area * area;
        cout<<"Area of Circle : "<<circle;
    }
};
int main()
{
     area A1;
         A1.calculate(23.7,32.4);
         A1.calculate(30,17.9);
         return 0;
}