#include <cstdlib>
#include <iostream>

using namespace std;
void move_rings(int n, int src, int dest, int other);

int main()
{
  int n = 3;  // Stack is 3 rings high
    
  move_rings(n, 1, 3, 2); // Move stack 1 to stack 3
  system("PAUSE");
  return 0;
}

void move_rings(int n, int src, int dest, int other) {
  if (n == 1) {
    cout << "Move from "<< src <<" to "<< dest << endl;
  } else {
    move_rings(n - 1, src, other, dest);
    cout << "Move from "<< src <<" to "<< dest << endl;
    move_rings(n - 1, other, dest, src);
  }
}
