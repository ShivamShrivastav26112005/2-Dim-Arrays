

#include <iostream>
#include <vector>
using namespace std;
// & for pass by reference
// otherwise it create new vector
void change2Dvector(vector<vector<int>> &v) // this is true infact we can't mention any size
// advantages 1- in 2D vector we can't need to mentioned any size
//  but in 2D array we must mention size otherwise code will not run
//  2- we find length of the vector
{
    v[0][1] = 100;
}

void lenght(vector<vector<int>> &v)
{
    cout << v.size();
}
// length = 3 (0,1,2)

int main()
{

    vector<int> v1;
    // size = 3
    v1.push_back(1);
    v1.push_back(2); // 0 index
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(4); // 1 index
    v2.push_back(5);

    vector<int> v3;
    v3.push_back(6);
    v3.push_back(7); // 2 index
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);

    vector<vector<int>> v; //{{1,2,3}, {4,5}, {6,7,8,9,10}} // 2D vector
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout << v[0][1] << endl;

    change2Dvector(v);
    cout << v[0][1] << endl;
    lenght(v);

cout<<endl;

   // find size of the vector 
    cout << v[0].size() << " ";
    cout << v[1].size() << " ";
    cout << v[2].size() << " ";

//     output - 3 2 5 size 
//     becoz this {{1,2,3}, {4,5}, {6,7,8,9,10}}

}