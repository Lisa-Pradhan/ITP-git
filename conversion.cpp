#include <iostream>
using namespace std;

int main()
{
  float cm,met,km;
  cout << "Enter length in centimeters : "; 
  cin >> cm;
  met = cm/100.0;
  km = cm/100000.0;
  cout << "Length in Meters : " << met << " m"<< endl;
  cout << "Length in Kilometers : " << km << " km" << endl;
  return 0;
}
