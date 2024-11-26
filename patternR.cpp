#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 5; j++) {
      if (j == 0 && i != 0 || i == 0 && j != 0 && j != 4 || j == 4 && i != 0 && i != 3 || i == 3 && j != 4) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << std::endl;
  }
  return 0;
}