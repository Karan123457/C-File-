#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin >> n;

    int sum=0;
    int original=n;
    while(n>0) {
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
             n=n/10;
    }
    if(sum==original)
    {
        cout << "This number is Armstrong" << endl;
    }
    else
    {
        cout << "This is not a Armstrong number" << endl;
    }
    return 0;
}

//407
//153

Armstrong Number Check
