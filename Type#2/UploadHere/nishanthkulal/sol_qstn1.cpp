#include <bits/stdc++.h> 

using namespace std;  



void rotateElements(int m1,int n1, int mat[50][50]) 

{ 

    int row = 0, col = 0; 

    int prev, curr; 

    int lastRow= m1;

    int lastCol= n1;

    while (row < lastRow && col < lastCol) 



    {  

        if (row + 1 == lastRow || col + 1 == lastCol)  break;   



        prev = mat[row + 1][col]; 

        //for the first row which is in bounds

        for (int i = col; i < lastCol; i++) 

        { 

            curr = mat[row][i]; 

            mat[row][i] = prev; 

            prev = curr; 

        } 

        row++; 

        //for the last column which is in bounds

        for (int i = row; i < lastRow; i++) 

        { 

            curr = mat[i][lastCol-1]; 

            mat[i][lastCol-1] = prev; 

            prev = curr; 

        } 

        lastCol--;   

        //for the last row which is in bounds

        if (row < lastRow) 

        { 

            for (int i = lastCol-1; i >= col; i--) 

            { 

                curr = mat[lastRow-1][i]; 

                mat[lastRow-1][i] = prev; 

                prev = curr; 

            } 

        } 

        lastRow--; 

        //for the first row which is in bounds

        if (col < lastCol) 

        { 

            for (int i = lastRow-1; i >= row; i--) 

            { 

                curr = mat[i][col]; 

                mat[i][col] = prev; 

                prev = curr; 

            } 

        } 

        col++; 

    } 

    cout<<"----------------------------"<<endl;

    for (int i=0; i<m1; i++) 

    { 

        for (int j=0; j<n1; j++) 

          cout << mat[i][j] << " "; 

        cout << "\n"; 

    } 

} 





int main() 

{ 

    int a[50][50],m,n;

    cout<<"Enter the no.of rows:";

    cin>>m;

    cout<<"Enter the no.of columns:";

    cin>>n;

    cout<<"Enter the array:";

    for(int i=0;i<m;i++)

    {

      for(int j=0;j<n;j++)

        cin>>a[i][j];

    }

    



	rotateElements(m,n,a); 

    return 0; 

}