#include <ctime>
#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  float* Arr1 = new float[n];
  cout << "\nEnter the array elements:\n\n";
  for (int i = 0; i < n; ++i) {
    cin >> Arr1[i];
  }
  int min_index = 0;
  float min = Arr1[0];
  for (int i = 1; i < n; ++i) {
    if (fabs(Arr1[i]) < fabs(min)) {
      min = Arr1[i];
      min_index = i + 1;
    }
  }
  cout << "\nThe index of the element: " << min_index << "\n";
  float z = 0;
  for (int i = 0; i < n; ++i) {
    if (Arr1[i] < 0) {
      for (int i2 = i + 1; i2 < n; ++i2) {
        z = z + Arr1[i2];
      }
      cout << "\nSum of elements after the first negative: " << z << "\n";
      break;
    }
  }
  return 0;
}