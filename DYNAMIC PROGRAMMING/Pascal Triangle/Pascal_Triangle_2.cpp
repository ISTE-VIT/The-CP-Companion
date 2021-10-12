class Solution
{
public:
    //RECURSION
    int rowsCcols(int rows, int cols)
    {
        if (rows == 0 || cols == 0 || cols == rows)
            return 1;
        return rowsCcols(rows - 1, cols - 1) + rowsCcols(rows - 1, cols);
    }
    vector<int> getRow(int rowIndex)
    {
        vector<int> ans(rowIndex + 1);
        for (int i = 0; i <= rowIndex; i++)
        {
            ans[i] = rowsCcols(rowIndex, i);
        }
        return ans;
        //ACTUAL
        vector<int> getRow(int rowIndex)
        {
            vector<int> result(rowIndex + 1, 1);
            for (int i = 2; i <= rowIndex; i++)
            {
                for (int j = i - 1; j > 0; j--)
                {
                    result[j] = result[j] + result[j - 1];
                }
            }
            return result;
        }
    };