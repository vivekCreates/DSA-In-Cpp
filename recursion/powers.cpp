#include<iostream>

using namespace std;

int calculatePowers(int base, int power){
    if (power==0) return 1;
    int  half = calculatePowers(base,power/2);
    int res = power % 2 == 0 ? half * half : half * half * base; 
    return res;
}
int main(){

    int base,power;

    cout << "Enter the base: ";
    cin>> base;

    cout << "Enter the power: ";
    cin>> power;

    int result = calculatePowers(base,power);

    cout << "result: " << result << endl;
}