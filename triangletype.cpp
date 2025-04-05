#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter three sides of the triangle : " ;
    cin >> a >> b >> c ;
    if ((a+b>c) && (a+c>b) && (b+c>a))
    {
        if(a==b && b==c)
        {
            cout << "Triangle is Equilateral " << endl;
        }
        else if(a==b || b==c || c==a)
        {
            cout << "Triangle is Isosceles " << endl;
        }
        else
        {
            cout << "Triangle is a Scalene " << endl; 
        }
    }
    return 0;
}