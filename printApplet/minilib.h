#ifndef MINILIB_H
#define MINILIB_H
#include  <unistd.h>
//A lean string length function since we aren't using  string.h
static size_t tiny_strlen(const char* s) { 
	size_t i = 0;
	while (s[i]) i++;
	return i;
}
// Our custom print that talks to the Kernel
static void tiny_putstr(const char* s) {
	write(1, s, tiny_strlen(s));
}
#include <fcntl.h> // For 0_RDONLY
/*static void probe_system() {
	int fd =open("/proc/version", O_RDONLY);
	if (fd != -1){
	char buf[64];
	read(fd, buf,63);
	buf[63]='\0'; //Safety cap
	write(1, "Kernel Info: ", 13);
	write(1, buf, 64);
	close(fd);
     }*/
    static void probe_system() {
	//Open the virtual kernel version file
       int fd = open("/proc/version", O_RDONLY);
       if (fd != -1) {
          char buf[256];
         //Read the kernel string into our buffer
        ssize_t bytes = read(fd, buf, sizeof(buf) - 1);
       if (bytes > 0) {
          buf[bytes]='\0'; //Null-terminate the string
         tiny_putstr("System Kernel: ");
         tiny_putstr(buf);
         tiny_putstr("\n");
     }
    close(fd);
   } else {
        tiny_putstr("Error: Could not access /proc/version\n");
   }
}
#endif

