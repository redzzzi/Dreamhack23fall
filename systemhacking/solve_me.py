#!/usr/bin/python3
quiz = [116, 66, 85, 81, 93, 120, 81, 83, 91]
for i in range(len(quiz)): #리스트 길이인 9번만큼 실행. 0~8 범위
    quiz[i] ^= 0x30 #10진수 48과 XOR 연산
    # print(f"Deci {quiz[i]} is {chr(quiz[i])}")
# for _ in quiz:
    # print(chr(_))
quiz = ''.join([chr(_) for _ in quiz])
answer = input("So your answer is ? ")
if answer == quiz:
    print("Welcome Hackers :)")
else:
    print("No No :/")
