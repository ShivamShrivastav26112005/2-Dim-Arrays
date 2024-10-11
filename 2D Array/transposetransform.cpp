/*

// you are given a matrix / 2D array of oder (n*n).
// you have to transform / modify this matrix into its transpose.


// it is done only for square matrix



#include <iostream>
using namespace std;
int main()
{
// square matrix-> no. of rows = no. of columns
  int m;
  cout << "Enter no. of rows/columns : " << endl;
  cin >> m;
  int arr[m][m];

  cout << "Enter array elements" << endl;
  for (int i = 0; i <= m - 1; i++)
  {
    for (int j = 0; j <= m- 1; j++)
    {
      cin >> arr[i][j];
    }
  }
  //print
cout<<endl;
  cout << "Display array" << endl;
  for (int i = 0; i <= m - 1; i++)
  {
    for (int j = 0; j <= m- 1; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout<<endl;
  // transpose in the same matrix

for (int i = 0; i <= m - 1; i++)
  {
    for (int j = i+1; j <= m-1; j++)
     {
        //swapping of (i,j) and (j,i).
         int temp= arr[i][j];
         arr[i][j]=arr[j][i];
         arr[j][i]=temp;
     }
  }
  //print

  cout << "Display array" << endl;
  for (int i = 0; i <= m - 1; i++)
  {
    for (int j = 0; j <= m- 1; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout<<endl;
  }

  //output
//   Enter no. of rows/columns : 
// 3
// Enter array elements
// 1 2 3 4 5 6 7 8 9

// Display array
// 1 2 3
// 4 5 6
// 7 8 9

// Display array
// 1 4 7
// 2 5 8
// 3 6 9




*/
// WAP to rotate the matrix by 90 degrees clockwise.

// Hint :-
// step.1- transpose the matrix
// step.2- reverse the matrix
// almost code is right but when run it gives an errors n=2 1,2,3,4 
// run and check
#include <iostream>
using namespace std;
int main()
{
// square matrix-> no. of rows = no. of columns
  int m;
  cout << "Enter no. of rows/columns : " << endl;
  cin >> m;
  int arr[m][m];

  cout << "Enter array elements" << endl;
  for (int i = 0; i <= m - 1; i++)
  {
    for (int j = 0; j <= m- 1; j++)
    {
      cin >> arr[i][j];
    }
  }
  //print
cout<<endl;
  cout << "Display array" << endl;
  for (int i = 0; i <= m - 1; i++)
  {
    for (int j = 0; j <= m- 1; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout<<endl;





 // 1st step- transpose the matrix
for (int i = 0; i <= m - 1; i++)
  {
    for (int j = i+1; j <= m-1; j++)
     {
        //swap (i,j) into (j,i)
         int temp= arr[i][j];
         arr[i][j]=arr[j][i];
         arr[j][i]=temp;
     }
  }




  //print

  cout << "Display transpose array" << endl;
  for (int i = 0; i <= m - 1; i++)
  {
    for (int j = 0; j <= m- 1; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout<<endl;

// 2nd step- reverse each row

for(int k=0; k<m-1; k++) // traverding each
{ // k is the row no.-> constant
  int i=0; 
  int j=m-1; // index=n-1
  while (i<=j) // swapping k,i and k,j
  // k - row no.- constant and swap column no. swap har row ke andar
  {
    int temp =arr[k][i];
    arr[k][i]=arr[k][j];
    arr[k][j]=temp;

    i++;
    j--;
  } 

}
  //print
  cout << "Display reverse array" << endl;
  for (int i = 0; i <= m - 1; i++)
  {
     for (int j = 0; j <= m- 1; j++)
     {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout<<endl;


  }