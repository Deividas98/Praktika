#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
    int x[10], y[10], k[10], sum=0;
    string str[10],/*str[10]={"3:1", "3:2", "3:5", "3:1", "3:2", "3:6", "3:3", "3:4", "3:1", "3:1"},*/ strx[10]="", stry[10]="";

cout<<"enter results\n";
for(int i=0;i <10; i++)
cin>>str[i];


    for (int i=0; i<10; i++)
    {

        strx[i]=str[i][0];
        stry[i]=str[i][2];

        x[i] = atoi(strx[i].c_str());
        y[i] = atoi(stry[i].c_str());

        if (x[i]>y[i]) k[i]=3;
        if (x[i]<y[i]) k[i]=0;
        if (x[i]==y[i]) k[i]=1;
        sum=sum+k[i];

    }


    for (int i=0; i<10; i++)
    {
       cout<<x[i]<<":"<<y[i]<< " "<<k[i]<<" points "<<endl;
    }
    cout<<"total points: "<<sum;

    return 0;
}
