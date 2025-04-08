#include<iostream>

#include<vector>

using namespace std;

int main(){

    vector<string> fruits = {"apple","mango","banana"};
    fruits.pop_back();

    for (string fruit: fruits)
    {
        cout << fruit << " ";
    }
    
    vector<int> marks = { 68, 98, 67, 88, 94};
marks.pop_back();// remove element at last
  for (int mark : marks)
    {
        cout << mark << " ";
    }

}