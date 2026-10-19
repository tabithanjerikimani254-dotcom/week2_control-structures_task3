
#include <iostream>
using namespace std;

int main()
{
    double number1, number2, result;
    char op;

    cout << "Enter the first number:"<<endl;
    cin >> number1;

    cout<<"Enter the operator(+, -, *, /):"<<endl;
    cin>>op;

    cout<<"Enter the second number:"<<endl;
    cin>>number2;

    switch(op)
    {
        case '+':
            result=number1+number2;
            cout<<"Result:"<<result<<endl;
            break;

        case'-':
            result=number1-number2;
            cout<<"Result:"<<result<<endl;
            break;

        case '*':
            result=number1*number2;
            cout <<"Result:"<<result<<endl;
            break;

        case '/':
            if (number2!= 0)
            {
                result = number1/number2;
                cout<<"Result:"<<result<<endl;
            }
            else
            {
                cout <<"Error: Division by zero is not allowed."<<endl;
            }
            break;

        default:
            cout<<"Invalid operator!"<<endl;
    }

    return 0;
}

