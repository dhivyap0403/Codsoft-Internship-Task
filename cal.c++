#include<iostream>
using namespace std;
int main()
{
    char op;
    float number1,number2;
    cout<<"Enter the value:";
    cin>>number1>>number2;
    cout<<"Select the operator('+' '-' '*' '/' '%'):";
    cin>>op;
    switch(op)
    {
        case '+' :
        cout<<number1<<"+"<<number2<<"="<<number1+number2;
        break;
         case '-' :
        cout<<number1<<"-"<<number2<<"="<<number1-number2;
        break;
         case '*' :
        cout<<number1<<"*"<<number2<<"="<<number1*number2;
        break;
         case '/' :
         if(number2==0)
         cout<<"error!.. Divided by 0 is not allowed";
         else
        cout<<number1<<"+"<<number2<<"="<<number1+number2;
        break;
        default:
        cout:"Sorry!.. operater is invalid";

    }
return 0;
}