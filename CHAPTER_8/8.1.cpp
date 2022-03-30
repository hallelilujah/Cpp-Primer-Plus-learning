#include <iostream>
#include <string>
using namespace std;
void print(const string & a, int i = 0);
int count = 0;

int main()
{
  string str = "wish that i was bullet proof.";
  print(str);
  print(str, -1);
  print(str, 0);
  print(str, 1);
  return 0;
}

void print(const string & a, int num)
{
  count++;
  if (num == 0)
  {
    cout << a << endl;
  }
  else
  {
    for (int i = 0; i < count; i++)
    {
      cout << a << endl;
    }
  }
  cout << "Done.\n";
}
