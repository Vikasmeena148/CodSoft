#include<iostream>
using namespace std;

int main(){
    double num1,num2;
    char operation;
    double result;

    cout<<"Welcom to the basic calculator !"<<endl;
    cout<<"please enter the two numbers:"<<endl;
    cout<<"number1:";
    cin>>num1;
    cout<<"Number2:";
    cin>>num2;

    cout<<"choose an operation(+,-,*,/):";
    cin>>operation;
    switch(operation) {
        case '+':
        result=num1+num2;
        cout<<"Result:"<<num1<<"+"<<num2<<"="<<result<<endl;
        break;

        case '-':
        result=num1-num2;
        cout<<"Result:"<<num1<<"-"<<num2<<"="<<result<<endl;
        break;

        case '*':
        result=num1*num2;
        cout<<"Result"<<num1<<"*"<<num2<<"="<<result<<endl;
        break;

        case '/':
        if(num2!=0){
        result=num1/num2;
        cout<<"Result:"<<num1<<"/"<<num2<<"="<<result<<endl;
        }
        else{
            cout<<"Error:Division by zero is not allowed."<<endl;
        }
        break;
        default:
        cout<<"Error:Invalid operation."<<endl;
        break;
    }
    return 0;
        }