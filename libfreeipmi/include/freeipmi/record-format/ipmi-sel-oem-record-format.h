/*
 * Copyright (C) 2003-2015 FreeIPMI Core Team
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

#ifndef IPMI_SEL_OEM_RECORD_FORMAT_H
#define IPMI_SEL_OEM_RECORD_FORMAT_H

#ifdef __cplusplus
extern "C" {
#endif

/******************************************* 
 * Intel                                   *
 *******************************************/

/*
 * Intel Windmill
 * (Quanta Winterfell)
 * (Wiwynn Windmill)
 */

#define IPMI_SEL_OEM_INTEL_WINDMILL_DEVICE_ID_INDEX_LSB_INDEX 10
#define IPMI_SEL_OEM_INTEL_WINDMILL_DEVICE_ID_INDEX_MSB_INDEX 11

#define IPMI_SEL_OEM_INTEL_WINDMILL_DEVICE_IDENTIFICATION_NUMBER_INDEX_LSB_INDEX 12
#define IPMI_SEL_OEM_INTEL_WINDMILL_DEVICE_IDENTIFICATION_NUMBER_INDEX_MSB_INDEX 13

#define IPMI_SEL_OEM_INTEL_WINDMILL_DEVICE_IDENTIFICATION_NUMBER_DEVICE_0_IN_DMI_MODE       0x3C00
#define IPMI_SEL_OEM_INTEL_WINDMILL_DEVICE_IDENTIFICATION_NUMBER_DMI_PORT_IN_PCIE_MODE      0x3C01
#define IPMI_SEL_OEM_INTEL_WINDMILL_DEVICE_IDENTIFICATION_NUMBER_PORT_1A                    0x3C02
#define IPMI_SEL_OEM_INTEL_WINDMILL_DEVICE_IDENTIFICATION_NUMBER_PORT_1B                    0x3C03
#define IPMI_SEL_OEM_INTEL_WINDMILL_DEVICE_IDENTIFICATION_NUMBER_PORT_2A                    0x3C04
#define IPMI_SEL_OEM_INTEL_WINDMILL_DEVICE_IDENTIFICATION_NUMBER_PORT_2B                    0x3C05
#define IPMI_SEL_OEM_INTEL_WINDMILL_DEVICE_IDENTIFICATION_NUMBER_PORT_2C                    0x3C06
#define IPMI_SEL_OEM_INTEL_WINDMILL_DEVICE_IDENTIFICATION_NUMBER_PORT_2D                    0x3C07
#define IPMI_SEL_OEM_INTEL_WINDMILL_DEVICE_IDENTIFICATION_NUMBER_PORT_3A_IN_PCIE_MODE       0x3C08
#define IPMI_SEL_OEM_INTEL_WINDMILL_DEVICE_IDENTIFICATION_NUMBER_PORT_3B                    0x3C09
#define IPMI_SEL_OEM_INTEL_WINDMILL_DEVICE_IDENTIFICATION_NUMBER_PORT_3C                    0x3C0A
#define IPMI_SEL_OEM_INTEL_WINDMILL_DEVICE_IDENTIFICATION_NUMBER_PORT_3D                    0x3C0B
#define IPMI_SEL_OEM_INTEL_WINDMILL_DEVICE_IDENTIFICATION_NUMBER_IIO_NTB_SECONDARY_ENDPOINT 0x3C0F

#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_INDEX_LSB_INDEX 14
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_INDEX_MSB_INDEX 15

#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_RECEIVER_ERROR                                                                 0x70
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_BAD_TLP                                                                        0x71
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_BAD_DLLP                                                                       0x72
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_REPLAY_TIMEOUT                                                                 0x73
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_REPLAY_NUMBER_ROLLOVER                                                         0x74
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_ADVISORY_NON_FATAL_ERROR                                                       0x78
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_RECEIVED_ERR_COR_MESSAGE_FROM_DOWNSTREAM_DEVICE                                0x75
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_PCI_EXPRESS_LINK_BANDWIDTH_CHANGED                                             0x76
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_RECEIVED_UNSUPPORTED_REQUEST_COMPLETION_STATUS_FROM_DOWNSTREAM_DEVICE          0x80
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_SENT_A_PCI_EXPRESS_UNSUPPORTED_REQUEST_RESPOND_ON_INBOUND_REQUEST              0x81
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_RECEIVED_COMPLETER_ABORT_COMPLETION_STATUS_FROM_DOWNSTREAM_DEVICE              0x82
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_SENT_A_PCI_EXPRESS_COMPLETER_ABORT_CONDITION_ON_INBOUND_REQUEST                0x83
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_COMPLETION_TIMEOUT_ON_NP_TRANSACTION_OUTSTANDING_ON_PCI_EXPRESS_DMI            0x84
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_RECEIVED_PCI_EXPRESS_POISONED_TLP                                              0x85
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_RECEIVED_PCI_EXPRESS_UNEXPECTED_COMPLETION                                     0x86
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_PCI_EXPRESS_FLOW_CONTROL_PROTOCOL_ERROR                                        0x87
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_RECEIVED_ERR_NONFATAL_MESSAGE_FROM_DOWNSTREAM_DEVICE                           0x88
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_RECEIVED_A_REQUEST_FROM_A_DOWNSTREAM_COMPONENT_THAT_IS_UNSUPPORTED             0x89
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_RECEIVED_A_REQUEST_FROM_A_DOWNSTREAM_COMPONENT_THAT_IS_TO_BE_COMPLETER_ABORTED 0x8A
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_ACS_VIOLATION                                                                  0x8B
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_PCI_EXPRESS_MALFORMED_TLP                                                      0x90 
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_PCI_EXPRESS_DATA_LINK_PROTOCOL_ERROR                                           0x91
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_PCI_EXPRESS_RECEIVER_OVERFLOW                                                  0x92
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_SURPRISE_DOWN                                                                  0x93
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_RECEIVED_ERR_FATAL_MESSAGE_FROM_DOWNSTREAM_DEVICE                              0x94
#define IPMI_SEL_OEM_INTEL_WINDMILL_ERROR_CODE_OUTBOUND_SWITCH_HEADER_QUEUE_PARITY_ERROR                                      0x97

#ifdef __cplusplus
}
#endif

#endif /* IPMI_SEL_OEM_RECORD_FORMAT_H */
