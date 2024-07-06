#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

using namespace std;
using namespace System;

// Configuration functions and basic utilities

/**
 * @brief Configure initial console settings.
 */
void Settings_();

/**
 * @brief Waits for the user to press a key.
 */
void WaitKey_();

/**
 * @brief Resize the console screen.
 *
 * @param _width The new width of the console screen.
 * @param _height The new height of the console screen.
 */
void SizeScreen_(int _width, int _height);

/**
 * @brief Clean the console screen.
 */
void ClearScreen_();

// Funciones de generación aleatoria

/**
 * @brief Generates a random integer in a given range.
 *
 * @param _min Minimum value of the range.
 * @param _max Maximum value of the range.
 * @return A random integer between _min and _max.
 */
int IntRandom_(int _min, int _max);

/**
 * @brief Generates a random character in a given range.
 *
 * @param _min Minimum character of the range.
 * @param _max Maximum character of the range.
 * @return A random character between _min and _max.
 */
char CharRandom_(char _min, char _max);

// Color and display functions

/**
 * @brief Change the font color in the console.
 *
 * @param _color Color code.
 */
void FontColor_(int _color);

/**
 * @brief Prints a character with a specific color.
 *
 * @param _c Character to print.
 * @param _color Color code.
 */
void CharColor_(char _c, int _color);

/**
 * @brief Prints a string of characters with a specific color.
 *
 * @param _s String to print.
 * @param _color Color code.
 */
void StringColor_(string _s, int _color);

/**
 * @brief Moves the cursor to a specific position in the console.
 *
 * @param _x X coordinate.
 * @param _y Y coordinate.
 */
void Show_(int _x, int _y);

/**
 * @brief Prints a character at a specific position.
 *
 * @param _x X coordinate.
 * @param _y Y coordinate.
 * @param _c Character to print.
 */
void ShowChar_(int _x, int _y, char _c);

/**
 * @brief Prints a string of characters at a specific position.
 *
 * @param _x X coordinate.
 * @param _y Y coordinate.
 * @param _s String to print.
 */
void ShowString_(int _x, int _y, string _s);

/**
 * @brief Move the cursor and change the font color.
 *
 * @param _x X coordinate.
 * @param _y Y coordinate.
 * @param _color Color code.
 */
void ShowColor_(int _x, int _y, int _color);

/**
 * @brief Prints a character at a specific position and color.
 *
 * @param _x X coordinate.
 * @param _y Y coordinate.
 * @param _c Character to print.
 * @param _color Color code.
 */
void ShowCharColor_(int _x, int _y, char _c, int _color);

/**
 * @brief Prints a string of characters at a specific position and color.
 *
 * @param _x X coordinate.
 * @param _y Y coordinate.
 * @param _s String to print.
 * @param _color Color code.
 */
void ShowStringColor_(int _x, int _y, string _s, int _color);

// Logic and processing functions

/**
 * @brief Determines if a number is prime.
 *
 * @param _n Number to evaluate.
 * @return true if the number is prime.
 * @return false otherwise.
 */
bool PrimeNumber_(int _n);

/**
 * @brief Sorts an array of integers using the bubble algorithm.
 *
 * @param _arr Array of integers.
 * @param _n Number of elements in the array.
 * @param _order true to sort in ascending order, false for descending.
 */
void BubbleSort_(int* _arr, int _n, bool _order);

/**
 * @brief Displays the contents of an array of integers.
 *
 * @param _arr Array of integers.
 * @param _n Number of elements in the array.
 */
void ShowBubble_(int* _arr, int _n);

/**
 * @brief Draws a table in the console.
 *
 * @param _numCellsHorizontal Number of horizontal cells.
 * @param _numCellsVertical Number of vertical cells.
 * @param _cellWidth Width of each cell.
 * @param _cellHeight Height of each cell.
 * @param _color Code for the color of the table.
 * @param _x Initial X coordinate.
 * @param _y Initial Y coordinate.
 */
void DrawTable_(int _numCellsHorizontal, int _numCellsVertical, int _cellWidth, int _cellHeight, int _color, int _x, int _y);

#endif