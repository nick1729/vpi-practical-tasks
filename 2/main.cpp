#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  const int n = 10, m = 7;
  int Arr[n][m];
  srand(time(NULL));
  int a, b;
  char ch;
  cout << "Enter the boundaries of the interval a, b: ";
  cin >> a >> ch >> b;
  cout << "\n\nCcreated array:\n\n";
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      Arr[i][j] = a + rand() % (b - a + 1);
      cout << setw(6) << Arr[i][j] << ' ';
    }
    cout << '\n';
  }
  cout << "\nThe multiplication of the odd columns:\n";
  int s = 1;
  for (int i = 0; i < m; ++i) {
    if (i % 2 == 0) {
      for (int j = 0; j < n; ++j) {
        s = s * Arr[i][j];
      }
      cout << s << ' ';
      s = 1;
    }
  }
  cout << "\n\nThe multiplication the 1st and last row:\n";
  int z = 1;
  for (int j = 0; j < m; ++j) {
    z = Arr[0][j] * Arr[n - 1][j];
    cout << z << ' ';
  }
  cout << "\n";
  return 0;
}