#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdint.h>

#define SYS_EVENT_ERR_IDLE      0x00000000
#define SYS_EVENT_RUN_APP       0x00000001
#define SYS_EVENT_ERR_READY     0x00000100
#define SYS_EVENT_ERR_SUCCESS   0x00000200
#define SYS_EVENT_ERR_UNKOWN    0x00000400
#define SYS_EVENT_ERR_FLASH     0x00000800
#define SYS_EVENT_ERR_APP       0x00001000
#define SYS_EVENT_ERR_NOAPP     0x00002000
#define SYS_EVENT_ERR_LARGE     0x00004000

#define SYS_STATUS_USB_ON       0x00000001
#define SYS_STATUS_USB_OFF      0x00000002
#define SYS_STATUS_UPDATE_ON    0x00000004
#define SYS_STATUS_UPDATE_OFF   0x00000008

#define SYS_EVENT_RUN_MASK      0x00000001
#define SYS_EVENT_ERR_MASK      0x0000FF00

extern volatile uint32_t system_info;

#endif
