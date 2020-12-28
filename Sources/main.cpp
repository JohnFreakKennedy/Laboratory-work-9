#include <iostream>
#include <iomanip>
#include <string>
#include <time.h>
#include "symbol.h"


using namespace std;


int main()
{
 srand(time(NULL));
 string w="n";
 cout<<"Dankov Artem,IS-01,10V"<<endl<<"Do you wish to put your string manually?(y/n)"<<endl;
 getline(cin,w);
 string str;
 if(w=="yes" || w=="Yes" || w=="1" || w=="y" )
 {
 getline(cin,str);
 system("cls");
 }
  else {
    str.resize(200);
    for(int i=0;i<200;i++){
        str[i]=rand()%(94)+33;
    }
 }
 int n=str.length();
 cout<<str<<"\n\n\n";
 symbolCount(str,n);
 system("pause");
 return 0;
}
