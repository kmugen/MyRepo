# A+B
- Level 1
- 82.6% Correct Answer Rate

<br />

## Description

- 현대자동차그룹의 연구원인 영호는 자동차의 주행거리를 비교하는 프로그램을 만들고 있다.

- 두 차량 A와 B의 주행거리가 자연수로 주어졌을 때, 주행거리를 비교해서 어느 차량의 주행거리가 더 큰지 알아보자.

<br />

## Conditions

- 0 ≤ A, B ≤ 100,000

<br />

## Input Format

- 첫째줄에 두차량 A, B의 주행거리가 한칸의 공백을 두고 주어진다.

<br />

## Output Format

- 주행거리를 비교해서 첫째줄에 아래의 글자를 출력한다.

- A가 B 보다 큰 경우 A를 출력한다.

- A가 B 보다 작은 경우 B를 출력한다.

- A와 B의 주행거리가 같은 경우 same을 출력한다.

<br />

## Examples
- Example 1
    - Input
        > 3500 2000
    - Output
        > A

- Example 2
    - Input  
        > 1500 1800
    - Output
        > B

- Example 3
    - Input
        > 5000 5000
    - Output
        > same

<br /><br />

# 문제 풀이

1. 두 정수 A와 B를 입력받는다.
2. 분기문을 통해 두 변수 사이의 대소 관계를 파악한다.
3. 대소 관계에 따른 문자열 내용을 출력한다.

<br />

## 변수 설명
- int A, B   
    &emsp;대소 비교될 변수
    
<br />

## 함수 설명
- void Solution(void)  
    &emsp;두 변수를 입력받아 대소 관계를 비교하여 문자열을 출력하는 함수

- void Input(void)  
    &emsp;정수형 변수 A와 B를 입력 받는 함수
    
- void Output(const char *s)  
    &emsp;문자열 s를 출력하는 함수
