#include "stdint.h"

int32_t endian(int32_t n){
	return (n&0xff)<<24|(n&0xff00)<<8|(n&0xff0000)>>8|(n&0xff000000)>>24;
}
