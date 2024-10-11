// 1st methods

// we have to print pascal triangle

// 1
// 11
// 121
// 1331
// 14641

// find using combination -:

#include <iostream>
using namespace std;

// ncr = fact(n)/fact(r)*fact(n-1)
int fact(int x)
{
    int f = 1;
    for (int i = 2; i <= x; i++){
        f *= i;
    }
    return f;
}

int combination(int n, int r){
    int ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 0; i <= n; i++){ // for loop - row(i)
        for (int j = 0; j <= i; j++){ // for loop - column(j)
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
}
