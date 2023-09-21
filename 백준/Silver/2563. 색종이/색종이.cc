#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    bool visited[101][101] = {0};
    int area = 0;

    for(int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                if(visited[x+j][y+k]== (bool)0){
                    visited[x+j][y+k] = 1;
                    area++;
                }
            }
        }
    }
    cout << area;
    // for(auto &row : visited){
    //     for(bool val : row){
    //         cout <<val<<' ';
    //     }
    //     cout << '\n';
    // }
}