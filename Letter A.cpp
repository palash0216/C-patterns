

#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=8;i++)
    {
        for(int j=1;j<=15;j++)
        {
            if((i+j)==9||i==5&&j>4&&j<12||((i+7)==j))
            cout<<"* ";
            else
            cout<<"  ";
        
        }cout<<endl;
    }

    return 0;
}
