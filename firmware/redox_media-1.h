/*
Copyright 2025 FEIT Assistive Keyboard Team <milanoskim@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "quantum.h"

#define USE_I2C

#define XXX KC_NO

/*
 * ┌───┬───┬───┬───┬───┬───┬───┐           ┌───┬───┬───┬───┬───┬───┬───┐
 * │00 │01 │02 │03 │04 │05 │06 │           │58 │57 │56 │55 │54 │53 │52 │
 * ├───┼───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┼───┤
 * │10 │11 │12 │13 │14 │15 │16 │           │68 │67 │66 │65 │64 │63 │62 │
 * ├───┼───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┴───┤
 * │20 │21 │22 │23 │24 │25 │26 │           │78 │77 │76 │75 │74 │73     │
 * ├───┴───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───────┼───┐
 * │30     │32 │33 │34 │35 │36 │           │88 │87 │86 │85 │84 │83     │81 │
 * └───┬───┼───┼───┼───┴───┴───┤           ├───┴───┴───┼───┼───┼───┬───┼───┼───┐
 *     │41 │42 │43 │44         │           │98         │95 │94 │93 │92 │91 │90 │
 *     └───┴───┴───┴───────────┘           └───────────┴───┴───┴───┘───┘───┘───┘
 *
 *
 */

// rows are doubled
// clang-format off
// K<row><column>
#define LAYOUT( \
  K00, K01, K02, K03, K04, K05, K06,      K58, K57, K56, K55, K54, K53, K52,            \
  K10, K11, K12, K13, K14, K15, K16,      K68, K67, K66, K65, K64, K63, K62,            \
  K20, K21, K22, K23, K24, K25, K26,      K78, K77, K76, K75, K74, K73,                 \
  K30,      K32, K33, K34, K35, K36,      K88, K87, K86, K85, K84, K83,      K81,       \
       K41, K42, K43, K44,                K98,           K95, K94, K93, K92, K91, K90   \
) \
{ \
    { K00, K01, K02, K03, K04, K05, K06 }, \
    { K10, K11, K12, K13, K14, K15, K16 }, \
    { K20, K21, K22, K23, K24, K25, K26 }, \
    { K30, XXX, K32, K33, K34, K35, K36 }, \
    { XXX, K41, K42, K43, K44, XXX, XXX }, \
\
    { XXX, XXX, K52, K53, K54, K55, K56, K57, K58 }, \
    { XXX, XXX, K62, K63, K64, K65, K66, K67, K68 }, \
    { XXX, XXX, XXX, K73, K74, K75, K76, K77, K78 }, \
    { XXX, K81, XXX, K83, K84, K85, K86, K87, K88 }, \
    { K90, K91, K92, K93, K94, K95, XXX, XXX, K98 }, \
}
