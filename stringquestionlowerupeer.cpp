#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    s.length();
    cout<<"string length :"<<s.length();
    for(int i=0;i<s.size();i++){
        if(i%2==0){
           s[i] = tolower(s[i]);
        }
        else{
            s[i] = toupper(s[i]); 
        }
    }
    cout<<"\nans :"<<s;

    return 0;
}
