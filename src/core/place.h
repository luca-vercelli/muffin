/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*- */

/* Muffin window placement */

/* 
 * Copyright (C) 2001 Havoc Pennington
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street - Suite 500, Boston, MA
 * 02110-1335, USA.
 */

#ifndef META_PLACE_H
#define META_PLACE_H

#include "window-private.h"
#include "frame.h"

void meta_window_place (MetaWindow *window,
                        MetaFrameBorders *borders,
                        int         x,
                        int         y,
                        int        *new_x,
                        int        *new_y);

void
meta_window_get_real_coords (MetaWindow        *window,
                             int               *rx,
                             int               *ry,
                             int               *rz,
                             int               *rw,
                             int               *rh,
                             double            *scale);

void
meta_window_calc_apparent_coords (MetaWindow  *window,
                                  int rx, int ry, int rz, int rw, int rh,
                                  int *x,
                                  int *y,
                                  int *w,
                                  int *h,
                                  double *scale);
                                  
#endif
