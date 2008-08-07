/*
   Copyright (C) 2003-2008 FreeIPMI Core Team

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

#ifndef _IPMI_CHASSIS_CMDS_API_H
#define _IPMI_CHASSIS_CMDS_API_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <freeipmi/api/ipmi-api.h>
#include <freeipmi/fiid/fiid.h>

int8_t ipmi_cmd_get_chassis_capabilities (ipmi_ctx_t ctx, 
                                          fiid_obj_t obj_cmd_rs);

int8_t ipmi_cmd_get_chassis_status (ipmi_ctx_t ctx, 
                                    fiid_obj_t obj_cmd_rs);

int8_t ipmi_cmd_chassis_control (ipmi_ctx_t ctx,
                                 uint8_t chassis_control,
                                 fiid_obj_t obj_cmd_rs);

int8_t ipmi_cmd_chassis_identify (ipmi_ctx_t ctx,
                                  uint8_t *identify_interval,
                                  uint8_t *force_identify,
                                  fiid_obj_t obj_cmd_rs);

int8_t ipmi_cmd_set_front_panel_enables (ipmi_ctx_t ctx,
                                         uint8_t disable_power_off_button_for_power_off_only,
                                         uint8_t disable_reset_button,
                                         uint8_t disable_diagnostic_interrupt_button,
                                         uint8_t disable_standby_button_for_entering_standby,
                                         fiid_obj_t obj_cmd_rs);

int8_t ipmi_cmd_set_power_restore_policy (ipmi_ctx_t ctx, 
                                          uint8_t power_restore_policy, 
                                          fiid_obj_t obj_cmd_rs);

int8_t ipmi_cmd_set_power_cycle_interval (ipmi_ctx_t ctx,
                                          uint8_t interval,
                                          fiid_obj_t obj_cmd_rs);

int8_t ipmi_cmd_get_system_restart_cause (ipmi_ctx_t ctx, 
                                          fiid_obj_t obj_cmd_rs);

int8_t ipmi_cmd_set_system_boot_options(ipmi_ctx_t ctx,
                                        uint8_t parameter_selector,
                                        uint8_t *configuration_parameter_data,
                                        uint8_t data_len,
                                        fiid_obj_t obj_cmd_rs);

int8_t ipmi_cmd_set_system_boot_options_set_in_progress(ipmi_ctx_t ctx, 
                                                        uint8_t value,
                                                        fiid_obj_t obj_cmd_rs);

int8_t ipmi_cmd_set_system_boot_options_boot_BMC_boot_flag_valid_bit_clearing (ipmi_ctx_t ctx,
                                                                               uint8_t dont_clear_on_power_up,
                                                                               uint8_t dont_clear_on_pushbutton_reset,
                                                                               uint8_t dont_clear_on_watchdog_timeout,
                                                                               uint8_t dont_clear_on_chassis_control,
                                                                               uint8_t dont_clear_on_PEF,
                                                                               fiid_obj_t obj_cmd_rs);

int8_t ipmi_cmd_set_system_boot_options_boot_flags (ipmi_ctx_t ctx,
                                                    uint8_t bios_boot_type,
                                                    uint8_t boot_flags_persistent,
                                                    uint8_t boot_flags_valid,
                                                    uint8_t lock_out_reset_button,
                                                    uint8_t screen_blank,
                                                    uint8_t boot_device,
                                                    uint8_t lock_keyboard,
                                                    uint8_t cmos_clear,
                                                    uint8_t console_redirection,
                                                    uint8_t lock_out_sleep_button,
                                                    uint8_t user_password_bypass,
                                                    uint8_t force_progress_event_traps,
                                                    uint8_t firmware_bios_verbosity,
                                                    uint8_t lock_out_via_power_button,
                                                    uint8_t bios_mux_control_override,
                                                    uint8_t bios_shared_mode_override,
                                                    fiid_obj_t obj_cmd_rs);

int8_t ipmi_cmd_set_system_boot_options_boot_info_acknowledge (ipmi_ctx_t ctx,
                                                               uint8_t *bios_or_post_handled_boot_info,
                                                               uint8_t *os_loader_handled_boot_info,
                                                               uint8_t *os_or_service_partition_handled_boot_info,
                                                               uint8_t *sms_handled_boot_info,
                                                               uint8_t *oem_handled_boot_info,
                                                               fiid_obj_t obj_cmd_rs);

int8_t ipmi_cmd_get_system_boot_options (ipmi_ctx_t ctx,
                                         uint8_t parmeter_selector,
                                         uint8_t set_selector,
                                         uint8_t block_selector,
                                         fiid_obj_t obj_cmd_rs);

int8_t ipmi_cmd_get_system_boot_options_BMC_boot_flag_valid_bit_clearing (ipmi_ctx_t ctx,
                                                                          uint8_t set_selector,
                                                                          uint8_t boot_selector,
                                                                          fiid_obj_t obj_cmd_rs);

int8_t ipmi_cmd_get_system_boot_options_boot_flags (ipmi_ctx_t ctx,
                                                    uint8_t set_selector,
                                                    uint8_t boot_selector,
                                                    fiid_obj_t obj_cmd_rs);

int8_t ipmi_cmd_get_power_on_hours_counter (ipmi_ctx_t ctx,
                                            fiid_obj_t obj_cmd_rs);

#ifdef __cplusplus
}
#endif

#endif
