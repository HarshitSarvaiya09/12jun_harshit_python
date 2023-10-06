/* Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multilevel Inheritance)  */

#include<iostream> 
 using namespace std; 
 class student{ 
         public: 
             int rollnum; 
             void roll(){ 
                 cout<<"Enter the Roll Number:"; 
                 cin>>rollnum; 
     } 
 }; 
 class test:public student{ 
         public: 
             int maths, sci; 
             void marks(){ 
         cout<<"Enter the marks of maths:"; 
         cin>>maths; 
         cout<<"Enter the marks of Science:"; 
         cin>>sci; 
     } 
 }; 
 class result:public test{ 
         public: 
             void output(){ 
             cout<<"Students result"<<endl<<endl; 
             cout<<"Roll Number: "<<rollnum<<endl; 
             cout<<"Marks of Maths: "<<maths<<endl; 
             cout<<"Marks of Science: "<<sci<<endl; 
             cout<<"Total Marks obtained: "<<maths+sci<<endl; 
     } 
 }; 
 int main() 
 { 
     result obj; 
     obj.roll(); 
     obj.marks(); 
     cout<<endl; 
     obj.output(); 
     return 0; 
 }
