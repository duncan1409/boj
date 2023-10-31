#include <iostream>
#include <string>
#include <vector>
#define endl "\n"

using namespace std;

int N;												 // 명령의 개수
vector<pair<string, int>> ans; // 텍스트와 시간을 저장하는 벡터

string Solution(int target_sec)
{
	// target_sec보다 작은 시간을 가진 텍스트를 찾아서 반환하는 함수
	for (int i = ans.size() - 1; i >= 0; i--)
	{
		if (target_sec > ans[i].second)
			return ans[i].first;
	}
	return "";
}

int main()
{
	freopen("input.txt", "r", stdin); // 입력을 파일로부터 받아옴
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N; // 명령의 개수 입력받음
	for (int i = 0; i < N; i++)
	{
		string cmd, val;
		int sec;
		cin >> cmd >> val >> sec; // 명령과 값, 시간을 입력받음
		if (cmd == "type")
		{
			string push_val;
			if (ans.size())
				push_val = ans.back().first + val; // 이전 텍스트에 값을 추가하여 push_val에 저장
			else
				push_val = val;								// 첫 번째 명령인 경우 텍스트를 그대로 push_val에 저장
			ans.push_back({push_val, sec}); // push_val과 시간을 ans에 추가
		}
		else
		{
			ans.push_back({Solution(sec - atoi(val.c_str())), sec}); // Solution 함수를 호출하여 해당 시간에 해당하는 텍스트를 가져와서 ans에 추가
		}
	}

	cout << ans.back().first; // 결과 출력
	return 0;
}
