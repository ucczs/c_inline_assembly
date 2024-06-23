int main(void) {
    register int    file_descriptor asm("rdi") = 1; // 1 -> file descriptor for stdout
    register char*  text asm("rsi") = "hello, world!\n";
    register int    text_length asm("rdx") = 14;
    register int    syscall_no asm("rax") = 1; // 1 -> sys_write

    asm("syscall");

    return 0;
}