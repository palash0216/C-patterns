#include<iostream>
using namespace std;
int main()
{int i,j;

for(i=1;i<=13;i++)
    {
        for(j=1;j<=9;j++)
        {
            if((i+j)==6||(i+4)==j||i==5&&j<=9||i==13&&j<=9
            ||j==1&&i>4||j==9&&i>4||i==(j+4)||(i+j)==6||(i+4)+j==18)
            {
            cout<<" *";
            }
            else
            cout<<"  ";
           
        }cout<<endl;
    }
    
    
    
    return 0;
}
