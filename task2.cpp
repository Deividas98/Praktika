#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int row, column, k[10],sum=0;
    char ch[10][10];

    cout<<"enter row size:\n";
    cin>>row;
    cout<<"enter column size:\n";
    cin>>column;
    cout<<"enter land map:\n";

    for(int i=0; i< row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cin>>ch[i][j];
        }
    }


    for(int i=0; i< row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cout<<ch[i][j];
        }
        cout<<endl;
    }


for(int i=0; i< row; i++)
    {
        for(int j=0; j<column; j++)
        {
            if(ch[i][j]=='X' && (ch[i-1][j]=='O' && ch[i+1][j]=='O' && ch[i][j-1]=='O' && ch[i][j+1]=='O')) k[i]=4;
            else if(ch[i][j]=='X' && (ch[i-1][j]=='X' && ch[i+1][j]=='X' || ch[i][j-1]=='X' && ch[i][j+1]=='X' || ch[i-1][j]=='X' && ch[i][j-1]=='X' || ch[i-1][j]=='X' && ch[i][j+1]=='X' || ch[i+1][j]=='X' && ch[i][j-1]=='X' || ch[i+1][j]=='X' && ch[i][j+1]=='X')) k[i]=2;
            else if(ch[i][j]=='X' && (ch[i-1][j]=='X' && ch[i+1][j]=='X' && ch[i][j-1]=='X' && ch[i][j+1]=='X')) k[i]=0;
            else if(ch[i][j]=='X' && (ch[i-1][j]=='X' || ch[i+1][j]=='X' || ch[i][j-1]=='X' || ch[i][j+1]=='X')) k[i]=3;
            else if(ch[i][j]=='X' && (ch[i-1][j]=='O' || ch[i+1][j]=='O' || ch[i][j-1]=='O' || ch[i][j+1]=='O')) k[i]=1;
            else k[i]=0;
sum=sum+k[i];
//cout<<endl; cout<<k[i]<<endl;
        }

    }
cout<<"Total land perimeter:"<<sum;

    return 0;
}
