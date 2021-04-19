#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand(time(NULL));
  const int n = 12;
  int a = -7, b = 7;
  float Arr1[n], Arr2[n];
  cout << "Array with numbers from " << a << " to " << b << " :\n\n";
  for (int i = 0; i < n; i++) {
    Arr1[i] = a + rand() % (b - a + 1);
    cout << Arr1[i] << "  ";
  }
  int h = 0;
  for (int i = 0; i < n; i++) {
    if (Arr1[i] > 0) {
      Arr2[h] = Arr1[i];
      ++h;
    }
  }
  float z = Arr2[0];
  for (int i = 0; i < h; i++) {
    if (Arr2[i] < z) z = Arr2[i];
  }
  cout << "\n\nThe minimum positive element of the array: " << z << "\n";
  cout << "\nModified array (first elements equal to zero, and then all the "
          "others):\n\n";
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (Arr1[i] == 0) {
      Arr2[j] = Arr1[i];
      ++j;
    }
  }
  for (int i = 0; i < n; i++) {
    if (Arr1[i] != 0) {
      Arr2[j] = Arr1[i];
      ++j;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << Arr2[i] << "  ";
  }
  cout << "\n";
  return 0;
}