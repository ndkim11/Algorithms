#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> visit;
    queue<int> que;

    for(int i=1; i < N+1; i++){
        que.push(i);
    }

    while(!que.empty()){//while que is not empty
        for(int i = 0; i < K-1; i++){//k-1 개의 원소 큐의 뒷편으로 보내줌
            que.push(que.front());
            que.pop();
        }
        visit.push_back(que.front());
        que.pop();
    }

    cout << "<";
    for(int i = 0; i < N-1; i++){
        cout << visit[i] << ", ";
    }
    cout << visit[N-1] << '>';
}