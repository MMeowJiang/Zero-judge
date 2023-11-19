#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
  string s;
  cin >> s;
  stack<char> st;

  for (int i = 0; i < s.size() / 2; i++)
  {
    st.push(s[i]);
  }

  int is_odd = (s.size() % 2);

  for (int i = s.size() / 2 + is_odd; i < s.size(); i++)
  {
    if (st.top() != s[i])
    {
      cout << "no\n";
      return 0;
    }

    st.pop();
  }

  cout << "yes\n";
}