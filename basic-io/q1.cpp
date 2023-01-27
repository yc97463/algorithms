#include <iostream>
using namespace std;

int main()
{
  int sum = 0, tmp, runt;
  cin >> runt;
  for (int i = 0; i < runt; i++)
  {
    cin >> tmp;
    sum += tmp;
  }
  cout << sum << "\n";
  return 0;
}