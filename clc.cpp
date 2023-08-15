#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n);
double power(double base, int exponent);

int main() {
    int choice;
    double num1, num2, result,result1,result2,tan;
    
    
    bool flag = true;
    
    do{
    cout << "Choose an operation:\n";
    cout << "1. Modulus\n";
    cout << "2. Exponential\n";
    cout << "3. Square Root\n";
    cout << "4. Square\n";
    cout << "5. Logarithm\n";
    cout << "6. Factorial\n";
    cout << "7. Sine\n";
    cout << "8. Cosine\n";
    cout << "9. Tan\n";
    cout << "10. Exit\n";
    cin >> choice;
    
    switch(choice) {
    
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = fmod(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 2:
            cout << "Enter a base and an exponent: ";
            cin >> num1 >> num2;
            result = power(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 3:
            cout << "Enter a number: ";
            cin >> num1;
            result = sqrt(num1);
            cout << "Result: " << result << endl;
            break;
        case 4:
            cout << "Enter a number: ";
            cin >> num1;
            result = pow(num1, 2);
            cout << "Result: " << result << endl;
            break;
        case 5:
            cout << "Enter a number: ";
            cin >> num1;
            result = log(num1);
            cout << "Result: " << result << endl;
            break;
        case 6:
            cout << "Enter a number: ";
            cin >> num1;
            result = factorial(num1);
            cout << "Result: " << result << endl;
            break;
        case 7:
            cout << "Enter an angle in degrees: ";
            cin >> num1;
            result = sin(num1 * M_PI / 180.0);
            cout << "Sine: " << result << endl;
            
            break;
        case 8:
            cout << "Enter an angle in degrees: ";
            cin >> num1;
            result = cos(num1 * M_PI / 180.0);
            cout << "Cosine: " << result << endl;
           
            break;
        case 9:
            cout << "Enter an angle in degrees: ";
            cin >> num1;
            result1 = sin(num1 * M_PI / 180.0);
            
            result2 = cos(num1 * M_PI / 180.0);
            tan = result1/result2;
            cout << "Tan: " << tan << endl;
            
           
            break;
        case 10:
            exit(0);
           
            break;
        default:
            cout << "Invalid choice." << endl;
    
    }
    cout <<" \n------------------------------\n";  
    }while(flag);  
     
    

    return 0;
}

int factorial(int n) {
    if(n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

double power(double base, int exponent) {
    double result = 1;
    for(int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}