#include <iostream>

using namespace std;


  int fibonacciSequence (int i)
  {
    if (i <= 0)
      {
	return i; //A value to show that the program is not working.
      }
    if (i <= 2)
      {
	return 1;
      }
    else
      {
	int j = fibonacciSequence (i - 1);
	int k = fibonacciSequence (i - 2);
	return (j + k);
      }
}

int main(void)
  {
    int i = 0;
    int j = fibonacciSequence (i);
    std::cout << j << std::endl;
    
    i = 1;
    j = fibonacciSequence (i);
    std::cout << j << std::endl;
    
    i = 2;
    j = fibonacciSequence (i);
    std::cout << j << std::endl;
    
    i = 3;
    j = fibonacciSequence (i);
    std::cout << j << std::endl;
    
    i = 5;
    j = fibonacciSequence (i);
    std::cout << j << std::endl;
    
    i = 8;
    j = fibonacciSequence (i);
    std::cout << j << std::endl;
    
    i = -1;
    j = fibonacciSequence (i);
    std::cout << j << std::endl;
    
    i = 10;
    j = fibonacciSequence (i);
    std::cout << j << std::endl;

    return 0;
  };