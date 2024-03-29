#include<iostream>
#include <vector>
#include <string.h>
using namespace std;
//optimized one. In O(n) time.
string Smallestunit(string str)
{
    int l=str.length();
    vector <int> lps(l,0);
    int i=1, len=0;
    while(i<l){
        if(str[i]==str[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len==0)  i++;
            else   len=lps[len-1];
        }
    }

    int x=lps[l-1];
    if(l%(l-x)==0){
        return str.substr(0,l-x);
    }
    else
       return str;
}


//or we do this o(n^2) one

string Smallunit(string str){
    int l=str.length();
    for(int i=1;i<l;i++){
        int j=0;
        for(;j<l;j++){
            if(str[j%i] != str[j]){
                break;
            }
        }
        if(j==l) return str.substr(0,i);
    }
    return str;
}

//just checking both
int main()
{
    string s;
    cin>>s;
    cout<<"Ans using the optimized code: "<<Smallestunit(s)<<endl;
    cout<<"Ans using the not optimized code: "<<Smallunit(s)<<endl;
    return 0;
}


/*https://stackoverflow.com/questions/6021274/finding-shortest-repeating-cycle-in-word*/