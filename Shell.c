#include <stdio.h>
#include <string.h>

#define CMD_SIZE 100

void shell() {
    char command[CMD_SIZE];
    while (1) {
        printf("myos> ");
        fgets(command, CMD_SIZE, stdin);
        command[strcspn(command, "\n")] = 0; // Remove newline

        if (strcmp(command, "exit") == 0) {
            break;
        } else if (strncmp(command, "create ", 7) == 0) {
            char *name = command + 7;
            create_file(name, "Sample content");
        } else if (strncmp(command, "read ", 5) == 0) {
            char *name = command + 5;
            read_file(name);
        } else {
            printf("Unknown command: %s\n", command);
        }
    }
}

int main() {
    kernel_main();
    shell();
    return 0;
}
