#include <iostream>
using namespace std;

int arr[8];
int N;

void recur(int digit, int limit);

int main(){
    int digits;
    cin >> N >> digits;
    recur(0, digits);
}

void recur(int digit, int limit){
    if(digit == limit){
        for(int i = 1; i < limit+1; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 1; i < N+1; i++){
        arr[digit+1] = i;
        recur(digit + 1, limit);
        //arr[digit+1] = 0;
    }
}