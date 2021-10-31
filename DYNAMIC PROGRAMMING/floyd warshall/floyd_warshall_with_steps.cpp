#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double **createMatrix(int m, int n)
{
    double **matrix = new double *[m];
    for (int i = 0; i < m; i++)
        matrix[i] = new double[n];
    return matrix;
}

int min(int a, int b)
{
    return a < b ? a : b;
}

double **floyd_w(double **distMatrix, int n)
{
    double **result = distMatrix;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                result[i][j] = min(result[i][j], result[i][k] + result[k][j]);
            }
        }
        cout<<endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (isinf(result[i][j]))
                    cout << "INF"<<" ";
                else
                    cout << result[i][j] << " ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return result;
}

int main()
{
    double n;
    cin >> n;
    double **distMatrix = createMatrix(n, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string temp;
            cin >> temp;
            if (temp == "INF")
                distMatrix[i][j] = INFINITY;
            else
                distMatrix[i][j] = stoi(temp);
        }
    }

    double **result = floyd_w(distMatrix, n);

    cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (isinf(result[i][j]))
    //             cout << "INF" << endl;
    //         else
    //             cout << result[i][j] << endl;
    //     }
    // }
    return 0;
}