/*
 *  Original work: Copyright (c) 2014, Oculus VR, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  RakNet License.txt file in the licenses directory of this source tree. An additional grant 
 *  of patent rights can be found in the RakNet Patents.txt file in the same directory.
 *
 *
 *  Modified work: Copyright (c) 2016-2018, SLikeSoft UG (haftungsbeschrankt)
 *
 *  This source code was modified by SLikeSoft. Modifications are licensed under the MIT-style
 *  license found in the license.txt file in the root directory of this source tree.
 */

#define NOMINMAX

#if   defined (WINDOWS_STORE_RT)
#include <windows.h>
#include <winsock.h>
#elif defined (_WIN32)
#include <winsock2.h>
#include <windows.h>
#include <Wincrypt.h> // used for CryptProtectMemory, CryptUnprotectMemory, CRYPTPROTECTMEMORY_BLOCK_SIZE
#include <ws2tcpip.h>
#include <IPHlpApi.h> // used for GetAdaptersAddresses()
#pragma comment(lib, "IPHLPAPI.lib") // used for GetAdaptersAddresses()

// Must always include Winsock2.h before windows.h
// or else:
// winsock2.h(99) : error C2011: 'fd_set' : 'struct' type redefinition
// winsock2.h(134) : warning C4005: 'FD_SET' : macro redefinition
// winsock.h(83) : see previous definition of 'FD_SET'
// winsock2.h(143) : error C2011: 'timeval' : 'struct' type redefinition
// winsock2.h(199) : error C2011: 'hostent' : 'struct' type redefinition
// winsock2.h(212) : error C2011: 'netent' : 'struct' type redefinition
// winsock2.h(219) : error C2011: 'servent' : 'struct' type redefinition 


#if _MSC_VER < 1600
#include "nullptr_emulation.h"
#endif


#endif
