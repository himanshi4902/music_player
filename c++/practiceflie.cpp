#include<iostream>
using namespace std;
int main(){
    int *p;
    static int s = 2;
    p = new int[5];
    for(int i =0; i<5; i++){
        p[i] = s;
        s++;
    cout<<p[i];
    delete []p;
    }
    return 0;
}