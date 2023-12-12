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







ChatGPT
Sure, let's go through the program execution for the number 153.

User Input: The program starts, and it prompts the user to enter a number. In this case, let's use 153.

Initialization: n is set to 153, sum is set to 0, and original is also set to 153.

While Loop Execution:

First Iteration:
lastdigit is 153 % 10, which equals 3.
sum is updated to 3^3 = 27.
n becomes 153 / 10 = 15 (due to integer division).
Second Iteration:
lastdigit is 15 % 10, which equals 5.
sum is updated to 27 + 5^3 = 27 + 125 = 152.
n becomes 15 / 10 = 1.
Third Iteration:
lastdigit is 1 % 10, which equals 1.
sum is updated to 152 + 1^3 = 152 + 1 = 153.
n becomes 1 / 10 = 0.
Check for Armstrong Number:

The while loop ends as n becomes 0.
It compares the final value of sum (which is 153) with the original number (also 153).
As they are equal, the program prints "This number is Armstrong".