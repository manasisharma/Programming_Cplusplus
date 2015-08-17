#include <string>
#include <iostream>

using namespace std;

int isprime(int n){
    int flag = 0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            ++flag;
            return flag;
        }
    }
    return flag;
}

void goldbach(int n){
    if(n<=2){
        cout<<n<<" not greater than 2"<<endl;
        return;
    }
    if(n%2!=0){
        cout<<n<<" not even"<<endl;
        return;
    }
    
    for(int i=1; i<((n/2)+1); i++)
    {
        if((isprime(i)==0) && (isprime(n-i)==0))
            cout<<"goldbach pair: "<<i<<" and "<<n-i<<endl;
    }
    return;
}

int main()
{
    goldbach(60);
    return 0;
}
