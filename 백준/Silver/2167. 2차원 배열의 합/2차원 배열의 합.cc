#include <iostream>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    int arr[301][301] = {0};
    int sum[301][301] = {0};

    for(int i = 1; i < N+1; i++){
        for(int j = 1; j < M+1; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 1; i < N+1; i++){
        for(int j = 1; j < M+1; j++){
            sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + arr[i][j];
        }
    }

    int K; cin >> K;
    for(int l = 0; l < K; l++){
        int i,j,x,y;
        cin >> i >> j >> x >> y;
        cout << (sum[x][y]- sum[i-1][y] - sum[x][j-1] + sum[i-1][j-1]) << '\n';
    }
}