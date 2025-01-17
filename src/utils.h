#ifndef DPDKCAP_UTILS_H
#define DPDKCAP_UTILS_H

#include <stdint.h>

/**
 * @brief Converts bytes to a human-readable format.
 *
 * @param bytes The number of bytes to be formatted.
 * @return A string representing the formatted bytes.
 */
char *bytes_format(uint64_t);

/**
 * @brief Formats an unsigned long integer to a human-readable format.
 *
 * @param nb The number to be formatted.
 * @return A string representing the formatted unsigned long integer.
 */
char *ul_format(uint64_t);

/**
 * @brief Replaces occurrences of a substring with another substring in a given string.
 *
 * @param src The source string in which to perform the replacement.
 * @param find The substring to be replaced.
 * @param replace The substring to replace 'find' with.
 * @return A pointer to the first occurrence of the 'find' substring in the 'src' string, or NULL if not found.s
 */
char *str_replace(const char *src, const char *find, const char *replace);

#endif
