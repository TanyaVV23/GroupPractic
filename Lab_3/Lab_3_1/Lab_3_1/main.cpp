#include <iostream>

using namespace std;
int main()
{
    double a,x,y,res,res1;
    cout<< "Enter start sum-"<<endl;
    cin >> a;
    cout<< "Enter time-"<<endl;
    cin >> x;
    cout << "Enter percent-"<<endl;
    cin >> y;
    res = a + ( a * (y/100)) * x;
    cout << "Result " << res << endl;
    for(int i=1; i<=x; i++)
    {
        res1 = a + ( a * (y/100)) * i;
        cout << "Result "<< i <<"  " <<res1<<endl;
    }
    system("pause");
    return 0;
}
