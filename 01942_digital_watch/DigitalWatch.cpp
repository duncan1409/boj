#include <iostream>
#include <string>
#define MAX 3
#define MAX_SECOND 60
#define MAX_MINUTE 60
#define MAX_HOUR 24
using namespace std;
class TimeRule
{
public:
  int hour, minute, second;
};
void getTime(string input, TimeRule &startTime, TimeRule &endTime)
{
  startTime.hour = stoi(input.substr(0, 2));
  startTime.minute = stoi(input.substr(3, 2));
  startTime.second = stoi(input.substr(6, 2));

  startTime.hour = stoi(input.substr(9, 2));
  startTime.hour = stoi(input.substr(12, 2));
  startTime.hour = stoi(input.substr(15, 2));
}
bool isTimeEqual(TimeRule startTime, TimeRule endTime)
{
  return startTime.hour == endTime.hour && startTime.minute == endTime.minute && startTime.second == endTime.second;
}
int convertTime(TimeRule time)
{
  return time.hour * 10000 + time.minute * 100 + time.second;
}
void incrementTime(TimeRule &time)
{
  time.second++;
  if (time.second == MAX_SECOND)
  {
    time.second = 0;
    time.minute++;
  }
  if (time.minute == MAX_MINUTE)
  {
    time.minute = 0;
    time.hour++;
  }
  if (time.hour == MAX_HOUR)
  {
    time.hour = 0;
  }
}

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for (int i = 0; i < MAX; i++)
  {
    string input;
    getline(cin, input);
    TimeRule startTime, endTime;
    getTime(input, startTime, endTime);
    int result = 0;
    while (1)
    {
      int start = convertTime(startTime);
      int end = convertTime(endTime);
      if (start % 3 == 0)
      {
        result++;
      }
      if (isTimeEqual(startTime, endTime))
      {
        break;
      }
      incrementTime(startTime);
    }
    cout << result << "\n";
  }
}