#include <iostream>

using namespace std;

main()
{
    int matrix[3][3];
    int sum=0;
    cout<<"enter  numbers in matrix:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int y=0;y<3;y++)
        {
            cin>>matrix[i][y] ;
            cout<<"\t";
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+matrix[i][j];
        }
    }
    cout<<"total sum is:"<<sum;
}