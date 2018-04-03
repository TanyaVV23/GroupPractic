#include <iostream>
using namespace std;
int main()
{
    double a,x = 0,y,res;
    cout<<"Enter start sum:"<<endl;
    cin>>a;
    cout<<"Enter desirable:"<<endl;
    cin>>res;
    cout<<"Enter precent:"<<endl;
    cin>>y;

    for (int i=1; res > a; i++)
    {
        res -= (res * (y/100));
        x++;
    }
    cout << "Time = " << res << endl;
    return 0;
}
