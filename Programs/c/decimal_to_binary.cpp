#include <iostream>

using namespace std;

int main()
{
    int n,var,sum=0,l=1;
    /*here var can be of base 2*/
    cin>>n>>var;
    while(n>0)
    {
        int k=n%10;
        int d=1,s=0;
        while(k>0)
        {
            s=s+(k%2)*d;
            d=d*10;
            k=k/var;
        }
        sum=sum+s*l;
        l=l*1000;
        n=n/10;
    }
    cout<<sum;
    return 0;
}
