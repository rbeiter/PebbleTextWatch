#pragma once
#include "string.h"

void time_to_words(int hours, int minutes, char* words, size_t length);
void time_to_4words(int month, int day, int hours, int minutes, char *line1, char *line2, char *line3, char *line4, size_t length);
