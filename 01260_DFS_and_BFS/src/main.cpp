#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;
int N, M, V;
int map[1001][1001];
bool visited[1001];
queue<int> q;

void DFS(int v)
{
	visited[v] = true;
	cout << v << " ";
	for (int i = 1; i <= N; i++)
	{
		if (map[v][i] == 1 && visited[i] == 0)
		{
			DFS(i);
		}
	}
}
void BFS(int v)
{
	q.push(v);
	visited[v] = true;
	cout << v << " ";

	while (!q.empty())
	{
		v = q.front();
		q.pop();

		for (int w = 1; w <= N; w++)
		{
			if (map[v][w] == 1 && visited[w] == 0)
			{
				q.push(w);
				visited[w] = true;
				cout << w << " ";
			}
		}
	}
}

void Solution(int v)
{
	for (int i = 1; i <= N; i++)
	{
		visited[i] = 0;
	}
	DFS(V);
	cout << endl;
	for (int i = 1; i <= N; i++)
	{
		visited[i] = 0;
	}
	BFS(V);
}

int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++)
	{
		int A, B;
		cin >> A >> B;
		map[A][B] = 1;
		map[B][A] = 1;
	}

	Solution(V);
	return 0;
}