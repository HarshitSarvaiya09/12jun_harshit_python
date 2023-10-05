#include<iostream>
using namespace std;
class demo
{
    public:
    demo(int a,int b)
    {
        int choice;
        cout<<"1.addition"<<endl<<"2.subtriction"<<endl<<"3.multiplication"<<endl<<"4.division"<<endl<<"5.modulo";
        cin>>choice;
        switch(choice)
        {
            case 1: //addition
            cout<<"addition of the : "<<a+b;
            break;
            case 2: //subtriction
            cout<<"subtriction of the :"<<a-b;
            break;
            case 3: //multiplication
            cout<<"multiplication of the :"<<a*b;
            break;
            case 4: //division
            cout<<"division of the :"<<a/b;
            break;
            case 5: //modulo
            cout<<"modulo of the :"<<a%b;
            break;
            default:
            cout<<"invalid choice...!";
            break;
        }
    }
};
int main()
{
    int a,b;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"and b: ";
    cin>>b;
    demo obj(a,b);
    return 0;
}
