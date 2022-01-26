//Functions for part 1 - Calculator 

#include "MyFunctions.h"
#include "GetData.h"
//Make sure to add any other needed include files
#include <iostream>
#include <math.h>

using namespace std;
//SAMPLE  - Mrs. Digiovannas code
void MySampleFunction(void) {
    double testMe = 0;
    float testMe2 = 0;
    do {
        cout << "enter a double between -1.2  and 25.5: ";
    } while (!(getValidDouble(testMe)) || (testMe < -1.2) || (testMe > 25.5));

    do {
        cout << "enter a float between 5.2  and 6: ";
    } while (!(getValidFloat(testMe2)) || (testMe2 < 5.2) || (testMe2 > 6));
}

//Addition function
void Addition(int a, int b){
  int sum = a+b;
  cout << sum;
}

//Addition function
void Subtraction(int a, int b){
  int difference = a-b;
  cout << difference;
}

//Multiplucation function
void Multiplication(int a, int b){
  int product = a*b;
  cout << product;
}

//Division function
void Division(int a, int b){
  if(b != 0){
    int division = a/b;
    cout << division;
  }
  //Error trapping so program does not break
  else{
    cout << "The program will not run properly because anything divided by 0 is undefined...\n ";
  }
}

//Exponents function
void Exponents(int a, int b){
  int value = pow(a,b);
  cout << value;
}

//Modules function
void Mod(int a, int b){
  int modd = a%b;
  cout << modd;
}
 