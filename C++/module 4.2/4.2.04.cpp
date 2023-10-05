#include<iostream> 
 using namespace std; 
  
 class bankaccount{ 
         public: 
         int id,balance,ch,withdraw,deposit; 
         string name; 
         void account(){ 
                 cout<<"Account number:"; 
         cin>>id; 
         switch(id){ 
                 case 1:{ 
                 balance=10000; 
                 name="harshit"; 
             cout<<"Account no:-"<<id<<endl; 
             cout<<"Account holder name :- "<<name<<endl; 
             cout<<"Account Type:- Saving"<<endl; 
             cout<<"Account balance:- "<<balance<<endl<<endl; 
                                 break; 
                         } 
                 case 2:{ 
                 balance=50000; 
                 name="harshit"; 
             cout<<"Account no:-"<<id<<endl; 
             cout<<"Account holder name :- "<<name<<endl; 
             cout<<"Account Type:- Saving"<<endl; 
             cout<<"Account balance:- "<<balance<<endl<<endl; 
                                 break; 
                         } 
                         default:{ 
                                 cout<<"Please enter valid bank account number."<<endl; 
                                 break; 
                         }    
         } 
         cout<<"Press 1 to deposit money and 2 to withdraw money:"; 
         cin>>ch; 
         switch(ch){ 
                 case 1: 
                         { 
                                 cout<<"Enter the amount to deposit:"; 
                                 cin>>deposit; 
                                 balance=balance+deposit; 
                                 cout<<"Account holder name :- "<<name<<endl; 
                                 cout<<"Total balance:"<<balance<<endl<<endl; 
                                 break; 
                                 } 
                         case 2:{ 
                                         cout<<"Enter the amount to withdraw:"; 
                                 cin>>withdraw; 
                                 balance=balance-withdraw; 
                                 cout<<"Account holder name :- "<<name<<endl; 
                                 cout<<"Total balance:"<<balance<<endl<<endl; 
                                 break; 
                         } 
                 } 
                 cout<<"Thank You"<<endl; 
         }         
 }; 
  
 int main(){ 
         bankaccount obj; 
         obj.account(); 
         return 0; 
 }   
