#include <iostream> 
 #include <string> 
 using namespace std; 
 class cricket{ 
         public: 
                 string name; 
                 int run,match,bestscore; 
                 double average; 
                 void output(){ 
                         cout<<endl; 
                         cout<<"player information"<<endl<<endl; 
                         cout<<"Name :- "<<name<<endl; 
                         cout<<"Total runs :- "<<run<<endl; 
                         cout<<"Highest run score :- "<<bestscore<<endl; 
                         cout<<"Average runs :- "<<(double)run/match<<endl; 
                 } 
 }; 
 class batsman:public cricket 
         { 
         public: 
                 void player(){ 
                 cout<<"enter the name of batsman:- "; 
                 cin>>name; 
                 cout<<"enter total runs of batsman:- "; 
                 cin>>run; 
                 cout<<"enter number of matches played by batsman:- "; 
                 cin>>match; 
                 cout<<"enter best performance of batsman:- "; 
                 cin>>bestscore; 
                 } 
 }; 
 int main(){ 
         batsman obj; 
         obj.player(); 
         obj.output(); 
         return 0; 
 }
