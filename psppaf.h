/*
	Game Categories Light v 1.3
	Copyright (C) 2011, Bubbletune
	
	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <pspsdk.h>

void *sce_paf_private_malloc(int);
char *sce_paf_private_strcpy(char *, const char*);
char *sce_paf_private_strncpy(char *, const char*, int);
int sce_paf_private_snprintf(char *, int, const char *, ...);
int sce_paf_private_sprintf(char *, const char *, ...);
void *sce_paf_private_memset(void *, char, int);
void *sce_paf_private_memmove(void *, const void *, int);
void sce_paf_private_free(void *);
int sce_paf_private_strlen(char *);
void *sce_paf_private_memcpy(void *, void *, int);
int sce_paf_private_strncmp(char *, char *, int);
int sce_paf_private_strcmp(const char *, const char *);
unsigned int sce_paf_private_strtoul(char *nptr, void *endptr, int base);

wchar_t* scePafGetText(void *, char *);