#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
using namespace std;
int len;
string str;

void permutation(int cnum)
{
    int mid;
    int flag=1;
    int giga=0;
    int dead=0;
    int array[50];
    for(int i=0;i<len-1;i++)
    {
        array[50]='\0';
        cout<< ": "<<array[1];
        dead=0;
        for(int j=cnum;j<len+cnum;j++)
        {
            mid=j%len;
            if(mid==cnum && flag==1)
            {
                cout<<str[mid];
                array[dead]=mid;
                dead++;
                flag=0;
            }
                else
            {
                giga=(i+j)%len;
                for(int k=0;k<dead;k++)
                {
                    if((array[k]==giga) && flag==0)
                    {
                    giga=(giga+1)%len;
                    }
                }
                cout<<str[giga];
                array[dead]=giga;
                dead++;

            }
        }
        cout<<endl;
        flag=1;
    }
}
int main()
{
    cout<<"Enter the string :: ";
    getline(cin,str);
    len=str.length();
    cout<<"String length = "<<len<<endl;
    cout<<"Total permutation = "<<len*(len-1)<<endl;
    for(int j=0;j<len;j++)
    {
        permutation(j);
    }
return 0;
}
