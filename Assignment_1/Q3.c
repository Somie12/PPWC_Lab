/*  Find the maximum value that can be stored in a float. Explain the reason behind it



The maximum value that can be stored in a float in C is approximately 3.4028235E+38. 
This limit is defined by the IEEE 754 standard for single-precision floating-point representation, 
which uses 32 bits: 1 bit for the sign, 8 bits for the exponent, and 23 bits for the mantissa. 
The maximum exponent value (after biasing) is 254, and the mantissa is maximized when all bits are set to 1.
 Thus, the formula for the maximum float value is ( (1 + 2^{23}-1) \times 2^{(254-127)} ), 
 leading to the maximum value of about 3.4028235E+38.













*/