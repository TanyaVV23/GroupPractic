#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_CTYPE, "ukr");
    double value1, C, F;
    cout<<"Введіть 1, щоб перевести Целісій у Фарангейт. Введіть 2 щоби перевести Фарангейт у Цельсій"<<endl;
    cin>>value1;
    if(value1==1)
    {
        cout<<"Введіть Фаренгейт щоб перевести у Цельсій"<<endl;
        cin>>F;
        C=(float)5/9*(F-32);
        cout<<"Цельсій = "<<C<<endl;
    }
    
    else if(value1==2)
    {
        cout<<"Введіть Цельсій щоб перевести у Фаренгейт"<<endl;
        cin>>C;
        F=(float)5/9*(C+32);
        cout<<"Фаренгейт = "<<F<<endl;
    }
    else{
        cout<<"Eror 404"<<endl;
    }
    
    system("Pause");
    return 0;
}
