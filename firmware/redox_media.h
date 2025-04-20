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

#ifdef USE_I2C

#define XXX KC_NO

/*
 * ┌───┬───┬───┬───┬───┬───┬───┐           ┌───┬───┬───┬───┬───┬───┬───┐
 * │00 │01 │02 │03 │04 │05 │06 │           │56 │55 │54 │53 │52 │51 │50 │
 * ├───┼───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┼───┤
 * │10 │11 │12 │13 │14 │15 │16 │           │66 │65 │64 │63 │62 │61 │60 │
 * ├───┼───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┴───┤
 * │20 │21 │22 │23 │24 │25 │26 │           │75 │74 │73 │72 │71 │70     │
 * ├───┴───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───────┼───┐
 * │30     │31 │32 │33 │34 │35 │           │86 │85 │84 │83 │82 │81     │80 │
 * └───┬───┼───┼───┼───┴───┴───┤           ├───┴───┴───┼───┼───┼───┬───┼───┼───┐
 *     │40 │41 │42 │43         │           │96         │95 │94 │93 │92 │91 │90 │
 *     └───┴───┴───┴───────────┘           └───────────┴───┴───┴───┘───┘───┘───┘
 *
 *
 */

// rows are doubled
// clang-format off
#define LAYOUT( \
  K00, K01, K02, K03, K04, K05, K06,      K56, K55, K54, K53, K52, K51, K50,            \
  K10, K11, K12, K13, K14, K15, K16,      K66, K65, K64, K63, K62, K61, K60,            \
  K20, K21, K22, K23, K24, K25, K26,      K75, K74, K73, K72, K71, K70,                 \
  K30,      K31, K32, K33, K34, K35,      K86, K85, K84, K83, K82, K81,      K80,       \
       K40, K41, K42, K43,                K96,           K95, K94, K93, K92, K91, K90,  \
) \
{ \
    { K00, K01, K02, K03, K04, K05, K06 }, \
    { K10, K11, K12, K13, K14, K15, K16 }, \
    { K20, K21, K22, K23, K24, K25, K26 }, \
    { K30, K31, K32, K33, K34, K35, XXX }, \
    { K40, K41, K42, K43, XXX, XXX, XXX }, \
\
    { K50, K51, K52, K53, K54, K55, K56 }, \
    { K60, K61, K62, K63, K64, K65, K66 }, \
    { K70, K71, K72, K73, K74, K75, XXX }, \
    { K80, K81, K82, K83, K84, K85, K86 }, \
    { K90, K91, K92, K93, K94, K95, K96 }, \
}
