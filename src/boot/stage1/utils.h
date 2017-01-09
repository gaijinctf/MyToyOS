#ifndef __utils_h__
#define __utils_h__

// All dataseg vars are at 0x10:0x600+offset.
inline void *_data_ptr(void *ptr) { return (void *)((char *)ptr + 0x600); }

#endif