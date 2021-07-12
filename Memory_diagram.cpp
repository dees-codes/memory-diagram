// a program that declares variables and allocates memory to match
// the memory diagram
// Deepson Shrestha *** August 29 2019

#include <iostream>
using namespace std;

/**
 * change the formal parameter values and local variable value and 
 * display them
 * @param a the formal parameter for copy of i
 * @param b the formal parameter which references j 
 */
int foo (int a, int& b);

int main()
{
  int i {12};
  int j {41};
  int* k {new int{26}};
  int& m {*k};

  foo (i, j);          //Call to function foo

  *k *= 2;
  m *= 3;

  cout << "i: " << i << endl;
  cout << "j: " << j << endl;
  cout << "k: " << *k << endl;
  cout << "m: " << m << endl;
  delete k;	       //Deallocate memory occupied by k
}

int foo (int a, int& b)
{
  int* c {new int{15}};
  a = 0;
  b--;
  *c += 2;
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  cout << "c: " << *c << endl;
  delete c;            //Deallocate memory occupied by c
  return 0;
}
  
