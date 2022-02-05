#include<iostream>
using namespace std;
int row;
int coulom;
main()
{ 
    cout<<"enter row size of matrix:";
    cin>>row;
    cout<<"enter coulon size of matrix:";
    cin>>coulom;
    int matrix[row][coulom];
    //____________________take input____________________________
    for(int i=0;i<row;i++)
    {
        for(int y=0;y<coulom;y++)
        {
            cin>>matrix[i][y];
        }
        cout<<endl;
    }
    //_______________________check identity matrix________________
    if(row  == coulom)
    {
        int diagonalcount=0;
        //__________________check diagonal______________________
        for(int x=0;x<row;x++)
        {
            int z=0;
            int y=1;
            for(;y*z<coulom;)
            {
                if(matrix[x][y*z] == 1)
                diagonalcount++;
                z++;
            }
        }
        //____________________check rows________________________
        int rowcount=0;
        for(int i=0;i<row;i++)
        {
            for(int y=0;y<coulom;y++)
            {
                if(matrix[i][y] == 0)
                rowcount++;
            }
        }
        //---------------condition for identity matrix-----------------
        if(diagonalcount == row && rowcount == (row*coulom)-row  )
        {
            cout<<"matrix is diagonal:";
        }
        else 
        {
            cout<<"matrix is not identity matrix:"<<endl;
        }
    }
    else 
    {
        cout<<"matrix is not identity matrix:"<<endl;
    }
}