#ifndef INPUT_HPP
#define INPUT_HPP

/**
 * @brief Read in the key that is typed by the user and return it.
 * 
 * @return The character typed by the user.
 */
char editorReadKey();

/**
 * @brief Process the char returned by editorReadKey() and check
 * if it is Ctrl + q. If so, exit the program.
 */
void editorProcessKeypress();

#endif