#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

main()
{
    int matrix[5][5]={{10,7,12,10,4},
                     {18,11,15,17,2},
                     {23,19,12,16,14},
                     {7,12,16,0,2},
                     {3,5,6,2,1}};
    for(int i=0;i<5;i++)
    {
        for(int y=0;y<5;y++)
        {
            cout<<matrix[i][y]<<" ";
        }
        cout<<endl;
    }
}