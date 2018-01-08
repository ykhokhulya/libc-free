
int main();

void __libc_csu_init() {} 
void __libc_csu_fini() {}
void __libc_start_main() { exit(main()); }

int main() {
}
