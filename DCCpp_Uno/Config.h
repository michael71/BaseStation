/**********************************************************************

Config.h
COPYRIGHT (c) 2013-2016 Gregg E. Berman

Part of DCC++ BASE STATION for the Arduino

with optional MDNS/Bonjour support

**********************************************************************/

/////////////////////////////////////////////////////////////////////////////////////
//
// DEFINE MOTOR_SHIELD_TYPE ACCORDING TO THE FOLLOWING TABLE:
//
//  0 = ARDUINO MOTOR SHIELD          (MAX 18V/2A PER CHANNEL)
//  1 = POLOLU MC33926 MOTOR SHIELD   (MAX 28V/3A PER CHANNEL)

#define MOTOR_SHIELD_TYPE   0

/////////////////////////////////////////////////////////////////////////////////////
//
// DEFINE NUMBER OF MAIN TRACK REGISTER

#define MAX_MAIN_REGISTERS 12

/////////////////////////////////////////////////////////////////////////////////////
//
// DEFINE COMMUNICATIONS INTERFACE
//
//  0 = Built-in Serial Port
//  1 = Arduino.cc Ethernet/SD-Card Shield
//  2 = Arduino.org Ethernet/SD-Card Shield
//  3 = Seeed Studio Ethernet/SD-Card Shield W5200

#define COMM_INTERFACE  2

/////////////////////////////////////////////////////////////////////////////////////
//
// DEFINE STATIC IP ADDRESS *OR* COMMENT OUT TO USE DHCP
//

//#define IP_ADDRESS { 192, 168, 178, 211 }

/////////////////////////////////////////////////////////////////////////////////////
//
// DEFINE PORT TO USE FOR ETHERNET COMMUNICATIONS INTERFACE
//

#define ETHERNET_PORT 2560

/////////////////////////////////////////////////////////////////////////////////////
//
// DEFINE MAC ADDRESS ARRAY FOR ETHERNET COMMUNICATIONS INTERFACE
//

#define MAC_ADDRESS {  0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xEF }

/////////////////////////////////////////////////////////////////////////////////////
//
// IF DEFINED "USE_MDNS", THE SERVER IS ACCESSIBLE VIA THE NAME "dccpp.local"
// this is currently possible ONLY with COMM_INTERFACE == 2 - and the libs
// "Ethernet3" and "EthernetBonjour3"
// (see https://github.com/sstaub/Ethernet3 and
//      https://github.com/michael71/EthernetBonjour3  )
//

#define USE_MDNS
#define MDNS_NAME    "dccpp"      // .local will be added
#define MDNS_SERVICE_DCCPP "Arduino DCC++ Server ._dccpp"     // ._tcp will be added

/////////////////////////////////////////////////////////////////////////////////////

