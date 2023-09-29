#include <iostream>
#include <string>

using namespace std;

int main(){
    int N, count = 0;
    string corpus;
    cin >> N;

    for(int i = 666; ;i++){
        corpus = to_string(i);
        if(corpus.find("666") != -1){ //666을 발견하면?
            count++;
            if(count == N){
                cout << corpus;
                break;
            }
        }
    }
    return 0;
}