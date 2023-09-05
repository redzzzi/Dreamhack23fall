## 📝 Table <br>
[*1. Basics*](#basics)


# Basics
### ```웹```
**WWW**라고 불리는 World Wide Web의 줄임말로,<br>인터넷을 기반으로 구현된 서비스 중 **HTTP를 이용하여 정보를 공유하는 서비스**.
> <b><i>wikipedia</i></b><br>
>
> an information system enabling information to be shared over the Internet through simplified ways meant to appeal to users beyond IT specialists and hobbyists, as well as documents and other web resources to be accessed over the Internet according to specific rules, the Hypertext Transfer Protocol (HTTP)
<br>

```mermaid
flowchart LR
A[Web Server] -.- B[Web Client]
```
* 웹 클라이언트-서버 간 통신
  * (클라이언트) 이용자가 브라우저로 웹 서버 접속
  * (클라이언트) 브라우저가 요청 해석 후 HTTP 형식으로 웹 서버에 리소스 요청
  * (서버) HTTP 형식의 요청을 해석
  * (서버) 해석을 따라 적절한 동작 수행
  * (서버) 리소스를 HTTP 형식으로 이용자에게 전달
  * (클라이언트) 서버가 제공한 웹 리소스를 브라우저가 시각화

### ```웹 리소스```
* 고유 URI<sup><i>uniform resource identifier</i></sup> 보유
* HTML, CSS, JS, 문서, 이미지, 동영상, 폰트, etc.

### ```인코딩```
* 아스키 ; 7비트 데이터 인코딩 표준
* 유니코드 --> 인코딩이 호환되지 않는 문제를 해결하고자 탄생

### ```프로토콜```
* 약속 하에서 정보 교환에 오류가 없도록 하는 수단
* 데이터의 정확한 해석을 위한 문법*syntax*을 포함
> 네트워크 통신 기초 --> TCP/IP<br>
> 웹 애플리케이션 --> HTTP<br>
> 파일 공유 --> FTP

### ```HTTP```
* 서버와 클라이언트의 데이터 교환을 **요청**과 **응답** 형식으로 정의한 프로토콜
* HTTP 서버는 웹 서버에 의해 *HTTP 서비스 포트*에 대기
* 서비스 포트: 네트워크 포트 중 특정 서비스 점유가 점유하는 포트
* OSI 7 계층 中 [전송 계층](https://ko.wikipedia.org/wiki/%EC%A0%84%EC%86%A1_%EA%B3%84%EC%B8%B5) --> TCP, UDP, etc. // 인웹기
* 포트의 개수는 운영체제마다 다름
* Well-known port
  
  |서비스|포트 번호|
  |:---:|:---:|
  |SSH|22|
  |HTTP|80|
  |HTTPS|443|
  * 유명한 포트에서 서비스 실행 시 관리자 권한 요구됨 -> 클라이언트가 서비스 신뢰

### [```HTTP 상태코드```](https://www.rfc-editor.org/rfc/rfc2616.html#section-6)
|상태코드|설명|
|:---:|:---|
|1xx|요청 제대로 받았고, 처리 진행 중|
|2xx|요청 제대로 처리됨|
|3xx|요청을 처리하려면, 클라이언트의 추가 동작 필요|
|4xx|클라이언트의 잘못된 요청 전송으로 인한 처리 실패|
|5xx|유효한 클라이언트 요청에도 불구하고, 서버 에러로 인한 처리 실패|

### ```HTTPS``` <sup>HTTP with *security*</sup>
* TLS: 서버와 클라이언트 사이의 모든 HTTP 메시지를 암호화하는 프로토콜

<p align="right">ꉂ☺ᵎᵎᵎ</p>

### ```웹 브라우저```
* UX<sup>User eXperience</sup>을 제공하는 정말 조은 소프트웨어 ^_^
* 기본적인 동작 과정
  ```mermaid
  flowchart LR
  A[URL<br>분석] --> B;
  B[DNS<br>요청] --> C;
  C[HTTP를 통해<br>URL에 요청] --> D;
  D[URL의 HTTP 응답<br>수신] --> E;
  E[리소스 다운로드<br>&<Br>웹 렌더링]
  ```

### ```URL```
<p align="center"><img src="https://github.com/redzzzi/Dreamhack23fall/assets/127263392/f9dc7964-3bb1-451c-9136-4b7254abd6ce" width="400px"></p>

* scheme: 웹 서버와의 통신 프로토콜 종류
* host: 접속할 웹 서버 주소의 정보 (authority의 일부)
* port: 접속할 웹 서버 포트에 대한 정보 (authority의 일부)
* path: 접근할 웹 서버의 리소스 경로
  * ```/```로 구분
* query: 웹 서버에 전달할 파라미터
  * ```?``` 뒤
* fragment: 메인 리소스에 존재하는 **서브 리소스**를 접근할 때를 식별
  * ```#``` 뒤
<br>

* Host --> Domain Name, IP Address를 가짐
* 브라우저가 DNS에 Domain Name을 질의하고 DNS가 응답한 IP Address 사용

  ```mermaid
  flowchart LR
  A[IP Address] --> |DNS| B;
  B[Domain Name] --> |DNS| A;
  ```




  
