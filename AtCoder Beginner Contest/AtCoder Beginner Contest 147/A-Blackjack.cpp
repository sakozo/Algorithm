#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b,c;
    cin >> a >>b>>c;
    int ans = a+b+c;
    if(ans >= 22){
      cout << "bust"<<endl;
    }else{
      cout << "win"<<endl;
    }
}