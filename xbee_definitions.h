#ifndef __XBEE_DEFINTIONS_H
#define __XBEE_DEFINTIONS_H

//volatile extern unsigned int DEST_ADDR=0x0002;

#define START_DELIMITER 0x7e

#define API_TX16 0x01
#define API_TX16_OPTION_DIS_ACK 0x01
#define API_TX16_OPTION_PAN_BROADCAST 0x04

#define API_RX16 0x81
#define API_RX16_OPTIONS_ADDR_BROADCAST 0x02
#define API_RX16_OPTIONS_PAN_BROADCAST 0x04

/* Own codes: */
#define RETURN_OK 0x41
#define RETURN_TIMEOUT 0x42

#endif
