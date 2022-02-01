#include <iostream>
using namespace std;

int main(){
    int w;
    cin >> w;
    int remain = w-2;
    if(remain % 2 == 0 && w>2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
