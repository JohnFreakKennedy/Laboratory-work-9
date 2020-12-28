#include "symbol.h"
#include <iostream>
#include <iomanip>

using namespace std;

void symbolCount(string str,int n)
{
    char strtemp;
    cout<<"Symbols,which are introduced only once:"<<"\n\n\n";
    for(int i=0;i<n;i++){
        int count = 0;
        strtemp=str[i];
        for(int j=0;j<n;j++){
        if(str[j]==strtemp)count++;
        }
        if(count==1)cout<<strtemp<<" "<<i+1<<endl;
    }
    cout<<endl;
}
