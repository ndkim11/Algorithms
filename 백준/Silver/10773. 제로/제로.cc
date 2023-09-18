#include <iostream>
#include <vector>
using namespace std;

int main(){
    int K, sum = 0;
    cin >> K;
    vector<int> history; 

    for(int i = 0; i < K; i++){
        int temp;
        cin >> temp;
        if(temp == 0){
            sum -= history.back();
            history.pop_back();
        }
        else{
            sum += temp;
            history.push_back(temp);
        }
    }

    cout << sum;
}