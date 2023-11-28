#include <iostream>
#include <sstream>

using namespace std;

int main()
{
  int i;
  string str;
  string ans;
  string op;
  string operand;
  stringstream ss;

  while (getline(cin, str))
  {
    ss.str("");
    ss.clear();
    ss << str;
    ss >> ans;
    cout << ans;

    while (ss >> op >> operand)
    {
      if (op == "and")
      {
        cout << "&&" << operand;

        for (i = 0; i < ans.size(); i++)
        {
          if (ans[i] == '0' || operand[i] == '0')
          {
            ans[i] = '0';
          }
        }
      }
      else
      {
        cout << "||" << operand;

        for (i = 0; i < ans.size(); i++)
        {
          if (ans[i] == '1' || operand[i] == '1')
          {
            ans[i] = '1';
          }
        }
      }
    }

    cout << " = " << ans << "\n";
  }
  return 0;
}