#include<iostream>
using namespace std;

int main()
{
    double first_num=0,second_num=0,result=0;
    char operation;
    cout <<"This is a simple calculator designed to perform basic arithmetic operations such as addition, subtraction, multiplication, and division." << endl <<endl;
    cout <<"Enter the first number." << endl;
    cin >>first_num; 
    cout <<"Enter the second number." << endl;
    cin >>second_num;
    cout <<"Enter the arithmetic operation to be performed.( + , - , * , / )" << endl;
    cin >>operation;

    switch (operation)
    {
        case '+':
        result = first_num + second_num;
        cout <<"Answer: " << result <<endl;
        break;

        case '-':
        result = first_num - second_num;
        cout <<"Answer: " << result <<endl;
        break;

        case '*':
        result = first_num * second_num;
        cout <<"Answer: " << result <<endl;
        break;

        case '/':
        result = first_num / second_num;
        cout <<"Answer: " << result <<endl;
        break;
    }

    return 0;
}


