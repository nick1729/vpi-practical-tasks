#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand(time(NULL));
  const int n = 16;
  int a = -10, b = 10;
  float Arr1[n], Arr2[n];
  cout << "Array with numbers from " << a << " to " << b << " :\n\n";
  for (int i = 0; i < n; i++) {
    Arr1[i] = a + rand() % (b - a + 1);
    cout << "Array element #" << i << ": " << Arr1[i] << " \n";
  }
  int imax = 0;
  float z = Arr1[0];
  for (int i = 0; i < n; i++) {
    if (Arr1[i] > z) {
      z = Arr1[i];
      imax = i;
    }
  }
  cout << "\n\nNumber of the maximum array element: " << imax << "\n";
  int h = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 != 0) {
      Arr2[h] = Arr1[i];
      ++h;
    }
  }
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      Arr2[h] = Arr1[i];
      ++h;
    }
  }
  cout << "\nChanged the array (first odd positions, and then all the rest):\n"
       << endl;
  for (int i = 0; i < n; i++) {
    cout << Arr2[i] << "  ";
  }
  cout << "\n";
  return 0;
}