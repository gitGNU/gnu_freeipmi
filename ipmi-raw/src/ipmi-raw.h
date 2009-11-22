/*
  Copyright (C) 2005-2009 FreeIPMI Core Team

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2, or (at your option)
  any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software Foundation,
  Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA.
*/

#ifndef _IPMI_RAW_H
#define _IPMI_RAW_H

#include <freeipmi/freeipmi.h>

#include "tool-cmdline-common.h"
#include "pstdout.h"

enum ipmi_raw_argp_option_keys
  {
    CHANNEL_NUMBER_KEY = 160,
    SLAVE_ADDRESS_KEY = 161,
    CMD_FILE_KEY = 162,
  };

struct ipmi_raw_arguments
{
  struct common_cmd_args common;
  struct hostrange_cmd_args hostrange;
  int channel_number;
  uint8_t channel_number_arg;
  int slave_address;
  uint8_t slave_address_arg;
  char *cmd_file;
  long arg_max;
  uint8_t *cmd;
  int cmd_length;
};

typedef struct ipmi_raw_prog_data
{
  char *progname;
  struct ipmi_raw_arguments *args;
} ipmi_raw_prog_data_t;

typedef struct ipmi_raw_state_data
{
  ipmi_raw_prog_data_t *prog_data;
  ipmi_ctx_t ipmi_ctx;
  pstdout_state_t pstate;
} ipmi_raw_state_data_t;

#endif
