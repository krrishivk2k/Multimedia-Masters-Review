/*
Krrishiv Kohli
Jash Patel
1/20/2022
Multimedia Masters Review project
Extra: Added another optoin to the pizza menu so users can pick from 6 pizzas instead of 5
*/

#include <iostream>
#include <string>
#include "Worksheets.h"
// Add all other needed header files

using namespace std;

int main()
{
  //Any functions you need to create for the worksheets should be in MyFunctions.cpp 
  //and prototyped in MyFunction.h

  bool runAgain = false;
  bool runAgain2 = false;
  bool runAgain3 = false;
  bool runAgain4 = false;
  int answer;
  string answer2 = "n";
  string answer3 = "n";
  string answer4 = "n";
  string answer5 = "n";

  string name1 = "Main menu";
  string name2 = "Part 1- Calculator ";
  string name3 = "Part 2 : Pizza-me";
  string name4 = "Part 3 : Wanna Try Again?";
  //Uncomment the needed loops

  do {
      //Main Menu
      cout << "---- MAIN MENU ----\n" << endl;
      //3 Option for user
      cout << "1. Calculator (Calc. De Gras)" << endl;
      cout << "2. Pizza-me, Pizza-Time!" << endl;
      cout << "3. Wanna Try Again?" << endl;
      cin >> answer;
      if (answer == 1) {
          do {
            //Running calculator program
            worksheet2(name2);

            //Asking user if they want another calculation
            cout << "Press y/Y to run again. Any other character to proceed: ";
            cin >> answer3;
            if (answer3 == "y" || answer3 == "Y") {
              runAgain2 = true;
            }
            else {
              runAgain2 = false;
            }
          } while (runAgain2 == true);
      }

      if (answer == 2) {
        do {
          //Running Pizza program
          worksheet3(name3);

          //Asking user if they want another order of pizzas
          cout << "Press y/Y to order again. Any other character to proceed: ";
          cin >> answer4;
          if (answer4 == "y" || answer4 == "Y") {
            runAgain3 = true;
          }
          else {
            runAgain3 = false;
          }
        } while (runAgain3 == true);
      }

    if (answer == 3) {
      do {
        //Running the video game
        worksheet4(name4);

        //Asking user if they want to play again
        cout << "Press y/Y to play again. Any other character to proceed: ";
        cin >> answer5;
        if (answer5 == "y" || answer5 == "Y") {
            runAgain4 = true;
        }
        else {
          runAgain4 = false;
        }
      } while (runAgain4 == true);
    }

    //Asking user if they want to run again
    cout << "Press y/Y to return to the main menu. Any other character to proceed: ";
      cin >> answer2;
      if (answer2 == "y" || answer2 == "Y") {
         runAgain = true;
      }
      else {
        runAgain = false;
      }
  } while (runAgain == true);
}