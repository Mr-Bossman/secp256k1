#ifndef _SECP256K1_CONSTS_
#define _SECP256K1_CONSTS_

#include "num.h"

namespace secp256k1 {

static const unsigned char order_[] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
                                       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,
                                       0xBA,0xAE,0xDC,0xE6,0xAF,0x48,0xA0,0x3B,
                                       0xBF,0xD2,0x5E,0x8C,0xD0,0x36,0x41,0x41};

static const unsigned char field_[] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
                                       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
                                       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
                                       0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFC,0x2F};

class Constants {
private:
    Context ctx;

public:
    const Number order;
    const Number field;

    Constants() : order(ctx, order_, sizeof(order_)), 
                  field(ctx, field_, sizeof(field_)) {}
};

const Constants consts;

}

#endif
