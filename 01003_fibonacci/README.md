# 1003 피보나치 함수
## 문제
다음 소스는 N번째 피보나치 수를 구하는 C++ 함수이다.
``` C++
int fibonacci(int n) {
    if (n == 0) {
        printf("0");
        return 0;
    } else if (n == 1) {
        printf("1");
        return 1;
    } else {
        return fibonacci(n‐1) + fibonacci(n‐2);
    }
}
```
fibonacci(3)을 호출하면 다음과 같은 일이 일어난다.

fibonacci(3)은 fibonacci(2)와 fibonacci(1) (첫 번째 호출)을 호출한다.
fibonacci(2)는 fibonacci(1) (두 번째 호출)과 fibonacci(0)을 호출한다.
두 번째 호출한 fibonacci(1)은 1을 출력하고 1을 리턴한다.
fibonacci(0)은 0을 출력하고, 0을 리턴한다.
fibonacci(2)는 fibonacci(1)과 fibonacci(0)의 결과를 얻고, 1을 리턴한다.
첫 번째 호출한 fibonacci(1)은 1을 출력하고, 1을 리턴한다.
fibonacci(3)은 fibonacci(2)와 fibonacci(1)의 결과를 얻고, 2를 리턴한다.
1은 2번 출력되고, 0은 1번 출력된다. N이 주어졌을 때, fibonacci(N)을 호출했을 때, 0과 1이 각각 몇 번 출력되는지 구하는 프로그램을 작성하시오.

## 입력
첫째 줄에 테스트 케이스의 개수 T가 주어진다.

각 테스트 케이스는 한 줄로 이루어져 있고, N이 주어진다. N은 40보다 작거나 같은 자연수 또는 0이다.

## 출력
각 테스트 케이스마다 0이 출력되는 횟수와 1이 출력되는 횟수를 공백으로 구분해서 출력한다.

## Pseudocode
#### Classic Fibonacci
```cpp
int fibonacci(int n)
{
    f(0)=0, f(1)=1
    f[n]=f[n-1]+f[n-2]
    ////
	if (n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fibonacci(n-1)+ fibonacci(n-2)
}
```
#### Top-Down Method
```cpp
int dp[100000001] ={0,};

int fibonacci(int n){
    if (n==0)
        return 0;
    else if(n==1)
        return 1;
    else{
        if(dp[n]!=0)
            return dp[n];
        else
            return dp[n]=fibonacci(n-1)+ fibonacci(n-2);
    }
}
```
#### Bottom-Up Method
```cpp
int dp[10000000000001]={0,};//0으로 초기화

int fibonacci(int n)   {
    dp[0]=0;
    dp[1]=1;
    for (int i=0; i<n; i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return fibonacci(n);
}
```
1. 큰문제를 작은문제로 쪼갤수 있어야한다.
2. 메모이제이션: 모든 작은문제를 한번만 계산하고 가져다 쓴다. dp[] 배열을생성해서 값을 집어넣음
3. 작은 문제들이 반복적으로 나오고 이거를 dp[]배열을 통해서 구합니다. 점화식으로푸는겁니다.

dp 조건
- 최적부분구조: 작은 부분 문제로부터 큰 문제를 해결//증명하기가 까다로워서 몰라도 됨
중복되는 문제

