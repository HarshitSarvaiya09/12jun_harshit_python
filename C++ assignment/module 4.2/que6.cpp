/* Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)  */

#include<iostream> 
 #include<string.h> 
 using namespace std; 
 class person{ 
         public: 
                 string name; 
                 int age; 
                 void p(){ 
             cout<<"Person name:"; 
             cin>>name; 
             cout<<"Enter person age:"; 
             cin>>age; 
         } 
                 void pout(){ 
             cout<<"Person name:"<<name<<endl; 
             cout<<"Person age:"<<age<<endl; 
    } 
 }; 
 class student{ 
                 public: 
                    int percentage; 
                    void s(){ 
                 cout<<"enter student Percentage:"; 
                 cin>>percentage; 
     } 
             void sout(){ 
         cout<<"Student Percentage:"<<percentage<<endl; 
     } 
 }; 
 class teacher:public person,public student{ 
     public: 
     string teachername; 
     int salary; 
     void t(){ 
         cout<<"Enter teacher name:"; 
         cin>>teachername; 
         cout<<"Enter salary of teacher:"; 
         cin>>salary; 
     } 
     void tout(){ 
         cout<<"Teacher name:"<<teachername<<endl; 
         cout<<"Teacher salary:"<<salary<<endl; 
     } 
  
 }; 
 int main(){ 
     teacher obj; 
     obj.p(); 
     cout<<endl; 
     obj.s(); 
      cout<<endl; 
     obj.t(); 
      cout<<endl; 
     obj.pout(); 
      cout<<endl; 
     obj.sout(); 
      cout<<endl; 
     obj.tout(); 
     return 0; 
 }
