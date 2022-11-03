#include <iostream>
using namespace std;
//Brute-Force Algorithm... 전체 탐색 = 노가다
//최솟값 문제.
string WB[8]={
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW"
};
string BW[8]={
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB"
};
void AvailableBoard(int N, int M, int *board)
{

  
}

int main()
{
  freopen("input.txt", "r", stdin);
  int N, M;
  char temp;
  cin >> N >> M;
  int X = (N - 7) * (M - 7);
  int board[50][50] = {
      0,
  }; //배열은 무조건 상수로 선언하는것이 좋다.
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      cin >> temp;
      if (temp == 'W')
        board[i][j] = 1;
    }
  }
}