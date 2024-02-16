#include <iostream>
#include <string>
using namespace std;
// use fnc to perform (i) insert string in a string from given position
//                   (ii)delete n cahracters from given position in a string

void insrt_str(string &mn_str, string &s_str, int n)
{
  if (n < 0 || n > mn_str.length())
  {
    cout << "Invalid inserting position";
    return;
  }
  else
    mn_str.insert(n, " " + s_str);
}

void del_str(string &str, int no_char, int pos)
{
  str.erase(pos, no_char);
}

int main()
{
  int select;
  string main_str, sub_str;
  int pos_i;
  string str_d;
  int pos_d, n_d;
  cout << "Enter a string\n";
  getline(cin, main_str);

  cout << "what do you want to do?\nEnter 1 for Insertion operation and Enter 2 for Deletion" << endl;
  cin >> select;
  switch (select)
  {
  case 1:
    cout << "Enter a substring that you want to insert: ";
    cin.ignore();
    getline(cin, sub_str);
    cout << "Enter the position at which string is inserted: ";
    cin >> pos_i;
    insrt_str(main_str, sub_str, pos_i);
    cout << main_str << endl;
    break;
  case 2:
    // cout << "Enter the string that is to be deleted \n";
    // cin.ignore();
    // getline(cin, str_d);
    cout << "Enter the position and number of characters to be deleted: ";
    cin >> pos_d >> n_d;
    del_str(main_str, n_d, pos_d);
    cout << main_str;
    break;
  }
}