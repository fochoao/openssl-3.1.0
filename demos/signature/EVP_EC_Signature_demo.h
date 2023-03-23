/*-
 * Copyright 2021-2022 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

/* Signers private EC key */
static const unsigned char priv_key_der[] = {
0x30, 0x82, 0x01, 0x68, 0x02, 0x01, 0x01, 0x04, 0x20, 0x51, 0x77, 0xae,
0xf4, 0x18, 0xf4, 0x6b, 0xc4, 0xe5, 0xbb, 0xe9, 0xe6, 0x9e, 0x6d, 0xb0,
0xea, 0x12, 0xf9, 0xf3, 0xdb, 0x9d, 0x56, 0x59, 0xf7, 0x5a, 0x17, 0xd7,
0xd1, 0xe4, 0xd7, 0x47, 0x28, 0xa0, 0x81, 0xfa, 0x30, 0x81, 0xf7, 0x02,
0x01, 0x01, 0x30, 0x2c, 0x06, 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x01,
0x01, 0x02, 0x21, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x30, 0x5b, 0x04, 0x20, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
0x04, 0x20, 0x5a, 0xc6, 0x35, 0xd8, 0xaa, 0x3a, 0x93, 0xe7, 0xb3, 0xeb,
0xbd, 0x55, 0x76, 0x98, 0x86, 0xbc, 0x65, 0x1d, 0x06, 0xb0, 0xcc, 0x53,
0xb0, 0xf6, 0x3b, 0xce, 0x3c, 0x3e, 0x27, 0xd2, 0x60, 0x4b, 0x03, 0x15,
0x00, 0xc4, 0x9d, 0x36, 0x08, 0x86, 0xe7, 0x04, 0x93, 0x6a, 0x66, 0x78,
0xe1, 0x13, 0x9d, 0x26, 0xb7, 0x81, 0x9f, 0x7e, 0x90, 0x04, 0x41, 0x04,
0x6b, 0x17, 0xd1, 0xf2, 0xe1, 0x2c, 0x42, 0x47, 0xf8, 0xbc, 0xe6, 0xe5,
0x63, 0xa4, 0x40, 0xf2, 0x77, 0x03, 0x7d, 0x81, 0x2d, 0xeb, 0x33, 0xa0,
0xf4, 0xa1, 0x39, 0x45, 0xd8, 0x98, 0xc2, 0x96, 0x4f, 0xe3, 0x42, 0xe2,
0xfe, 0x1a, 0x7f, 0x9b, 0x8e, 0xe7, 0xeb, 0x4a, 0x7c, 0x0f, 0x9e, 0x16,
0x2b, 0xce, 0x33, 0x57, 0x6b, 0x31, 0x5e, 0xce, 0xcb, 0xb6, 0x40, 0x68,
0x37, 0xbf, 0x51, 0xf5, 0x02, 0x21, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00,
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbc,
0xe6, 0xfa, 0xad, 0xa7, 0x17, 0x9e, 0x84, 0xf3, 0xb9, 0xca, 0xc2, 0xfc,
0x63, 0x25, 0x51, 0x02, 0x01, 0x01, 0xa1, 0x44, 0x03, 0x42, 0x00, 0x04,
0x4f, 0xe7, 0x7b, 0xb6, 0xbb, 0x54, 0x42, 0x39, 0xed, 0x5d, 0xe5, 0x40,
0xc8, 0xd8, 0x71, 0xca, 0x6d, 0x83, 0x71, 0xd1, 0x88, 0x2a, 0x65, 0x00,
0x6c, 0xc6, 0x2f, 0x01, 0x31, 0x49, 0xbe, 0x76, 0x7a, 0x67, 0x6a, 0x28,
0x33, 0xc7, 0x5b, 0xb9, 0x24, 0x45, 0x24, 0x6e, 0xf0, 0x6d, 0x2f, 0x34,
0x06, 0x53, 0x73, 0x6a, 0xff, 0x90, 0x90, 0xc1, 0x6d, 0x9b, 0x94, 0x0d,
0x0e, 0x1f, 0x95, 0x65,
};

/* The matching public key used for verifying */
static const unsigned char pub_key_der[] = {
0x30, 0x82, 0x01, 0x4b, 0x30, 0x82, 0x01, 0x03, 0x06, 0x07, 0x2a, 0x86,
0x48, 0xce, 0x3d, 0x02, 0x01, 0x30, 0x81, 0xf7, 0x02, 0x01, 0x01, 0x30,
0x2c, 0x06, 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x01, 0x01, 0x02, 0x21,
0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x30, 0x5b, 0x04,
0x20, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x04, 0x20, 0x5a,
0xc6, 0x35, 0xd8, 0xaa, 0x3a, 0x93, 0xe7, 0xb3, 0xeb, 0xbd, 0x55, 0x76,
0x98, 0x86, 0xbc, 0x65, 0x1d, 0x06, 0xb0, 0xcc, 0x53, 0xb0, 0xf6, 0x3b,
0xce, 0x3c, 0x3e, 0x27, 0xd2, 0x60, 0x4b, 0x03, 0x15, 0x00, 0xc4, 0x9d,
0x36, 0x08, 0x86, 0xe7, 0x04, 0x93, 0x6a, 0x66, 0x78, 0xe1, 0x13, 0x9d,
0x26, 0xb7, 0x81, 0x9f, 0x7e, 0x90, 0x04, 0x41, 0x04, 0x6b, 0x17, 0xd1,
0xf2, 0xe1, 0x2c, 0x42, 0x47, 0xf8, 0xbc, 0xe6, 0xe5, 0x63, 0xa4, 0x40,
0xf2, 0x77, 0x03, 0x7d, 0x81, 0x2d, 0xeb, 0x33, 0xa0, 0xf4, 0xa1, 0x39,
0x45, 0xd8, 0x98, 0xc2, 0x96, 0x4f, 0xe3, 0x42, 0xe2, 0xfe, 0x1a, 0x7f,
0x9b, 0x8e, 0xe7, 0xeb, 0x4a, 0x7c, 0x0f, 0x9e, 0x16, 0x2b, 0xce, 0x33,
0x57, 0x6b, 0x31, 0x5e, 0xce, 0xcb, 0xb6, 0x40, 0x68, 0x37, 0xbf, 0x51,
0xf5, 0x02, 0x21, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbc, 0xe6, 0xfa, 0xad,
0xa7, 0x17, 0x9e, 0x84, 0xf3, 0xb9, 0xca, 0xc2, 0xfc, 0x63, 0x25, 0x51,
0x02, 0x01, 0x01, 0x03, 0x42, 0x00, 0x04, 0x4f, 0xe7, 0x7b, 0xb6, 0xbb,
0x54, 0x42, 0x39, 0xed, 0x5d, 0xe5, 0x40, 0xc8, 0xd8, 0x71, 0xca, 0x6d,
0x83, 0x71, 0xd1, 0x88, 0x2a, 0x65, 0x00, 0x6c, 0xc6, 0x2f, 0x01, 0x31,
0x49, 0xbe, 0x76, 0x7a, 0x67, 0x6a, 0x28, 0x33, 0xc7, 0x5b, 0xb9, 0x24,
0x45, 0x24, 0x6e, 0xf0, 0x6d, 0x2f, 0x34, 0x06, 0x53, 0x73, 0x6a, 0xff,
0x90, 0x90, 0xc1, 0x6d, 0x9b, 0x94, 0x0d, 0x0e, 0x1f, 0x95, 0x65,
};

