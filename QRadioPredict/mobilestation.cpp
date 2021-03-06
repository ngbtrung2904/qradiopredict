// Written by Adrian Musceac YO8RZZ at gmail dot com, started August 2013.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 2 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

#include "mobilestation.h"

MobileStation::MobileStation()
{
    id = 0;
    id_session = 0;
    name = "";
    longitude = 0.0;
    latitude = 0.0;
    current_latitude = 0.0;
    current_longitude = 0.0;
    heading_deg = 0.0;
    elevation_feet = 0.0;
    speed = 0.0;
    frequency = 140.0;
    tx_power_watt = 1.0;
    terrain_following = 1;
    created_on = 0;
}
