#include <iostream>
using namespace std;



int main()
{
    int SIZE=5;



  int matrix[SIZE][SIZE];
  int sum_left =0, sum_right = 0;
  cout << "Enter elements into the matrix \n";





  for(int i=0; i<SIZE ; i++){
    for(int j=0; j<SIZE; j++){
      cin >> matrix[i][j];
      if(i==j)
        sum_left += matrix[i][j];



    }
  }for(int i=0; i<SIZE ; i++){
   if(SIZE%2!=0 && i==SIZE/2)
      {continue;}
        sum_right += matrix[i][SIZE-1-i];
  }



  cout << "Sum of Left Diagonal: "<< sum_left << endl;
  cout << "Sum of Right Diagonal: "<< sum_right << endl;
  cout<<"total"<<sum_left+sum_right<<endl;



  return 0;
}
