#include <iostream>

using namespace std;

int maxN(int a,int b){
    int temp=0;
    if(a>b) temp=a;
    else temp=b;

    return temp;
}

    int maxArray(int arr[5]){
    int temp = 0;
    for (size_t i = 0; i < 5; i++)
    {
        if(arr[i] > temp)
            temp = arr[i];
    }

    return temp;
}

int minArray(int arr[5]){
    int temp = arr[1];
    for (size_t i = 0; i <5; i++)
    {
        if(arr[i] < temp)
            temp = arr[i];
    }

    return temp;
}

bool isEven(int x){
    if (x % 2 == 0)
        return true;
    else
        return false;
}

bool isOdd(int x){
    if (x % 2 != 0)
        return true;
    else
        return false;
}

bool isFactor(int x, int y){
    if (x % y == 0)
        return true;
    else
        return false;
}

int sumEven(int arr[5]){
    int temp = 0;
    for (size_t i = 0; i <5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            temp += arr[i];
        }
    }

    return temp;
}

int sumOdd(int arr[5]){
    int temp = 0;
    for (size_t i = 0; i <5; i++)
    {
        if (arr[i] % 2 != 0)
        {
            temp += arr[i];
        }
    }

    return temp;
}

int main(){
    int arr[] {5,6,7,8,9};
   cout << sumOdd(arr);
    return 0;
}
