#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() {
    pid_t pid;
    int status;
    if (pid == -1) {  
        perror("fork");
        exit(EXIT_FAILURE);
    }
    if (pid == 0) {  
        printf("Child process with pid %d\n", getpid());
        exit(EXIT_SUCCESS);
    } else { 
        printf("Parent process with pid %d created child process with pid %d\n", getpid(), pid);
        printf("Child process terminated with status %d\n", status);
    }
    return 0;
}
