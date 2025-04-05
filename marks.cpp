#include <iostream>
using namespace std;
int main()
{
    float marks[5],total = 0,avg,per;
    cout << "Enter marks for 5 subjects:";
    for(int i=0;i<5;i++)
    {
      cin >> marks[i];
      total += marks[i];
    }
    avg = total/5;
    per = (total/500)*100;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: "<< avg << endl;
    cout << "Percentaage: "<< per << "%" << endl;
    return 0;
}

