/*
    utility.h:

    Copyright (C) 2005 Istvan Varga

    This file is part of Csound.

    The Csound Library is free software; you can redistribute it
    and/or modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    Csound is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with Csound; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
    02111-1307 USA
*/

#ifndef CSOUND_CS_UTIL_H
#define CSOUND_CS_UTIL_H

#ifdef __cplusplus
extern "C" {
#endif

  PUBLIC int csoundAddUtility(CSOUND *, const char *name,
                              int (*UtilFunc)(CSOUND *, int, char**));

  PUBLIC int csoundRunUtility(CSOUND *, const char *name,
                              int argc, char **argv);

  /**
   * Returns a NULL terminated list of registered utility names.
   * The caller is responsible for freeing the returned array with free(),
   * however, the names should not be freed.
   * The return value may be NULL in case of an error.
   */
  PUBLIC char **csoundListUtilities(CSOUND *);

  /**
   * Set description text for the specified utility.
   * Returns zero on success.
   */
  PUBLIC int csoundSetUtilityDescription(CSOUND *, const char *utilName,
                                                    const char *utilDesc);

  /**
   * Get utility description.
   * Returns NULL if the utility was not found, or it has no description,
   * or an error occured.
   */
  PUBLIC char *csoundGetUtilityDescription(CSOUND *, const char *utilName);

#ifdef __cplusplus
};
#endif

#endif      /* CSOUND_CS_UTIL_H */

