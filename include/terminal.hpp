#ifndef TERMINAL_HPP
#define TERMINAL_HPP

/**
 * @brief Safely exits the text-editor.
 * 
 * @param s The error message to be printed.
 */
void die(const char *s);

/**
 * @brief Reverts the terminal to it's original state before 
 * enableRawMode() was called. If unable to successfully, die().
 */
void disableRawMode();

/**
 * @brief Convert terminal which is defaulted to canonical mode to 
 * raw mode. This allows for information to be sent to terminal 
 * byte-by-byte rather than at every '\n'.
 */
void enableRawMode();

#endif