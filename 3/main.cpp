#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int max_element(int Arr[], int n) {
  int max = Arr[0];
  for (int i = 0; i < n; ++i) {
    if (Arr[i] > max) {
      max = Arr[i];
    }
  }
  return max;
}

int sum(int Arr[], int n) {
  int s = 0;
  for (int i = 0; i < n; ++i) {
    s = s + Arr[i];
  }
  return s;
}

int main() {
  srand(time(NULL));
  const int n = 20;
  int a = -100, b = 100;
  int Arr[n];
  cout << "Random array in the range from " << a << " to " << b << ":\n\n";
  for (int i = 0; i < n; ++i) {
    Arr[i] = a + rand() % (b - a + 1);
    cout << Arr[i] << ' ';
  }
  cout << "\n\nThe maximum positive element: " << max_element(Arr, n);
  cout << "\n\nSum of array elements: " << sum(Arr, n) << "\n";
  return 0;
}