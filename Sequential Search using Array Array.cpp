#include <iostream>
using namespace std;

int main()
{
    int i,j;
    int ar1[10]={8,4,6,1,6,9,6,1,9,8};
    int n;
    for(i=0;i<10;i++){

n=0;
        for (j=0;j<10;j++){


       if(ar1[i]==ar1[j])
      n++ ;



      }


cout<<ar1[i]<<"occurs"<<n<<"times"<<endl;

    }





       return 0;

    }

