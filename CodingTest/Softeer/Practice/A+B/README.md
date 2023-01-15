# A+B
- Level 1
- 86.8% Correct Answer Rate

## Description

- 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
<br /><br />

## Conditions

- 1 ≤ A, B ≤ 9인 정수
<br /><br />

## Input Format

- 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
- 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다.
<br /><br />

## Output Format
- 각 테스트 케이스마다 "Case #(테스트 케이스 번호): "를 출력한 다음, A+B를 출력한다.
- 테스트 케이스 번호는 1부터 시작한다.
<br /><br />

## Examples
- Example 1.
    - Input
        > 5  
        > 1 1  
        > 2 3  
        > 3 4  
        > 9 8  
        > 5 2  
    - Output
        > Case #1: 2  
        > Case #2: 5  
        > Case #3: 7  
        > Case #4: 17  
        > Case #5: 7

<br /><br />

# 문제 풀이

1. Test 횟수인 T를 입력받는다.
2. T번의 iteration을 한다.
3. 각 iteration마다 A와 B를 입력받아 둘을 합한 값을 C에 저장한다.
4. C를 출력한 후 다음 iteration으로 넘어간다.<br /><br />

## 변수 설명
- long T  
    &emsp;Test Case의 개수 <br /><br />
- int A, B  
    &emsp;합할 두 수 <br /><br />
- int C  
    &emsp;A와 B를 합한 결과 <br /><br />

## 함수 설명
- void Solution(void)  
    &emsp;입력, 문제 해결, 출력 등 전체 문제의 풀이가 진행되는 함수<br /><br />
- void Input_T(void)  
    &emsp;T를 표준 입력 장치를 통해 입력 받는 함수<br /><br />
- void Add(void)  
    &emsp;A와 B를 입력받아 둘을 더하여 출력하는 작업을 T회 반복하는 함수<br /><br />
- void Input_AB(void)  
    &emsp;A와 B를 표준 입력 장치를 통해 입력 받는 함수<br /><br />
- void Output(int t)  
    &emsp;Test Case #t의 덧셈한 결과 값, C를 표준 출력 장치를 통해 출력하는 함수
