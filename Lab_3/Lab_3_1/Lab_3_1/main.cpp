#include <iostream>

using namespace std;
int main()
{
    double x,y,res;
    cout<< "Enter start sum-"<<endl;
    cin >> res;
    cout<< "Enter time-"<<endl;
    cin >> x;
    cout << "Enter percent-"<<endl;
    cin >> y;
    
    
    for (int i=1; i<=x; i++)
    {
        res += (res * (y/100));
   
    }
    cout << "Ultimate sum = " << res <<endl ;
    return 0;
}
