#include <iostream>
using namespace std;

int main()
{
  char str[5];
  cin >> str;
  int i = strlen(str);
  // 計算字元數量可以用 strlen
  while (i >= 0)
  {
    cout << str[i];
    i--;
  }
  cout << "\n";

  return 0;
}