#ifndef _CTF_LOADER_H_
#define _CTF_LOADER_H_ 1
/* 
  Copyright (C) 2008 Arnaldo Carvalho de Melo <acme@redhat.com>

  This program is free software; you can redistribute it and/or modify it
  under the terms of version 2 of the GNU General Public License as
  published by the Free Software Foundation.
*/

#include <stdbool.h>

struct cus;
struct argp;

int ctf__load(struct cus *self, struct argp *argp, int argc, char *argv[],
	      bool parsed);

#endif /* _CTF_LOADER_H_ */
