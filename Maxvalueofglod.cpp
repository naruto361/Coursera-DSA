#include<bits/stdc++.h>
using namespace std;

int optimal_weight(int W, const vector<int> &w) 
{
  const int w_size = w.size();
  int** weights = new int* [w_size + 1];

  for (int i = 0; i <= w_size; i++) 
  {
    weights[i] = new int[W + 1];
  }

  for (int i = 0; i <= w_size; i++) 
  {
    for (int j = 0; j <= W; j++) 
    {      
        if (i==0 || j==0) 
          weights[i][j] = 0;
        else if (w[i - 1] <= j) 
          weights[i][j] =max(w[i - 1] + weights[i - 1][j - w[i - 1]],  weights[i - 1][j]);
        else
          weights[i][j] = weights[i - 1][j];
    }
  }

  int result = weights[w_size][W];

  for (int i = 0; i < w_size; i++) 
    delete[] weights[i];

  delete[] weights;

  return result;
}
int main()
{
    int W,n;
    cin>>W>>n;
    vector <int> w(n);
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        w.push_back(x);
    }
    cout<<optimal_weight(W,w);
}