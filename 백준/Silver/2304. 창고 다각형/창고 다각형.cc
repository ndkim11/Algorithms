#include <iostream>
#include <stdlib.h>
using namespace std;

int compareByFirstColumn(const void * a, const void *b){
    int * rowA = (int * ) a;
    int * rowB = (int * ) b;
    return rowA[0] - rowB[0]; 
}

int main(){
    int N; //기둥의 개수
    cin >> N;

    int arr[N][2];
    for(int i = 0; i < N; i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    qsort(arr, N, sizeof(arr[0]), compareByFirstColumn);
    
    // for(auto &row : arr){
    //     for(int val : row){
    //         cout << val << ' ';
    //     }
    // }

    int max_ind = 0, max_height = 0;
    for(int i = 0; i < N; i++){
        if(arr[i][1] > max_height){
            max_height = arr[i][1];
            max_ind = i;
        }
    }
    
    //앞부분 ~ 최고높이까지 더하기
    int front = 0, sum = max_height;
    for(int i = 1; i <= max_ind; i++){
        if(front < arr[i-1][1]){
            front = arr[i-1][1];
        }
        sum += front * (arr[i][0] - arr[i-1][0]);    
    }

    //최고높이 ~ 끝부분 더하기
    int rear = 0;
    for(int i = N-1; i > max_ind; i--){
        if(rear < arr[i][1]){
            rear = arr[i][1];
        }
        sum += rear * (arr[i][0] - arr[i-1][0]);
    }

    cout << sum;
}