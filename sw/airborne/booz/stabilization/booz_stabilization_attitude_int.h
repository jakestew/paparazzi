/*
 * $Id: booz_stabilization_attitude.h 3794 2009-07-24 22:01:51Z poine $
 *  
 * Copyright (C) 2008-2009 Antoine Drouin <poinix@gmail.com>
 *
 * This file is part of paparazzi.
 *
 * paparazzi is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * paparazzi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with paparazzi; see the file COPYING.  If not, write to
 * the Free Software Foundation, 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA. 
 */

#ifndef BOOZ_STABILIZATION_ATTITUDE_INT_H
#define BOOZ_STABILIZATION_ATTITUDE_INT_H

#include "math/pprz_algebra_int.h"

#include "airframe.h"

extern struct Int32Vect3  booz_stabilization_igain;
extern struct Int32Vect3  booz_stabilization_pgain;
extern struct Int32Vect3  booz_stabilization_dgain;
extern struct Int32Vect3  booz_stabilization_ddgain;
extern struct Int32Eulers booz_stabilization_att_sum_err;

extern int32_t booz_stabilization_att_fb_cmd[COMMANDS_NB];
extern int32_t booz_stabilization_att_ff_cmd[COMMANDS_NB];

#endif /* BOOZ_STABILIZATION_ATTITUDE_INT_H */
