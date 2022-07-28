// Range based for loop syntax and usage

#include <bits/stdc++.h>
using namespace std;

int main()
{
  // SYNTAX: for(range declaration: range expression) {loop statement}
  // range declaration :variable whose type is the same as the element in the sequence of the range expression
  // use with the (auto) data type declaration
  // range expresssion : expression that reperesents a suitable sequence (string/array/vector etc...)

  vector<int> v = {2, 3, 4, 6, 8};
  for (auto i : v)
  {
    cout << i << " "; // here (i) is an integer
  }

  string s = "Test";

  return 0;
}