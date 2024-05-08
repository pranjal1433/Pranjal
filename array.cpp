#include<iostream>
using namespace std;
int main(){
    int a[]={0,-1,42,-3,1},x=-2,b=0;
    for(int j=0;j<4;j++){
    for(int i=j+1;i<5;i++){
        if(a[j]+a[i]==-2){
        cout<<"Element found "<<endl;
        b++;
        return 0;
        }
    }
    }
    if(b==0){
        cout<<"Element not found "<<endl;
    }
    return 0;
}