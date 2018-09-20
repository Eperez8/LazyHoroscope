//Author:Eric Perez
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
string first;

string last;



//get user input

std::cout << " What is your first name? " << first << endl;
std::cin >> first;
std::cout << " What is your last name? " << last << endl;
std::cin >> last;
cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"."<<" here is your fortune..."<<endl;

//tell fortune
cout<<"Your Lucky Number is "<<first.length()<<endl;

  return 0;
}
