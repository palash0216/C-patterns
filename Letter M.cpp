
#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
          if(j==1||j==9||i==j&&i<6||i+j==10&&j>5)
            
            cout<<" *";
            else
            cout<<"  ";
        
        }cout<<endl;
    }

    return 0;
}