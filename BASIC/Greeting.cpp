#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name;
  cout << "Who are you?: ";
  cin >> name;
  string greeting = "Hello, " + name;
  if (name == "Luis")
  {
    greeting += ", I know you already";
  }
  cout << endl << greeting << endl;
  int l = greeting.length();
  cout << "\"" + greeting + "\" is " << l << " characters long" << endl;
  auto space = greeting.find(" ");
  string beginning = greeting.substr(space + 1);
  cout << beginning << endl;
  if (beginning == name){
    cout << "New person" << endl;
  }
}
