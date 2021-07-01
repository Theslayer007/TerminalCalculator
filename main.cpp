#include <iostream>

//Hello to whoever reads this! This is just a simple project I was doing in my spare time code might be awful


//main
int main()
{
int options;

//general setup
int a;
int b;
int sum;

float c;
float d;
float sumtwo;

double e;
double f;
double sumthree;




//User greet
std::cout << "::Terminal Calculator 1.0.0::\n\n\n";
std::cout << "What will you be calculating today?\n\n";
std::cout << "Options [1] Addition [2] Subtraction [3] Multiply [4] division [5] division float [6] division double [7] multiply float [8] multiply double\n\n\n";
std::cout << "(number)Option: ";
std::cin >> options;


//Switches because I don't feel like creating 30 else ifs
    switch (options) {

    while(options == options){

    case 1:
    //Addition
    std::cout << "Addition: \n";
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "Enter another number: ";
    std::cin >> b;
        
    sum = a + b;
    std::cout << sum;
    break;
        
    //Subtraction
    case 2:
    std::cout << "Subtract: \n";
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "Enter another number: ";
    std::cin >> b;
        
    sum = a - b;
    std::cout << sum;
    break;

    case 3:
    //Division
    std::cout << "Divide: \n";
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "Enter another number: ";
    std::cin >> b;
        
    sum = a / b;
    std::cout << sum;
    break;

    case 4:
    //Multiplication
    std::cout << "Multiply: \n";
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "Enter another number: ";
    std::cin >> b;
        
    sum = a * b;
    std::cout << sum;
    break;

    case 5:
    //Dividing with floats!
    std::cout << "Division Float: \n\n";
    std::cout << "Enter a number: " ;
    std:: cin >> c;
    std::cout << "Enter another number: ";
    std::cin >> d;
        
    sumtwo = c / d;
    std::cout << sumtwo;
    break;

    case 6:
    //Dividing with double!
    std::cout << "Division Double: \n\n\n";
    std::cout << "Enter a number: ";
    std::cin >> e;
    std::cout << "Enter another number: ";
    std::cin >> f;
        
    sumthree = e + f;
    std::cout << sumthree;
    break;

    case 7:
    //Multiplying with floats!
    std::cout << "Multiply Float: \n\n\n";
    std::cout << "Enter a number: ";
    std::cin >> c;
    std::cout << "Enter another number: ";
    std::cin >> d;
        
    sumtwo = c * d;
    std::cout << sumtwo;
    break;

    case 8:
    //Multiplying with doubles!
    std::cout << "Multiply Double: \n\n\n";
    std::cout << "Enter a number: ";
    std::cin >> e;
    std::cout << "Enter a number: ";
    std::cin >> f;
        
    sumthree = e * f;
    std::cout << sumthree;
    break;

    }



}



return 0;
}
