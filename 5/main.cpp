#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  const int n = 10, m = 10;
  int Arr[n][m];
  srand(time(NULL));
  int a, b;
  char ch;
  cout << "Enter the interval boundaries (a,b): ";
  cin >> a >> ch >> b;
  cout << "\nCreated array:\n\n";
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      Arr[i][j] = a + rand() % (b - a + 1);
      cout << setw(6) << Arr[i][j] << " ";
    }
    cout << "\n";
  }
  cout << "\n";
  for (int i = 0; i < n; ++i) {
    int s = 0;
    for (int j = 0; j < m; ++j) {
      s = s + Arr[i][j];
    }
    cout << "Sum of elements in row #" << i << " equal to: " << s << "\n";
  }
  return 0;
}