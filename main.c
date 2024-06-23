int main(void) {
    register int syscall_no asm("eax") = 1;
    register int arg1 asm("edi") = 1;
    register char* arg2 asm("rsi") = "hello, world!\n";
    register int arg3 asm("edx") = 14;

    asm("syscall");

    return 0;
}