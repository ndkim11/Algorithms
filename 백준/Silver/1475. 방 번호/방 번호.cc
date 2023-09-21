#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int room_num;
    cin >> room_num;
    int digits[9] = {0};
    while(room_num > 0){
        switch (room_num%10)//1의 자리 숫자 0~8
        {
        case 9:
            digits[6]++;
            break;
        
        default:
            digits[room_num%10]++;
            break;
        }
        room_num /= 10;
    }
    digits[6] = ceil((float)digits[6]/2);
    int max = 0;
    for(auto x: digits){
        if(max < x){
            max = x;
        }
    }
    cout << max;
}