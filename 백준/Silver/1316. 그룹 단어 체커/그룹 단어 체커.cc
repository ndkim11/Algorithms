#include <iostream>
#include <set>
using namespace std;

int main(){
    int N, success = 0;
    cin >> N;
    //char arr[N][101];

    for(int i = 0; i < N; i++){
        char arr[101];
        set<char> collection;
        int j = 0, count = 0;
        cin >> arr;
        while(arr[j] != '\0'){
            if(arr[j]!= arr[j+1]){
                count++;
                if(!collection.count(arr[j]))
                    collection.insert(arr[j]);
                else
                    break;
            }
            j++;
        }

        if(arr[j] == '\0')
            success++;
    }
    cout << success;
}