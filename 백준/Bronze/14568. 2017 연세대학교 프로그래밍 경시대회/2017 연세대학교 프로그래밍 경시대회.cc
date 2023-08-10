#include <iostream>
using namespace std;

int main(){
    int a, b, c, N, count = 0;

    cin >> N;
    for(a=1;a<N;a++){
        for(b=1;b<N;b++){
            for(c=1;c<N;c++){
                if(a+b+c == N){
                    if(a >= b+2){
                        if(a!= 0 && b!= 0 && c!= 0){
                            if(c % 2 == 0){
                                count++;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << count << endl;
}