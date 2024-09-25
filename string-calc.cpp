#include <cassert>
#include <cctype>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int stringCalc(string);

int main()
{
  assert(stringCalc("1,4,6") == 11);
  cout << "Welcome to the string calculator!\nPlease enter your string of numbers, seperated by a comma or semicolon "
          "(e.x. \"1,2,4,1\"): ";
}


int stringCalc(string numbers)
{
  string tmpNum{};
  int total{0};
  int strLength{};
  strLength = numbers.length();

  for (int i = 0; i < strLength; i++)
  {
    if (isdigit(numbers[i]))
    {
      total += numbers[i] - 48;
    }
    else if (numbers[i] == ';' || numbers[i] == ',')
    {
      continue;
    }
    else
    {
      return -1;
    }
  }

  return total;
}
