#include<iostream>
#include<vector>
using namespace std;
void change(int a[]) // here we can't give size , without size 1D array change the value 
{
    a[0]=100;  // a[] is an array
    
}

 // void change2D(int arr[][])  // change fun error
// here we can't give size and then 2D array can't change the value 
// without giving size in 2D array value can't be changed

// void change2D(int arr[3][])  // row no.3 error in 2D array

// 2D array me hm jb fun me pass karte h to row no. and col.no. dena necessary h 

 //void change2D(int arr[][3]) // column no.3 right in 2D array
 // in 2d array column no. is must.

 void change2D(int arr[3][3]) // right/true becoz in 2D array we give size
 // when give size than value changed in 2D array
{
    arr[0][0]=1000;
}


 int main()
 {
    int a[3]={1,2,3}; // 1D array size = 3
    cout<<a[0]<<endl;
    change(a);
    cout<<a[0]<<endl; //yes this is change 



   // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}}; // 2D array,so size same dena hoga 3*3 
    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}}; //also write row no. missing but right
    cout<<arr[0][0]<<endl;
    change2D(arr);
    cout<<arr[0][0]<<endl;
 }
