/* Write a program of Addition, Subtraction, Division, Multiplication using
constructor.  */

#include<iostream> 
 using namespace std; 
 class add{ 
         public: 
         int a,b,c; 
         add(int a,int b){ 
                 c=a+b; 
                 cout<<"Addition is :"<<c<<endl; 
         }         
 }; 
 class sub{ 
         public: 
         int a,b,c; 
         sub(int a,int b){ 
                 c=a-b; 
                 cout<<"Subtraction is :"<<c<<endl; 
         }         
 }; 
 class mul{ 
         public: 
         int a,b,c; 
         mul(int a,int b){ 
                 c=a*b; 
                 cout<<"Multiplication is :"<<c<<endl; 
         }         
 }; 
 class divi{ 
         public: 
         int a,b; 
         float c; 
         divi(int a,int b){ 
                 c=(float)a/b; 
                 cout<<"Division is :"<<c<<endl; 
         }                 
 }; 
 int main(){ 
         int a,b; 
         cout<<"enter value of a and b:"; 
         cin>>a>>b; 
         add o1(a,b); 
         sub o2(a,b); 
         mul o3(a,b); 
         divi o4(a,b); 
         return 0; 
 }
