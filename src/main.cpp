#include "../include/terminal.cpp"
#include "../include/input.cpp"
#include "../include/output.cpp"

int main() {
    enableRawMode();

    while (1) {
        editorRefreshScreen();
        editorProcessKeypress();
    }    
    return 0;
}
