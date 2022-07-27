// Vector STL syntax and usage
#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {1, 2, 3, 4, 5}; // Initialization ,(int) can be swapped for other data types

  vector<vector<int>> twod_v; // 2D Vector (works same as 2D array)

  auto start_iterator = v.begin(); // returns an iterator to the first element of the vector

  auto end_iterator = v.end(); // returns an iterator to the element that follows the last element

  v.insert(start_iterator, 4); // inserts value 4 at the head (start) of the vector

  v.insert(start_iterator + 2, 4); // inserts value 4 at index 2

  v.push_back(4); // inserts value 4 at end of vector

  v.erase(v.begin()); // removes head (start) of vector

  v.erase(v.begin() + 3); // removes element at index 3

  v.pop_back(); // removes element at tail (end) of vector

  v.clear(); // removes all elements in vector

  bool flag = v.empty(); // returns bool true if vector is empty and false if not

  return 0;
}
