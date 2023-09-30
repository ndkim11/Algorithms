#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[101];
    char ch;
    char * p;
    cin >> str;
    int count;

    for(ch = 'a'; ch <= 'z'; ch++){
        count = 0;
        for(p = str; p < str + strlen(str); p++){
            if(*p == ch){
                cout << p - str << ' ';
                count++;
                break;
            }
        }
        if(count == 0) cout << -1 << ' ';
    }
}