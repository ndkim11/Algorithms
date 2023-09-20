#include <iostream>

using namespace std;

int main(){
    int N, max_score = 0, sum = 0;
    cin >> N;
    int score[N];
    for(int i = 0; i < N; i++){
        cin >> score[i];
        if(score[i] > max_score)
            max_score = score[i];
        sum += score[i];
    }

    float aver = (float)(sum * 100)/(N * max_score);
    cout << aver;
}