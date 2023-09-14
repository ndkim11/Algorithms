#include <iostream>
#include <string>
using namespace std;

int main(){
    char s1[101];
    cin >> s1;
    
    //c=, c-, dz=, d-, lj, nj, s=, z=
    //s1[0] = '\0'
    int count = 0, ind = 0;
    while(s1[ind] != '\0'){
        if(s1[ind]== 'c'){
            if(s1[ind+1] == '=' || s1[ind+1] == '-'){
                count++;
                ind += 2;
                continue;
            }
        }

        if(s1[ind] == 'd'){
            if(s1[ind+1] == 'z' && s1[ind+2] == '='){
                count++;
                ind += 3;
                continue;
            }

            if(s1[ind+1] == '-'){
                count++;
                ind += 2;
                continue;
            }
        }

        if((s1[ind] == 'l' || s1[ind] == 'n') && s1[ind+1] == 'j'){
            count++;
            ind += 2;
            continue;            
        }     
            
        if((s1[ind] == 's' || s1[ind] == 'z') && s1[ind+1] == '='){
            count++;
            ind += 2;
            continue;            
        }        
        
        count++;
        ind++;
        
    }
    cout<< count;
}