/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

long Factorial(int no){
    long factorial=1;
    for(int i=no;i>=1;i--){
         factorial=factorial*i;

    }
    return factorial;
}

long nCr(int n, int r)
{
  long Factn = Factorial(n);
  long Factr = Factorial(r);
  long Factnr = Factorial(n-r);
  long ncr= Factn/(Factr * Factnr);
  return ncr;
  
}


int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  
}
