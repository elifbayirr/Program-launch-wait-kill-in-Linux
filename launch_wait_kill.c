#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

int main() {

		
		system("gedit");  //system call gedit editor
		
		
		system("pidof gedit");  //take gedit'd pid 
		
		
		sleep(3); //process (gedit) sleep for 3 second
		
		system("kill -9 $(pidof gedit)"); // then,kill gedit
	
	
	return 0;
}
