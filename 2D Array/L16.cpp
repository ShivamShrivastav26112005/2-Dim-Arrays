/*

include <iostream>
#include <vector>
using namespace std;
int main()
// {
//     // vector <int> v; // 1D vector
//     vector<vector<int>> v; // 2D vector -> vector of vector
//     // then we make three vector v1,v2,v3.
//     vector<int> v1; // inside v1 we want to fill 1,2,3
//     // then we use push_back operator.
//     // also we give size after v1 like this vector<int>v1(3);
//     v1.push_back(1); // index - 0
//     v1.push_back(2); // index - 1
//     v1.push_back(3); // index - 2

//     vector<int> v2;  // fill 4,5
//     v2.push_back(4); // index - 0
//     v2.push_back(5); // index - 1

//     vector<int> v3;  // fill 6,7,8,9,10
//     v3.push_back(6); // index - 0
//     v3.push_back(7); // index - 1
//     v3.push_back(8); // index - 2
//     v3.push_back(9); // index - 3
//     v3.push_back(10); //index - 10

//     // print to check the value fill or not
//     cout << v3[3]; //9
// }

{
    {

        // vector<int> v1;
        // v1.push_back(1);
        // v1.push_back(2);
        // v1.push_back(3);

        // OR also write like this 

        vector<int> v1(3); // in that case we give size
        v1[0] = 1;
        v1[1] = 2;
        v1[2] = 3;

        vector<int> v2;
        v2.push_back(4);
        v2.push_back(5);

        vector<int> v3;
        v3.push_back(6);
        v3.push_back(7);
        v3.push_back(8);
        v3.push_back(9);
        v3.push_back(10);

        // cout << v3[3];  // 9

        vector<vector<int>> v; // 2D vector name v
        //              0 index   1 index   2 index
        // elements { {1,2,3} , {4,5} , {6,7,8,9,10} }
        // v.push_back(5); //error becoz we can't push an integer in 2D vector
        //  we push a whole vector

        v.push_back(v1);
        v.push_back(v2);
        v.push_back(v3);

        // elements print
        cout << v[0][2] << endl; // 3 // [row/index][column]
        cout << v[2][3] << endl; // 9
        cout << v[0][3] << endl; // invalid R-0 out of bound index ke
        cout << v[3][5] << endl; // invalid does not exits R-0
        cout << v[2][5];         // invalid does not exits R-8423 garbage value
    }
}

*/


