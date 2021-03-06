/*  _______         ____    __         ___    ___
 * \    _  \       \    /  \  /       \   \  /   /       '   '  '
 *  |  | \  \       |  |    ||         |   \/   |         .      .
 *  |  |  |  |      |  |    ||         ||\  /|  |
 *  |  |  |  |      |  |    ||         || \/ |  |         '  '  '
 *  |  |  |  |      |  |    ||         ||    |  |         .      .
 *  |  |_/  /        \  \__//          ||    |  |
 * /_______/ynamic    \____/niversal  /__\  /____\usic   /|  .  . ibliotheque
 *                                                      /  \
 *                                                     / .  \
 * readany2.c - Code to detect and read any of the    / / \  \
 *              module formats supported by DUMB     | <  /   \_
 *              from an open file and do an initial  |  \/ /\   /
 *              run-through.                          \_  /  > /
 *                                                      | \ / /
 * by Christopher Snowhill.                             |  ' /
 *                                                       \__/
 */

#include "dumb.h"

DUH *dumb_read_any(DUMBFILE *f, int restrict_, int subsong) {
    DUH *duh = dumb_read_any_quick(f, restrict_, subsong);
    dumb_it_do_initial_runthrough(duh);
    return duh;
}
