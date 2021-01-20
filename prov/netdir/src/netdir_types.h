#ifndef __FI_NETDIR_TYPES_H__
#define __FI_NETDIR_TYPES_H__



#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


typedef enum ofi_nd_cq_state {
	NORMAL_STATE		= 0,
	LARGE_MSG_RECV_REQ	= 1,
	LARGE_MSG_WAIT_ACK	= 2,
	MAX_STATE		= 3
} ofi_nd_cq_state;

typedef enum ofi_nd_cq_event {
	NORMAL_EVENT		= 0,
	LARGE_MSG_REQ		= 1,
	LARGE_MSG_ACK		= 2,
	MAX_EVENT		= 3
} ofi_nd_cq_event;



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __FI_NETDIR_TYPES_H__ */