#include <iostream>

using namespace std;

int sumOfDigits(int n) {
    if (n>=0 and n<=9) return n;
    return sumOfDigits(n/10) + (n%10);
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int sum = sumOfDigits(num);
    cout << "sum: " << sum << endl;
}