#include <stdio.h>
#include <string.h>

void corrupt_stack() {
    char buffer[10];
    // Intentionally write more data than the buffer can hold
    strcpy(buffer, "This string is way too long for the buffer");
}

int main() {
    corrupt_stack();
    printf("If you see this, the stack was not corrupted enough to crash.\n");
    return 0;
}
