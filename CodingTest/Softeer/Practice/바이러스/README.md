# 바이러스
- Level 2
- 30.3% Correct Answer Rate

## Description

- 바이러스가 숙주의 몸속에서 1초당 P배씩 증가한다.

- 처음에 바이러스 K마리가 있었다면 N초 후에는 총 몇 마리의 바이러스로 불어날까?

- N초 동안 죽는 바이러스는 없다고 가정한다.
<br /><br />

## Conditions

- 1 ≤ K ≤ 108인 정수

- 1 ≤ P ≤ 108인 정수

- 1 ≤ N ≤ 106인 정수
<br /><br />

## Input Format

- 첫 번째 줄에 처음 바이러스의 수 K, 증가율 P, 총 시간 N(초)이 주어진다.
<br /><br />

## Output Format
- 최종 바이러스 개수를 1000000007로 나눈 나머지를 출력하라.
<br /><br />

## Examples
- Example 1.
    - Input
        > 2 3 2
    - Output
        > 18

<br /><br />

# 문제 풀이
1. global variable인 K, P, N을 입력받는다.
2. iteration을 통해 K에 P를 N번 곱한다.
3. overflow를 막기 위해 각 multiplication마다 'division' 변수로 나눈다 <br /><br />

## 변수 설명
- long K  
    &emsp;virus의 초기 개수 <br /><br />
- long P  
    &emsp;virus 1개의 1회 division이후의 virus 개수 <br /><br />
- long N  
    &emsp;division의 횟수 <br /><br />
- const long divider  
    &emsp;overflow를 막기 위해 K에 나누어 줄 변수<br /><br />

## 함수 설명
- void Solution(void)  
    &emsp;입력, 문제 해결, 출력 등 전체 문제의 풀이가 진행되는 함수<br /><br />
- void Input(void)  
    &emsp;global variable들을 표준 입력 장치를 통해 입력 받는 함수<br /><br />
- void Output(void)  
    &emsp;계산된 결과 값, K를 표준 출력 장치를 통해 출력하는 함수<br /><br />
- void VirusDivision(void)  
    &emsp;for() iteration을 통해 virus의 division을 계산하는 함수<br /><br />
