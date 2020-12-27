
#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=13;i++)
    {
        for(int j=1;j<=8;j++)
        {
            if(i==1&&j>3&&j<7||(i+j)==5&&i<4||j==2&&i>2&&i<6||
            (i-3)==j&&j<5&&i>4||i==7&&j>3&&j<7||(i-1)==j&&i>6||
            j==8&&i>8&&i<12||(i+j)==19&&i>10||i==13&&j>3&&j<7)
            cout<<" *";
            else
            cout<<"  ";
        
        }cout<<endl;
    }

    return 0;
}