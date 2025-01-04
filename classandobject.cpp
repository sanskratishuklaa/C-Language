#include <iostream>
#include <string.h>
using namespace std;
class team
{

public:
    char name[15];
    int age;
    int jourseyno;
};

int main()
{

    team team1;
   
   strcpy(team1.name,"sanskriti\n");

  cout << team1.name;

    team1.age = 20;

   cout<<team1.age,"20";

   team1.jourseyno= 12;

   cout<<team1.jourseyno,"12";
    }