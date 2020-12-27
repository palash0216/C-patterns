#include <iostream>
using namespace std;
int main()

{int col,row;
for(row=0;row<=1;row++)
{
    for(col=1;col<=11;col++)
    {
        if((col>=2-row&&col<=4+row)||(col>=8-row&&col<=10+row))
            cout<<"* ";
        else  
        cout<<"  ";
    }cout<<endl;
}
   for(row=1;row<=7;row++)
{
    for(col=1;col<=11;col++)
    {
        if(col>=1+row&&col<=11-row)
            cout<<"* ";
        else
        cout<<"  ";
    }cout<<endl;
    
   } return 0;
    
}