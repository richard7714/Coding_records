### 1. 수열 다루기
  - 수열은 처음과 끝 위치만 기록하면 된다. 모든 값을 다 기록할 필요가 없다.
  - 1차원 수열을 다룰경우, 커서가 수열 끝에 다다르기 전에 문제를 해결해야 한다. 아무런 조건도 없이 이중으로 반복문 실행하는 것은 지양하자.

### 2. 정답 고르기
  - 정답 후보군을 뽑아놓고 골라낼 필요가 없다. 정답 vector를 만들어 놓고 계속 업데이트해주면 된다.

### 3. Vector 사용하기
  - vector<int> answer(2,0) 등으로 미리 vector를 초기화 해놓으면 나중에 값을 넣을때 간편하다.
  
### 4. Constraint 이용하기
  - 변수에 상한이 존재한다면, 해당 변수를 표현할 때 그 값으로 초기화하면 예외 케이스를 고려할 필요없이 편하다.
  - 예제
    - Sequence의 길이는 최대 1,000,000이다 => 부분 수열의 길이를 1,000,000으로 초기화 해놓고 연산에 이용
    - 변수 제한이 1,000,000이 넘어간다? => 이중 for문일 가능성이 
