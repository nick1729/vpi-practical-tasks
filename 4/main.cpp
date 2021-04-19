#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand(time(NULL));
  const int n = 16;
  int a = -10, b = 10;
  float Arr1[n];
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
  cout << "\nNumber of the maximum array element: " << imax << "\n";
  float s = 0;
  for (int i = 0; i < imax; i++) {
    if (Arr1[i] > 0) s = s + Arr1[i];
  }
  cout << "\nSum of elements for the 1st task: " << s << "\n";
  for (int i = 0; i < n; i++) {
    if (Arr1[i] < 0) {
      Arr1[i] = Arr1[i] * Arr1[i];
    }
  }
  cout << "\nModified array for the 2nd task: " << "\n\n";
  for (int i = 0; i < n; i++) {
    cout << Arr1[i] << "  ";
  }
  cout << "\n";
  return 0;
}