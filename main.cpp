#include <iostream>
using namespace std;

void print(int(&ar)[10]) {
  for (int i = 0; (i < 10); ++i) {
    cout << ar[i] << " ";
  }
  cout << endl;
}
void reverse_1(int (&ar)[10]) {
  int j = 10 - 1;
  for (int i = 0; (i < (10 / 2)); ++i) {
    swap(ar[i], ar[j]);
    --j;
  }
}
void reverse_2(int *arr, int size) {
  int j = size - 1;
  for (int i = 0; (i < (size / 2)); ++i) {
    swap(arr[i], arr[j]);
    --j;
  }
}
int main() {
  const int N = 10;
  int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  print(a);
  reverse_1(a);
  print(a);
  reverse_2(a,N);
  print(a);
}
