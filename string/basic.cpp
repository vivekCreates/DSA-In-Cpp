#include<iostream>
#include<string.h>
using namespace std;

int main(){
    //character array
    char arr[] = {'v','i','v','e','k'};

    cout << "arr: " << arr << endl;
    cout << "length: " << strlen(arr) << endl;

    for (int i = 0; arr[i]!= '\0'; i++)
    {
       cout << arr[i]<< " ";
    }
    cout << endl;

    //string

    string lang = "python";

    cout << "lang: " << lang << endl;

    for (int i = 0; i < lang.length(); i++)
    {
        cout << lang[i] << " ";
    }
    cout << endl;

}
