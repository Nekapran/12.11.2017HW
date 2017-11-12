# 12.11.2017HW
#include <iostream>

using namespace std;
int main()
{
 int i, a;
  cout << "Input massive length: ";
  cin >> i;
  int mas[i];
  for (int a = 0; a < i; a++)
    {
      cout << "[" << a + 1 << "]" << ": ";
      cin >> mas[a];
    }
  cout << "\nYour massive: ";
  for (int a = 0; a < i; ++a)
    {
      cout << mas[a] << " ";
    }
  cout << endl;
  return 0;
}

