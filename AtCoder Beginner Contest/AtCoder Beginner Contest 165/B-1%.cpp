/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author
 */

#include <iostream>
#include <fstream>

#include <bits/stdc++.h>


using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

class B1 {
public:
void solve(std::istream& cin, std::ostream& cout) {
    ll a;
    ll i=0;
    ll ans = 0;
    //string ans = "";
    cin >> a;
    ll mon = 100;
    while(mon < a){
        i++;
        mon *= 1.01;
//        if(mon >= a){
//            ans = i;
//            break;
//        }
    }
    ans = i;
    cout << ans << endl;
}
};


int main() {
	B1 solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}