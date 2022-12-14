# 10699. 오늘 날짜

## 문제

서울의 오늘 날짜를 출력하는 프로그램을 작성하시오.

## 입력

입력은 없다.

## 출력

서울의 오늘 날짜를 "YYYY-MM-DD" 형식으로 출력한다.

## 풀이 (C/C++)

ctime라이브러리와 chrono라이브러리 두가지를 이용하는 방법을 각각 사용해본다.

```c++
//NOTE
/*
tm - struct tm 의 변수로 localtime(3), gmtime(3) 등을 통하여 구조체를 얻을 수 있습니다. struct tm의 구조는 아래와 같습니다.
*/
struct tm
{
	int tm_sec;         seconds
	int tm_min;         minutes
	int tm_hour;        hours
	int tm_mday;        day of the month
	int tm_mon;         month
	int tm_year;        year
	int tm_wday;        day of the week
	int tm_yday;        day in the year
	int tm_isdst;       daylight saving time
}
```
```c++
//NOTE: <time.h>, <ctime>
struct tm *t;
	time_t timer;
	timer = time(NULL);
	t = localtime(&timer);
//이 코드를 이용.
```
