#include <iostream>
#include <queue>
#include <ctime>
using namespace std;

int n;
char** maze;

queue<pair<int, int>> q;

void bfs(char** maze, int n, int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= n || maze[x][y] == 'x' || maze[x][y] == 'o')
    {
        q.pop();
        return;
    }
    if (maze[x][y] == '.')
    {
        q.pop();
        maze[x][y] = 'o';
        q.push({x+1, y});
        q.push({x-1, y});
        q.push({x, y+1});
        q.push({x, y-1});
    }
    while(!q.empty())
    {
        bfs(maze, n, q.front().first, q.front().second);
    }
}

int main() {
    
    srand(time(0));
    cout << "A group of friends are in a maze and they want to find the exit." << endl;
    cout << "Enter the edge of the maze: ";
    cin >> n;
    maze = new char*[n];
    for (int i =0;i < n;i++)
    {
        maze[i] = new char[n];
    }
    for (int i =0;i < n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (rand() % 2 == 0)
            {
                maze[i][j] = 'x';
            }
            else
            {
                maze[i][j] = '.';
            }
        }
    }
    maze[0][0] = '.';
    maze[n-1][n-1] = '.';
    cout << ". = path, x = wall, o = visited" << endl;
    cout << "The maze is: " << endl;
    for (int i =0;i < n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
    q.push({0, 0});
    bfs(maze, n, 0, 0);
    cout << "The maze after BFS is: " << endl;
    for (int i =0;i < n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
    if (maze[n-1][n-1] == 'o')
    {
        cout << "The friends found the exit." << endl;
    }
    else
    {
        cout << "The friends did not find the exit." << endl;
    }   

    return 0;
}
