/* Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading
 */

#include<iostream>
using namespace std;
class maths
{
    public:
        int operation(int a,int b)
        {
            cout<<"Addition is :"<<a+b<<endl;
            cout<<"Subtraction is :"<<a-b<<endl;
        }
        int operation(float a,float b)
        {
            cout<<"Multiplication is :"<<a*b<<endl;
            cout<<"Division is :"<<a/b<<endl;
        }
};
int main()
{
    maths obj;
    obj.operation(40,50);
    obj.operation(12.9, 19);
    return 0;
}