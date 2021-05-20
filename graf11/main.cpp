#include <iostream>

using namespace std;


int main()
{
    //szomszedossagi matrix inicializalasa
    int i, j,n=8;
    int m[100][100];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            m[i][j]=0;
        }
    }
    //elek betoltese
    m[1][2] = 1;
    m[2][3] = 1;
    m[3][4]= 1;
    m[4][2]= 1;
    m[4][8]= 1;
    m[5][8]= 1;
    m[5][7]= 1;
    m[5][6]= 1;
    m[6][1]= 1;
    //szimmetrikus masolas
    for(i=1; i<n+1; i++)
    {
        for(j=i+1; j<n+1; j++)
        {
            m[j][i]= m[i][j];
        }
    }
    for(i=0; i<n+1; i++)
    {
        for(j=0; j<n+1; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    //probaljuk meg minden elbol bejarni a grafot

    return 0;
}
