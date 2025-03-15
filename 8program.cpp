#include<cmath>
#include<iostream>
using namespace std;
int main(){
    int a;
    int b = sizeof(a);
    cout<<"total bytes consumed by integer is ="<<b<<" Bytes"<<endl;
    //conversion of bytes into bits;
    int noBit=b*8;
    cout<<"Total bits="<<noBit;
    long double totalValues=pow(2,noBit);
    cout<<"\n Total values integer can hold = "<<totalValues;
    long double min=0;
    long double max=totalValues-1;
    cout<<"\n min value of unsigned int= "<<min;
    cout<<"\n max value of unsigned int= "<<max;
    

}