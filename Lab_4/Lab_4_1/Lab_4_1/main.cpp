
#include <iostream>
#include <cmath>
using namespace std;
float power(float num, float n) {
    return pow(num, n);
}

int main(int argc, const char * argv[]) {
    float numb, power1;
    
    cout << "Enter number" << endl;
    cin >> numb;
    cout << "Enter power" << endl;
    cin >> power1;
    cout << "Number " << numb << " in " << power1 << " power = " << power(numb, power1) << endl;
    
    return 0;
}
