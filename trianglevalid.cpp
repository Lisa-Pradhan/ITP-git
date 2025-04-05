#include <iostream>
using namespace std;

int main()
{
    int ang1,ang2,ang3;
    cout << "Enter three angles of a triangle : " ;
    cin >> ang1 >> ang2 >> ang3;
    if (ang1 + ang2 + ang3 == 180)
     {
        cout << "Triangle is valid"  << endl;
     }
    else 
     {
        cout << "Triangle is not valid" << endl;
     }
  return 0;
}