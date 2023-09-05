## 📝 Table <br>
[*1. Basics*](#basics)


# Basics
### ```Cryptography```<sub>: 정보 보호의 핵심 🔑</sub>
```mermaid
mindmap
  root((Cryptography))
    Key generation<br>키 생성
    Encryption<br>암호화
    Decryption<br>복호화
```
* key generation: 암호화 및 복호화에 사용되는 키를 생성
* encryption: 생성된 키를 이용해 **평문**을 **암호문**으로 변환 (↔ decryption)
* 암호 시스템: 암호화가 복호화로 정보가 전달되는 체계
<pre>cf. encoding: 데이터를 다른 형태로 변환 O, 기밀성 고려 X</pre>

### ```배타적 논리합 XOR```
* 두 인자가 **서로 다를 때**, **참**을 반환하는 연산
  * 값이 다르면 ```1```, 같으면 ```0``` 출력
* 예시 --> 5 ⊕ 7=101<sub>2</sub> ⊕ 111<sub>2</sub> = 010<sub>2</sub> = 2

  |값|이|진|표|현|
  |:---:|:---:|:---:|:---:|:---:|
  |```5```|0|1|0|1|
  |```7```|0|1|1|1|
  |```결과```|0|0|1|0|

### ```합동식```
* 두 정수 a, b를 각각 정수 m으로 나눴을 때 **나머지가 같은지**를 판별하는 식
* 'a와 b가 mod m에 대해 합동이다'
* 합동일 경우, 나누기를 제외한 같은 수 더하기/빼기/곱하기를 진행 시 여전히 합동
  <p align="center"><img src="https://github.com/redzzzi/Dreamhack23fall/assets/127263392/200bc274-4d8f-4462-8ba8-1c608e6888b2" width="300px"></p>

* 곱셈의 역원
  * 정수 a, m에 대해 a×b=1(mod m)을 만족하는 ```b```를 ```mod m에 대한 a의 곱의 역원```이라고 부름
  * b는 <code>a<sup>-1</sup></code>로 표기될 수 있음
  * 역원은 a와 m이 **서로소**일 때만 존재!

<p align="right">ꉂ☺ᵎᵎᵎ</p>

### ```고전 암호```
```mermaid
flowchart TD
  A[고전 암호] --> B[치환 암호];
  A --> C[전치 암호];
  B --> D[단일 문자<br>치환 암호];
  B --> E[다중 문자<br>치환 암호]
```

* 단일 문자 치환 암호: 약속된 바에 따라 평문의 문자를 다른 문자로 치환
  * 치환의 대응 관계는 **일대일 대응**
  * e.g. ```카이사르 암호```: 평문의 각 알파벳을 일정한 거리만큼 밀어서 치환
    * 이때 **알파벳을 밀어낸 횟수**를 ```키key```라고 함 --> 키 공간이 작은 편 (26)
    * 키 공간: 가능한 모든 키의 집합

* 다중 문자 치환 암호: 평문의 한 문자가 여러 종류의 문자로 치환될 수 있음
  * e.g. ```비네제르 암호```: 표를 이용한 암호화
    <br>
    
    <pre>C<sub>i</sub> = E<sub>k</sub>(M<sub>i</sub>) = (M<sub>i</sub> + K<sub>i</sub>) mod 26<br>M<sub>i</sub> = D<sub>k</sub>(C<sub>i</sub>) = (C<sub>i</sub> - K<sub>i</sub>) mod 26<br><br><i>C: 암호문, M: 평문, K: 키워드, X<sub>i</sub>: X의 i번째 요소</i></pre>

* 전치 암호: 정해진 길이만큼 평문 문자들의 **순서를 재배열**
* e.g. ```스키테일 암호```: 나무봉 이용 --> 같은 나무봉을 가진 사람들만 해석 가능 (키: 나무봉)
