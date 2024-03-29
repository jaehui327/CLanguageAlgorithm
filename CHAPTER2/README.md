# 2. 완전 탐색 0

## 비트 연산 bitwise operation

&(and), |(or), ~(not), ^(xor)

|  A   |  B   |  ~A  | A&B  | A\|B | A ^ B |
| :--: | :--: | :--: | :--: | :--: | :---: |
|  0   |  0   |  1   |  0   |  0   |   0   |
|  0   |  1   |  1   |  0   |  1   |   1   |
|  1   |  0   |  0   |  0   |  1   |   1   |
|  1   |  1   |  0   |  1   |  1   |   0   |

- shift left (<<)
- shift right (>>)

## 비트마스크 Bitmask

비트(bit) 연산을 사용해서 부분 집합을 표현할 수 있다.

- {1, 3, 4, 5, 9} = 570 = 2^1 + 2^3 + 2^4 + 2^5 + 2^9

### 0이 포함되어 있는지 검사

570 & 2^0 

= 570 & (1<<`0`) 

= 0

### 1이 포함되어 있는지 검사

570 & 2^1 

= 570 & (1<<`1`) = 2

### 1 추가하기

570 | 2^1 

= 570 + (1<<`1`) 

= 570 ( 1000111010(2) )

### 1 제거하기

570 & ~2^1 

= 570 & ~(1<<`1`) 

= 568 ( 1000111000(2) )

### 전체 집합

(1 << N) – 1

### 공집합

0

---

### 현재 집합이 S일 때

- i를 추가 : S | (i << i)
- i를 검사 : S & (1 << i)
- i를 제거 : S & ~(1 << i)
- i를 토글 (0을 1로, 1을 0으로) : S ^ (1 << i)

### 비트마스크를 사용하는 이유
집합을 배열의 인덱스로 표현할 수 있기 때문이다.
상태 다이나믹을 할 때 자주 사용하게 된다.

## 순열
