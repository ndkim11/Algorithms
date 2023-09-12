#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int arr[N];
    int prefix[N+1];

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    prefix[0] = 0;
    int max_ = arr[0];
    for(int i = 0; i < N; i++){
        prefix[i+1] = max(prefix[i]+ arr[i], arr[i]);
        if(prefix[i+1] > max_)
            max_ = prefix[i+1];
    }
    cout << max_;
}