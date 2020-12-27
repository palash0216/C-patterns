#include <iostream>

using namespace std;

int main()
{int k=1;
    for(int i=1;i<=7;i++)
    {
        for(int j=6;j>=i;j--)
        {cout<<" ";}
        
        for(int p=1,k=1;p<=i;p++)
        {
            cout<<k++<<" ";
            
        }
        cout<<endl;
    }return 0;
}
