#include<iostream>
#include<stdlib.h>

using namespace std;


int main()

{
    
    char operation;
    int operand1,operand2;
    double result = 0.0;
    char a = 'y';
    while(a == 'y'){
    again:cout<<"Enter first operand operation and second operand: "<<endl;
    cin>>operand1;
    
    cin>>operation;
    cin>>operand2;
    
    switch(operation){
        case '/':
            result= (double)operand1/operand2;
            break;
        case '*':
            result= (double)operand1*operand2;
            break;
        case '+':
            result= operand1+operand2;
            
            
            break;
        case '-':
            result= operand1-operand2;
            break;
        default :
            cout<<"we cant do this operation"<<endl;
            break;
    }
    cout<<"Your result = "<< result <<endl;
    cout<<"Again?"<<endl;
    cin>>a;
    }
    system ("pause");
    return 0;
}
