#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;
bool add(int n)
{
    stringstream ss;
    ss << n;
    string s = ss.str();
    bool var=false;
    int substrLen = 1;
    int index=0;
    while((substrLen * 3) <= s.length())
    {
        while(index < s.length())
        {
            string op1 = s.substr(index,substrLen);
            string op2 = s.substr(index+op1.length(),substrLen);
            string op3 = s.substr(index+op1.length() + op2.length(),substrLen);
            if(stoi(op1) + stoi(op2) == stoi(op3))
                var=true; // printf("\n%s + %s = %s",op1.c_str(),op2.c_str(),op3.c_str());
            else  {var=false; break;}
            index += substrLen*3;
        }
            index = 0;
            substrLen++;
    }
    return var;
}
int main()
{
    int start,end;
    cout<<"\n Enter Range";
    cin>>start>>end;
    for(int i=start;i<end;i++)
    {
        if(add(i)) cout<<i<<endl;
    }
    return 0;
}
