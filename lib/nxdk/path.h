// SPDX-License-Identifier: MIT

// SPDX-FileCopyrightText: 2019 Stefan Schmidt
// SPDX-FileCopyrightText: 2020 Lucas Jansson

#ifndef __NXDK_PATH_H__
#define __NXDK_PATH_H__

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __cplusplus
#include <stdbool.h>
#endif

/**
 * Retrieves the path to the currently running XBE as an NT-style path
 * (e.g. like \Device\CdRom0\default.xbe).
 * @param path Address of the buffer (with at least MAX_PATH length) where the path will be stored
 */
void nxGetCurrentXbeNtPath (char *path);

#ifdef __cplusplus
}
#endif

#endif
