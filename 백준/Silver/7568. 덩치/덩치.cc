#include <iostream>
using namespace std;

int main(){
    int N; 
    cin >> N;
    int arr[N][2], rank[N];

    for(int i = 0; i < N; i++){
        cin >> arr[i][0] >> arr[i][1];
        rank[i] = 1;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){    
            if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
                rank[i]++;
        }
    }

    for(auto val : rank)
        cout << val << ' ';
}