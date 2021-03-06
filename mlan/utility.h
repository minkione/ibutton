/*
 * Copyright (c) 2002  Dustin Sallings <dustin@spy.net>
 *
 * This file deals with stuff that's missing on some systems.
 */

#ifndef UTILITY_H
#define UTILITY_H 1

/* Need a uchar */
typedef unsigned char uchar;

#if !defined(HAVE_VSNPRINTF)
# if defined(HAVE_VSPRINTF)
#  define vsnprintf(a, b, c, d) vsprintf(a, c, d)
# else
#  error No vsnprintf *OR* vsprintf?  Call your vendor.
# endif
#endif

/* If there's no snprintf, make one */
#if !defined(HAVE_SNPRINTF)
int snprintf(char *s, size_t n, const char *format, ...);
#endif

char *get_serial(uchar *serial);

#endif /* UTILITY_H */
