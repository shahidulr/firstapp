#include<iostream>

using namespace std;


int main()
{
    int number_1,number_2,sum=0,sub=0,mul=0,div=0,mod=0;

    cout<<"Enter 2 number:";
    cin>>number_1>>number_2;
cin.ignore();

char sign;
cout<<"Enter sign(+,-,*,/,%):";
cin>>sign;
switch(sign){
case '+':
    sum=number_1+number_2;
    cout<<sum;
    break;
    case '-':
    sub=number_1-number_2;
    cout<<sub;
    break;
 case '*':
    mul=number_1*number_2;
    cout<<mul;
    break;
 case '/':
    div=number_1/number_2;
    cout<<div;
    break;
 case '%':
    mod=number_1%number_2;
    cout<<mod;
    break;
default:
    cout<<"please enter valid sign";
    break;



}


return 0;

}
