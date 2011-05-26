/*
 * activate.h
 * Functions to fetch activation records from Apple's servers
 *
 * Copyright (c) 2010 Joshua Hill. All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef ACTIVATE_H
#define ACTIVATE_H

#include <plist/plist.h>
#include <libimobiledevice/lockdown.h>

extern int activate_fetch_record(lockdownd_client_t client, plist_t* record, char* cust_imei, char* cust_imsi, char* cust_iccid, char* cust_serial_num);
extern int do_activation(lockdownd_client_t client, plist_t activation_record);

extern void deactivate_device(lockdownd_client_t client);

#endif
