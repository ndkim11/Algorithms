#include <iostream>
#include <cstring>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int arr[N][N];
    int sum[N+1][N+1];
    memset(sum, 0, sizeof(sum));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 1; i < N+1; i++){
        for(int j = 1; j < N+1; j++){
            sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + arr[i-1][j-1];
        }
    }

    // for(auto &row : sum){
    //     for(int val : row){
    //         cout << val << ' ';
    //     }
    //     cout << endl;
    // }

    for(int i = 0; i < M; i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int result = sum[x2][y2] - sum[x2][y1-1] - sum[x1-1][y2] + sum[x1-1][y1-1];
        cout << result << '\n';
    }
}