#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
string strArr[]={"epic is a healthcare company","I am interviewing for software developer postdgnvfjkv fjbvfjkb","lets go and party"};
int count_words(string str)
{
    int word_count=1;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ') word_count++;
    }
    return word_count;
}
vector<string> split(string str)
{
    string buf;
    stringstream ss(str);
    vector<string> tokens;
    while (ss >> buf)
        tokens.push_back(buf);
    return tokens;
}
int main() {
    int max = 0, k=0;
    
    for (int i = 0; i <sizeof(strArr)/sizeof(strArr[0]); i++) {
        int temp = count_words(strArr[i]);
        if (max < temp) {
            max = temp;
        }
    }
    string empty=" ";
    vector<vector <string>> output;
    vector<string> single_output;
    
    for (int i = 0; i < sizeof(strArr)/sizeof(strArr[0]);i++)
    {
        vector<string> temp = split(strArr[i]);
        for (std::vector<string>::const_iterator j = temp.begin(); j != temp.end(); ++j)
            {
                single_output.push_back(*j);
                k++;
            }
            while(k<max)
            {
                single_output.push_back(empty);
                k++;
            }
        output.push_back(single_output);
        single_output.clear();
    }

    for (int i = 0; i < max; i++)
    {
        
        for (int j = 0; j < sizeof(strArr)/sizeof(strArr[0]); j++)
        {
            cout<<output[j][i]<<" ";
        }
        cout<<endl;
    }
}
