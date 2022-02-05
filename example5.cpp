#include <iostream>
using namespace std;
int matrix[5][5]={{10,7,12,10,4},
                     {18,11,15,17,2},
                     {23,19,12,16,14},
                     {7,12,16,0,2},
                     {3,5,6,2,1}};
int converter(string colour);
int total_sum(int number)
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+matrix[i][number];
    }
    return sum;
}
main()
{
    string color;
    cout<<"enter car colour:"<<endl;
    cin>>color;
    int index=converter(color);
    int result=total_sum(index);
    cout<<"total cars of " << color << "colour are:"<<result;
    
}
int converter(string colour)
{
    int index=0;
    if(colour == "red" || colour == "Red")
    index=0;
    else if(colour == "black" || colour == "Black")
    index=1;
    if(colour == "brown" || colour == "Brown")
    index=2;
    if(colour == "blue" || colour == "Blue")
    index=3;
    if(colour == "Gray" || colour == "gray")
    index=4;
    else 
    index=-1;
    return index;
}
// int total_sum(int number)