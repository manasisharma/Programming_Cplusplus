#include<iostream> 
#include<cmath> 
using namespace std;
void Dfs(long s, long e , long length , long num)
{
    if (length-1 == 0)
    {
        if ( s <= num && num <=e)
            cout<<num<<endl;
        return;
    }
    int lastDigit = num%10;
    if (lastDigit == 0)
    {
        Dfs(s , e,length-1 , num*10+1);
    }
    else if (lastDigit == 9)
    {
        Dfs(s, e, length - 1, num*10 + 8);
    }
    else
    {
        Dfs(s , e,length-1 , num*10+lastDigit-1);
        Dfs(s , e,length-1 , num*10+lastDigit+1);
    }
}

int main()
{
    long s = 1;
    long e = 1000;
    int sLength = (int)floor(log10(s) + 1);
    int eLength = (int)floor(log10(e) + 1);
    for (long i = sLength; i <=eLength; ++i)
    {
        //no leading zero
        for (long j = 1; j < 10; ++j)
        {
            Dfs(s , e, i , j);
        }
    }
    return 0;
}
