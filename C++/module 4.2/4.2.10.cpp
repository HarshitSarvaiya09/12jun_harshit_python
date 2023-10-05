#include<iostream> 
 using namespace std; 
 class demo{ 
                 public: 
                         int a,b; 
                         void input(){ 
                                 cout<<"enter two values to swap:"<<endl; 
                                 cout<<"enter value of a:"; 
                                 cin>>a; 
                                 cout<<"enter value of b:"; 
                                 cin>>b; 
                                 cout<< "Before swapping:" << endl; 
                     cout<<"a = " << a<<endl;  
                     cout<<"b = " << b<<endl<<endl; 
                         } 
                         friend void swap(); 
                         void display(){ 
                                 cout<<"after Swap a is :"<< a<<endl; 
                                  cout<<"after Swap b is :"<< b<<endl; 
                         } 
 }; 
 void swap(demo &x){ 
         x.a=x.a+x.b; 
         x.b=x.a-x.b; 
         x.a=x.a-x.b; 
 } 
 int main(){ 
         demo obj; 
         obj.input(); 
         swap(obj); 
         obj.display(); 
         return 0; 
 }
