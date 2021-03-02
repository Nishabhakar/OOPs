#include <iostream.h>
void read_matrix(int matrix[10][10],int r,int c);
void display_matrix(int matrix[10][10],int r,int c);
int main()
{
    int matrix[10][10],r,c;
    cout<<"enter no of rows \n";
    cin>>r;
    cout<<"enter no of columns \n";
    cin>>c;
    
    cout<<"enter matrix elements\n";
    read_matrix(matrix,r,c);
    cout<<"matrix elements are \n";
    display_matrix(matrix,r,c);
    return 0;
}
void read_matrix(int matrix[10][10],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>matrix[i][j];
        }
    }
}
void display_matrix(int matrix[10][10],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}
