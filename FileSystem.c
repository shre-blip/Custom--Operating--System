#define MAX_FILES 100

typedef struct {
    char name[30];
    char content[512];
} File;

File file_system[MAX_FILES];

void create_file(const char *name, const char *content) {
    for (int i = 0; i < MAX_FILES; i++) {
        if (file_system[i].name[0] == '\0') {
            strncpy(file_system[i].name, name, sizeof(file_system[i].name));
            strncpy(file_system[i].content, content, sizeof(file_system[i].content));
            break;
        }
    }
}

void read_file(const char *name) {
    for (int i = 0; i < MAX_FILES; i++) {
        if (strcmp(file_system[i].name, name) == 0) {
            printf("Content of %s: %s\n", name, file_system[i].content);
            return;
        }
    }
    printf("File not found!\n");
}
