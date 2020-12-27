
#include <iostream>

using namespace std;

int main()
{int i,j;
    for( i=1;i<=5;i++)
    {
        for( j=1;j<=7;j++)
        {
            if((i==j&&i>1&&i!=5)||((i+j)==8)&&j>3)
            cout<<"*  ";
            else
            cout<<"   ";
        }cout<<endl;
    }


    return 0;
}

