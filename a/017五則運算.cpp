#include <iostream>
#include <stack>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
  string s;
  string c;

  while (getline(cin, s))
  {
    stack<string> st;
    vector<string> ans;
    stringstream ss;
    ss << s;

    while (ss >> c)
    {
      if (c == ")")
      {
        while (st.top() != "(")
        {
          ans.push_back(st.top());
          st.pop();
        }

        st.pop();
      }
      else if (c == "(")
      {
        st.push("(");
      }
      else if (
          c == "*" ||
          c == "/" ||
          c == "%")
      {
        while (
            !st.empty() &&
            (st.top() == "*" ||
             st.top() == "/" ||
             st.top() == "%"))
        {
          ans.push_back(st.top());
          st.pop();
        }

        st.push(c);
      }
      else if (
          c == "+" ||
          c == "-")
      {
        while (
            !st.empty() &&
            (st.top() == "*" ||
             st.top() == "/" ||
             st.top() == "+" ||
             st.top() == "-" ||
             st.top() == "%"))
        {
          ans.push_back(st.top());
          st.pop();
        }

        st.push(c);
      }
      else
      {
        ans.push_back(c);
      }
    }

    while (!st.empty())
    {
      ans.push_back(st.top());
      st.pop();
    }

    stack<int> st2;

    for (string x : ans)
    {
      if (
          x == "+" ||
          x == "-" ||
          x == "*" ||
          x == "/" ||
          x == "%")
      {
        int sc = st2.top();
        st2.pop();
        int ft = st2.top();
        st2.pop();

        if (x == "+")
        {
          st2.push(ft + sc);
        }
        else if (x == "-")
        {
          st2.push(ft - sc);
        }
        else if (x == "*")
        {
          st2.push(ft * sc);
        }
        else if (x == "/")
        {
          st2.push(ft / sc);
        }
        else if (x == "%")
        {
          st2.push(ft % sc);
        }
      }
      else
      {
        st2.push(stoi(x));
      }
    }

    cout << st2.top() << endl;
  }
}