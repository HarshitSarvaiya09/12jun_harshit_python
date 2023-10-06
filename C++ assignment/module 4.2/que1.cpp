/* WAP to create simple calculator using class */

#include<iostream> 
 using namespace std; 
 class demo{ 
         public: 
                 void ans(int a,int b){ 
                         cout<<"enter two value to make addition:";         
                         cin>>a>>b; 
                         cout<<"addition is:"<< a+b<<endl; 
                 } 
                 void ans(double a,double b){ 
                         cout<<"enter two values to make substraction:";         
                         cin>>a>>b; 
                         cout<<"substraction is:"<< a-b<<endl; 
                 } 
                 void ans(int a, double b){ 
                         cout<<"enter two values to make multiplication:";         
                         cin>>a>>b; 
                         cout<<"multiplication is:"<< a*b<<endl; 
                 } 
                 void ans(double a,int b){ 
                         cout<<"enter two values to make division:";         
                         cin>>a>>b; 
                         cout<<"Division is:"<< (double)a/b<<endl; 
                 } 
 }; 
 int main(){ 
         int a,b; 
         double c,d; 
         demo obj; 
         obj.ans(a,b); 
         obj.ans(c,d); 
         obj.ans(a,c); 
         obj.ans(d,a); 
         return 0; 
 }
