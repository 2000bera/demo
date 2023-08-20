// working with strings and working with functions
#include <iostream>
#include <string>

using namespace std;

// check factorial
namespace Factorial {
  void getFactorial() {
    double fact;

    cout << "Enter a number to it's factorial: ";
    cin >> fact;
    
    double factorial = fact;
    double number;
    number = factorial - 1;

    while (number > 1)
    {
      factorial = factorial * number;
      number--;
    }

    cout << "Fact = " << fact << endl;
    cout << "Factorial = " << factorial << endl;
    
  }
}

int main() 
{
  string sentence = "It's really nice to learn programming";
  string word = "programming";

  cout << sentence.find("It's") << endl;
  cout << sentence.find(word) << endl;
  cout << sentence.length() << endl;
  cout << sentence.substr(5, 37) << endl;
  cout << sentence.replace(25, 14, " Coding") << endl;

  // check if string word is empty

  bool isEmpty;
  isEmpty = word.empty();

  // true(1) false(0)
  if (isEmpty == 1) {
    cout << "True, the string is empty" << endl;
  }
  else {
    cout << "False, the string is not empty" << endl;
  }

  Factorial::getFactorial();

  return 0;

}
