/*  =========================================================================
    zre_peer - peer to a ZyRE network

    -------------------------------------------------------------------------
    Copyright (c) 1991-2012 iMatix Corporation <www.imatix.com>
    Copyright other contributors as noted in the AUTHORS file.

    This file is part of ZyRE, the ZeroMQ Realtime Experience framework:
    http://zyre.org.

    This is free software; you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation; either version 3 of the License, or (at
    your option) any later version.

    This software is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this program. If not, see
    <http://www.gnu.org/licenses/>.
    =========================================================================
*/

#ifndef __ZRE_PEER_H_INCLUDED__
#define __ZRE_PEER_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _zre_peer_t zre_peer_t;

//  Constructor
zre_peer_t *
    zre_peer_new (uuid_t uuid, char *uuid_str);

//  Destructor
void
    zre_peer_destroy (zre_peer_t **self_p);

//  Return peer UUID blob
byte *
    zre_peer_uuid (zre_peer_t *self);
    
//  Return peer UUID string
char *
    zre_peer_uuid_str (zre_peer_t *self);
    
//  Register activity at peer
void
    zre_peer_is_alive (zre_peer_t *self);
    
//  Return peer expiry time
int64_t
    zre_peer_expires_at (zre_peer_t *self);

#ifdef __cplusplus
}
#endif

#endif