#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector<int> &arr,int noOfStudents,int maxAllowedPages){
    int pages = 0;
    int students = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            students++;
            pages = arr[i];
        }
    }

    return students > noOfStudents ? false : true;
}

int allocatesBooks(vector<int> &arr, int students){
    if (students>arr.size())
    {
        return -1;
    }
        int start = arr[0];
        int end;
        int ans;
        for (int i = 0; i < arr.size(); i++){
            if (arr[i] > start){
                start = arr[i];
            }
            end += arr[i];
        }
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if(isValid(arr,students,mid)){
                ans = mid;
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        return ans;
    }


int main()
{
    vector<int> arr = {12, 34, 67, 90};

    int noOfStudents = 2;

    int noOfPages = allocatesBooks(arr,noOfStudents);
    cout << "ans: " << noOfPages << endl;
    return 0;
}