/*-------------------------------------------------------------------------
 *
 * copydir.h
 *	  Copy a directory.
 *
 * Portions Copyright (c) 1996-2024, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/storage/copydir.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef COPYDIR_H
#define COPYDIR_H

/*
 * Enumeration to denote copy modes.
 */
typedef enum CopyMethod
{
  COPY_METHOD_COPY,
  COPY_METHOD_COPY_FILE_RANGE,
} CopyMethod;

extern void copydir(const char *fromdir, const char *todir, bool recurse);
extern void copydir_with_method(const char *fromdir, const char *todir, bool recurse, CopyMethod copy_method);
extern void copy_file(const char *fromfile, const char *tofile);
extern void copy_file_by_range(const char *fromfile, const char *tofile);

#endif							/* COPYDIR_H */
