/*
Krrishiv Kohli
Jash Patel
Multimedia Maters Review
1/24/22
Extra: Added another optoin to the pizza menu so users can pick from 6 pizzas instead of 5
*/

#include "Worksheets.h"
#include "GetData.h"
#include "MyFunctions.h"
#include <iostream>
#include <string>
#include <stdio.h>
//formatting using setw
#include <cstdlib>
#include <cmath>
#include <iomanip> 

using namespace std;

//calling all the functions that will be utilized in this program...
void Addition(int a, int b);
void Subtraction(int a, int b);
void Multiplication(int a, int b);
void Division(int a, int b);
void Exponents(int a, int b);
void Mod(int a, int b);

string name1 = "Main menu";
string name2 = "Part 1- Calculator ";
string name3 = "Part 2 : Pizza-me";
string name4 = "Part 3 : Wanna Try Again?";
;
void worksheet1(string namedItem) {
    cout << endl << namedItem << endl << endl;

    //Creating variables
    int menuItem, track = 0, testMe = 0;

    //Main Menu
    cout << "---- MAIN MENU ----\n" << endl;

    //3 Option for user
    cout << "1. Calculator (Calc. De Gras)" << endl;
    cout << "2. Pizza-me, Pizza-Time!" << endl;
    cout << "3. Wanna Try Again?" << endl;

  //Do-While loop to keep on asking user what they wish for and at least printing Once
  do {
      cout << "Enter a number between 1-3 to toggle the function you would want to run! " << endl;
      cin >> testMe;

    if (testMe == 1) {
      worksheet2(name2);
      track = 1;
    }
    else if (testMe == 2) {
      worksheet3(name3);
      track = 1;
    }
    else if (testMe == 3) {
      worksheet4(name4);
      track = 1;
    }
    else {
      cout << "Uh Oh! You entered a number which was not between 1 - 3!";
      track = 0;
    }
  } while (track != 1);

  cout << testMe;
}

void worksheet2(string namedItem) {
    std::cout << endl << namedItem << endl << endl;
    //declare all variables
    int operationSelection, a, b,c,d,e,f,g,h;
    //Asking user for operations
    cout << "Please select an option to prefrom: " << endl;
    //Print 6 operations
    cout << "1) Addition (+)\n";
    cout << "2) Subtraction (-)\n";
    cout << "3) Multiplication (x)\n";
    cout << "4) Division (÷)\n";
    cout << "5) Exponents (^)\n";
    cout << "6) Modulous (%)\n";
    //Take the user input and store it
    cin >> operationSelection;
      //Ask user for integars
    cout << "Please enter an integar: \n";
    cin >> a;
     cout << "Please enter another integar: \n";
    cin >> b;
    //Switch case or if statement chain for each case in Menu
    switch (operationSelection) {
      case (1): {
        cout << "The sum of the numbers that you inputted is: ";
        Addition(a,b);
        break;
      }
      case (2): {
          cout << "The difference of the numbers that you inputted is: ";
        Subtraction(a,b);
        break;
        }
      case (3): {
        cout << "The product of the numbers that you inputted is: ";
        Multiplication(a,b);
        break;
      }
      case (4): {
        cout << "The quotient of the numbers is: ";
          Division(a,b);
        break;
      }
      case (5): {
        cout << "The value is: ";
        Exponents(a,b); 
        break;
      }
      case (6): {
        cout << "The value is: "; 
        Mod(a,b);
        break;
      }
    }
    
    cout << endl;
    //Will need to put entire code in do while or error trapping loop
    
    //Once finished call worksheet1 again
}

void worksheet3(string namedItem) {
    std::cout << endl << namedItem << endl << endl;
    // Pizza-me Pizza time
    
    //declare all variables
    int pizzas, item2 = 0;
    double item = 0, total, tax = 1.6815;
    //give user a menu along with the prices 
    cout << "1) Cheese Pizza ($9.99 per pie)\n";
    cout << "2) Mushroom Pizza ($10.49 per pie)\n";
    cout << "3) Pineapple Pizza ($10.49 per pie)\n";
    cout << "4) Hamburger Pizza ($12.99 per pie)\n";
    cout << "5) Chocolate Pizza ($11.99 per pie)\n";
    cout << "6) Pepperoni Pizza ($10.99 per pie)\n";
    //ask user to select the pizzas they want to select
    cout << "How many pizza pie(s) would you like to select?: ";
    cin >> pizzas;

    for (int i = 0; i < pizzas; i++) {
      cout << "Choose pizza # " << (i + 1) << ": ";
      cin >> item2;

      switch (item2) {
        case (1): {
          item += 9.99;
          break;
        }
        case (2): {
          item += 10.49;
          break;
        }
        case (3): {
          item += 10.49;
          break;
        }
        case (4): {
          item += 12.99;
          break;
        }
        case (5): {
          item += 11.99;
          break;
        }
        case(6):{
          item+= 10.99;
          break;
        }
      }
    }
    //calculate total prices
    cout << "Total cost: $" << item;
    //multiply by 0.6815 cuz of tax
    total = item * tax;
    cout << total << setprecision(2);
    //ask whether the user wishes to place another order of pizza or if they would like to return to the main menu.
    cout << endl;
}


void worksheet4(string namedItem) {
    std::cout << endl << namedItem << endl << endl;

    //Declaring Variables
    int choice, choice2, choice3, choice4, choice5, choice6;
    string playerName;
    
    //RPG game 
    cout << "Hello! Great player, what path would you choose in life?: " << endl;
    
    //Two events:
    cout << "1) An Adventurer in search for great treasures!" << endl;
    cout << "2) A Knight with the noble duty of protecting the King" << endl;
    cin >> choice;

    //1: Adventurer who travels around
    if (choice == 1) {
      cout << "You are an Adventurer!\nYou walk up in your sleeping bag and the memories of your previous travels come back to you.\nYou pack your things and advance into the forest to find the treasure you are looking for.\nHowever in your path is an old hunched man with dirty clothes.\n'Hello, can you help me kind sir?' - Stranger\nHelp stranger? (1 for yes, 2 for no): ";
      cin >> choice3;

      //Asks user the question
      if (choice3 == 1) {
        cout << "\nOh thank you! I have this math probem and I do not know the answer.\n2 + 2 = ? ";
        cin >> choice4;

        //If user answers question correctly
        if (choice4 == 4) {
          cout << "\nThank you so much! here is my treasure!\n";
          cout << "You finally found the treasure you spent weeks searching for!\nYou Win!" << endl;
        }
        
        //If user answers question incorrectly 
        else if (choice4 != 4) {
          cout << "How do you not know a simple math question??\nThe angry man hits you on the head with his walking stick and you die.\n";
          cout << "How did an old man beat you????\nYou lose!" << endl;
        }
      }

      //If user does not want to help stranger
      else if (choice3 == 2) {
        cout << "Hey! Thats not very nice! The angry man whistles his fingers and a snake jumps onto you and licks you until you die.\n";
        cout << "Really? dying by being licked?\nYou lose!" << endl;
      }
    }
    //- Goes into forest and gets asked math question by random stranger is its wrong then they die

    //2: Knight who fights people
    if (choice == 2) {
      cout << "Narrator: You are a knight!\n Your job is to protect the king from people who that try to overthrow or attack the king. The king rightfully deserves the throne and your job is to protect it.\n";

      //asking for name
      cout << "What would you like to call yourself?: ";
      cin >> playerName;
      cout << "3 hours later...\n";
      cout << "Narrator: Dear " << playerName << ", it has come to my attention that barbarians from a neighboring village has been looting our people. The barbarians are coming for the king. You must put a stop to it.\n";
      cout << "How will you respond to this?" << endl << "1) What can I do to help?\n2) I don't wanna help you guys\n";
      cin >> choice5;
      
      if(choice5 == 1) {
        cout << "If you want to help us make peace with the village, you must solve for x:\n";
        cout << "-2+2\n";
        cin >> choice6;
        // if user answers correctly
        if(choice6 == 0) {
          cout << "Thank you for helping us save our village\n";
        }
        // if user answers wrong
        else {
          cout << "Incorrect! Now our village is being teared apart\n";
        }
      }
      // if user does not want to help
      else {
        cout << "Get out of here and never come back...\n";
      }
    }
  }





























//300 Lines LESGO!