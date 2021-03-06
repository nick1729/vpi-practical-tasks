#include <conio.h>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  const int n = 10;
  float Arr[n];
  srand(time(NULL));
  for (int i = 0; i < 10; i++) {
    Arr[i] = 0.01 * (rand() % 2000 - 1000);
  }
  cout << "Array with numbers from -10 to 10:\n\n";
  for (int i = 0; i < n; i++) {
    cout << Arr[i] << "  ";
  }
  for (int i = 1; i < n; i++) {
    float x = Arr[i];
    int j = i - 1;
    while (x < Arr[j] && j >= 0) {
      Arr[j + 1] = Arr[j];
      j--;
    }
    Arr[j + 1] = x;
  }
  cout << "\n\nThe array elements after sorting in ascending order:\n\n";
  for (int i = 0; i < n; i++) {
    cout << Arr[i] << " ";
  }
  float s = 0;
  for (int i = 0; i < n; i++) {
    if (Arr[i] < 0) {
      s = s + Arr[i];
    }
  }
  cout << "\n\nThe sum of negative elements: " << s << "\n";
  return 0;
}