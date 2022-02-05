#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
using namespace std;
char size=5;
void battleship();
main()
{
    // cout<<"enter matrix size:";
    // cin>>size;
    battleship();
}
void battleship()
{
    bool number;
    string model[size][size]={
                                {".", ".", ".", "*", "*"},
                                {".", "*", ".", ".", "."},
                                {".", "*", ".", ".", "."},
                                {".", "*", ".", ".", "."},
                                {".", ".", "*", "*", "."},
                             };
    char ch1,ch2;
    cout<<"enter row number:";
    cin>>ch1;
    int num1=0,num2;
    cout<<"enter coulomn character:";
    cin>>ch2;
    if(ch1 == 'A' )
    {
        num1=(int)ch1;
        num1=num1-65;
    }
    if(ch1 == 'B' )
    {
        num1=(int)ch1;
        num1=num1-65;
    }
    if(ch1 == 'C' )
    {
        num1=(int)ch1;
        num1=num1-65;
    }
    if(ch1 == 'D' )
    {
        num1=(int)ch1;
        num1=num1-65;
    }
    if(ch1 == 'E' )
    {
        num1=(int)ch1;
        num1=num1-65;
    }
    if(ch2 == '1' )
    {
        num2=0;
    }
    if(ch2 == '2' )
    {
        num2=1;
    }
    if(ch2 == '3' )
    {
        num2=2;
    }
    if(ch2 == '4' )
    {
        num2=3;
    }
    if(ch2 == '5' )
    {
        num2=4;
    }
    bool a=false;
    bool b=false;
    for(int i=0;i<5;i++)
    {
        
        for(int x=0;x<5;x++)
        {
            if(model[num1][num2] ==  "." )
            {
                cout<<"splach"<<endl;
                a=true;
                break;
            }
            if(model[num1][num2] == "*") 
            {
                cout<<"boom"<<endl;
                b=true;
                break;
            }
            if(a == true || b == true)
            break;
        }
        if(a == true || b == true)
            break;   
    }
}