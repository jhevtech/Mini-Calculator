#include <iostream>
#include <cmath>
using namespace std;

int main(){

    char op;
    double num1;
    double num2;
    double result;
     
        cout << "******* CALCULATOR *******\n";

        cout << "Enter either (+ - * /): ";
        cin >> op;

        cout << "Enter #1: ";
        cin >> num1;

        cout << "Enter #2 ";
        cin >> num2;
    
    switch(op){
        case '+':
            result = num1 + num2;
            cout << "result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "result: " << result << endl;
            break;
        case '/':
            result = num1 / num2;
            cout << "result: " << result << endl;
            break;
        default:
            cout << "That wasn't a valid operator." << endl;
    }



    return 0;
}