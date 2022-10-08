#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i<matrix.size(); i++)
        {
            if(target>=matrix[i][0] && target<=matrix[i][matrix[0].size()-1])
            {
                if(binary_search(matrix[i].begin(), matrix[i].end(), target))
                {
                    return true;
                }
            }
        }
        return false;
    }
    
int main() {
    int m,n,k;
    cout<<"Enter rows : ";
    cin>>m;
    cout<<"\nEnter columns : ";
    cin>>n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"\nEnter element to be searched :";
    cin>>k;
	if(searchMatrix(matrix,k))
	{
	    cout<<"\nElement is present in the matrix.";
	}
	else
	{
	    cout<<"\nElement is not present in the matrix.";
	}
	
	return 0;
}
