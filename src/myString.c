/*
 *  Author:         Adham Omar (adham-o)
 *  Description:    My own implementation of the C String Standard Library
 */

/* Includes */

#include "../include/myString.h"

/* Functions */

void *memchr(const void *str, int c, size_t n) {
    unsigned char _c = c;
    unsigned char *cptr = str;
    bool match_found = false;

    for (size_t iter_n = 0; iter_n < n; ++iter_n) {
        if (*cptr == _c) {
            match_found = true;
            break;
        }
        ++cptr;
    }

    if (match_found) {
        return cptr;
    }
    else {
        return NULL;
    }
}

int memcmp(const void *str1, const void *str2, size_t n) { 
    char res = 0;
    char *_str1 = (char *)str1;
    char *_str2 = (char *)str2;

    for (size_t iter_n = 0; iter_n < n; ++iter_n) {
        res = _str1[iter_n] - _str2[iter_n];
        if (res != 0) {
            break;
        }
    }

    return res;
}

#ifndef C99
void *memcpy(void *dest, const void *src, size_t n) {
    unsigned char *_dest = (unsigned char *)dest;
    unsigned char *_src = (unsigned char *)src;

    for (size_t iter_n = 0; iter_n < n; ++iter_n) {
        _dest[iter_n] = _src[iter_n];
    }

    return dest;
}
#else
void *memcpy(void *restrict dest, const void *restrict src, size_t n) {
    unsigned char *_dest = (unsigned char *)dest;
    unsigned char *_src = (unsigned char *)src;

    for (size_t iter_n = 0; iter_n < n; ++iter_n) {
        _dest[iter_n] = _src[iter_n];
    }

    return dest;
}
#endif

void *memmove(void *dest, const void *src, size_t n) {
    unsigned char *_dest = (unsigned char *)dest;
    unsigned char *_src = (unsigned char *)src;

    if (dest < src) {
        for (size_t iter_n = 0; iter_n < n; ++iter_n) {
            _dest[iter_n] = _src[iter_n];
        }
    }
    else {
        for (size_t iter_n = n-1; iter_n >= 0; --iter_n) {
            _dest[iter_n] = _src[iter_n];
        }
    }

    return dest;
}

void *memset(void *str, int c, size_t n) { /* TODO */ }
char *strcat(char *dest, const char *src) { /* TODO */ }
char *strncat(char *dest, const char *src, size_t n) { /* TODO */ }
char *strchr(const char *str, int c) { /* TODO */ }
int strcmp(const char *str1, const char *str2) { /* TODO */ }
int strncmp(const char *str1, const char *str2, size_t n) { /* TODO */ }
int strcoll(const char *str1, const char *str2) { /* TODO */ }
char *strcpy(char *dest, const char *src) { /* TODO */ }
char *strncpy(char *dest, const char *src, size_t n) { /* TODO */ }
size_t strcspn(const char *str1, const char *str2) { /* TODO */ }
char *strerror(int errnum) { /* TODO */ }
size_t strlen(const char *str) { /* TODO */ }
char *strpbrk(const char *str1, const char *str2) { /* TODO */ }
char *strrchr(const char *str, int c) { /* TODO */ }
char *strrchr(const char *str, int c) { /* TODO */ }
size_t strspn(const char *str1, const char *str2) { /* TODO */ }
char *strstr(const char *haystack, const char *needle) { /* TODO */ }
char *strtok(char *str, const char *delim) { /* TODO */ }
size_t strxfrm(char *dest, const char *src, size_t n) { /* TODO */ }