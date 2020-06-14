#include<iostream>
using namespace std;
int main(){
 int A[3], B[3];
 int C[2];
 int a=0;
 int b=0;
 for(int i=0;i<3;i++)
    cin>>A[i];
 for(int i=0;i<3;i++)
    cin>>B[i];
 for(int i=0;i<3;i++)
 {
     if(A[i]>B[i])
        a=a+1;
     else if(B[i]>A[i])
        b=b+1;
     else a=a+0;
          b=b+0;
 }
C[0]=a;
C[1]=b;
cout<<C[0]<<C[1];

}
