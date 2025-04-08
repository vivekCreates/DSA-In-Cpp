#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks = {68, 98, 67, 88, 94};
    marks.insert(marks.begin()+ 2, 50);

    for (int mark : marks)
    {
        cout << mark << " ";
    }
}