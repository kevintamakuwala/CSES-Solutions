#include <bits/stdc++.h>
using namespace std;
int main()
{
    int startRow, startCol;
    int rows, cols;
    cin >> rows >> cols;
    vector<string> grid(rows);
    for (int i = 0; i < rows; i++)
        cin >> grid[i];
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
            if (grid[r][c] == 'A')
            {
                startRow = r;
                startCol = c;
            }
    }
    vector<vector<int>> previous(rows, vector<int>(cols, -1));
    vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    vector<char> directionChars = {'R', 'L', 'D', 'U'};
    deque<pair<int, int>> deq;
    deq.emplace_back(startRow, startCol);
    previous[startRow][startCol] = -2;
    int row, col;
    while (!deq.empty())
    {
        row = deq.front().first, col = deq.front().second;
        deq.pop_front();
        if (grid[row][col] == 'B')
            break;
        for (int i = 0; i < 4; i++)
        {
            int r = row + directions[i][0];
            int c = col + directions[i][1];
            if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] == '#' || previous[r][c] != -1)
                continue;
            previous[r][c] = i;
            deq.emplace_back(r, c);
        }
    }

    if (grid[row][col] != 'B')
        cout << "NO\n";
    string path;
    while (previous[row][col] != -2)
    {
        int direction = previous[row][col];
        path.push_back(directionChars[direction]);
        row -= directions[direction][0];
        col -= directions[direction][1];
    }
    reverse(path.begin(), path.end());
    cout << "YES\n" + to_string(path.size()) + "\n" + path;
    return 0;
}