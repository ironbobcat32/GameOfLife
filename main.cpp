#include <iostream>
#include <iomanip>
#include <string>
 
using namespace std;
 
const int row = 20;
const int col = 20;

void output(string a[][20]);
 
int main()
{ 
  string game[row][col];
  
  int r,c;
 
 cout << endl;
  
  for(int i = 0; i < row; i++)
  {
    for(int m = 0; m < col; m++)
    {
      game[i][m] = "⬛";
    }
  }
  
  srand(time(NULL));
  
  for(int l = 0; l < 4; l++)
  {
   int temprow,tempcol;
 
   if(l == 1)
   {
     cout << "What row do you want the first cell to be on? (type as number) ";
     cin >> temprow;
 
     cout << "What column do you want the first cell to be on? (type as number) ";
     cin >> tempcol;
 
     cout << endl;
 
     game[temprow][tempcol] = " 🦠";
   }
 
   if(l == 2)
   {
     cout << "What row do you want the second cell to be on? (type as number) ";
     cin >> temprow;
 
     cout << "What column do you want the second cell to be on? (type as number) ";
     cin >> tempcol;
 
     cout << endl;
 
     game[temprow][tempcol] = " 🦠";
   }
 
   if(l == 3)
   {
     cout << "What row do you want the third cell to be on? (type as number) ";
     cin >> temprow;
 
     cout << "What column do you want the third cell to be on? (type as number) ";
     cin >> tempcol;
 
     cout << endl;
 
     game[temprow][tempcol] = " 🦠";
   }
  }
  
  cout << endl;
  
  output(game);
  
  return 0;
}
 
void output(string a[][20])
{
  for(int i = 0; i < row; i++)
  {
    for(int g = 0; g < col; g++)
    {
      cout << setw(4) << a[i][g];
    }
    cout << endl; //add some space
  }
}


