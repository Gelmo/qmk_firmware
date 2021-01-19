/* Copyright 2020 QMK
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * This file was auto-generated by:
 *    `qmk chibios-confmigrate -i keyboards/bt66tech/bt66tech60/chconf.h -r platforms/chibios/common/configs/chconf.h`
 */

#pragma once

#define CH_CFG_ST_TIMEDELTA 0

#define CH_CFG_USE_TM FALSE

#define CH_CFG_USE_CONDVARS_TIMEOUT FALSE

#define CH_CFG_USE_MEMCORE TRUE

#define CH_CFG_USE_MEMPOOLS FALSE

#define CH_CFG_USE_OBJ_FIFOS FALSE

#define CH_CFG_USE_PIPES FALSE

#define CH_CFG_USE_DYNAMIC FALSE

#include_next <chconf.h>

