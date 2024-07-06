#pragma once
#ifndef ENUMS_H
#define ENUMS_H

 /**
 * @enum MyConsoleColor
 * @brief Color enumeration for the console.
 *
 *This listing defines various colors that can be used
 *to change the font color in the console.
  */
enum MyConsoleColor {
    Black = 0,                            // Black color, default background
    DarkBlue = 1,                   // Dark blue color, highlighting
    DarkGreen = 2,              // Dark green color, success messages
    DarkCyan = 3,                 // Dark cyan color, blue-green combination
    DarkRed = 4,                    // Dark red color, error messages
    DarkMagenta = 5,        // Dark magenta color, red-blue combination
    DarkYellow = 6,             // Dark yellow color, warnings
    Gray = 7,                           // Gray color, general use
    DarkGray = 8,               // Dark gray color, darker neutral
    Blue = 9,                           // Blue color, informational messages
    Green = 10,                     // Green color, success indication
    Cyan = 11,                      // Cyan color, bright blue-green
    Red = 12,                           // Red color, error indication
    Magenta = 13,               // Magenta color, bright red-blue
    Yellow = 14,                    // Yellow color, warnings and alerts
    White = 15                      // White color, default text
};

#endif
