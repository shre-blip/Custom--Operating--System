#define MAX_PROCESSES 10

typedef struct {
    int pid;       // Process ID
    int priority;  // Process priority
    // Other process attributes
} Process;

Process process_table[MAX_PROCESSES];

void schedule() {
    for (int i = 0; i < MAX_PROCESSES; i++) {
        if (process_table[i].pid != 0) {
            // Simulate process execution
            printf("Running process %d\n", process_table[i].pid);
        }
    }
}
