#include<iostream>
using namespace std;

class PriorityQueue{
    int arr[10];
    int n;

    PriorityQueue(){
        n = 10;
    }


    void push(int data){
        if(n<0){
            return;
        }else{
            arr[n] = data;
            n--;
        }
    }

    void pop(){
        if(n<0){
            return;
        }else{
            int max = arr[0];
            int size = sizeof(arr)/sizeof(arr[0]);

            for (int i = 0; i < size; i++)
            {
                if(arr[i]>max){
                    max = arr[i];
                }
            }
            
        }
    }
};





int main(){
    return 0;
}