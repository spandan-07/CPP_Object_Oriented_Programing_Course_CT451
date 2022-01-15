/*q1_constant_qualifiers.cpp
 *
 * WAP using constant qualifiers
 *
 */

#include <iostream>

using namespace std;

#define PI 3.14159

int main(int argc, char const* argv[]) {
  const int a = 5;

  cout << "Constant a: " << a << endl;
  cout << "Another constant PI: " << PI << endl;

  return 0;
}
