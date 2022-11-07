// License       : License.txt
// Specifications: Spec-00000057.pdf
/*-- File Header Comment Start -----------------------------------------------*/
// File Name        : LM45B_00000057.cpp
// BSL              : 00000057
// Model number     : Texas Instruments LM45B, LM45C
// Spec               Component type       : ADC
//                    OS                   : Arduino
//                    Calculation          : Floating-point
//                    Conversion type      : Linear
//                    Moving average filter: Moving average filter select
//                    Diagnosis            : Range (Min to Max)
// Reason for change: 01.00.00 : 03/11/'22 : New Release
// Nickname         : Blue Dragon
/*-- File Header Comment End -------------------------------------------------*/

#include "LM45B.h"

// Main Function
pp2ap_adc_t LM45B_00000057( void )
{
        pp2ap_adc_t res = pp_00000057( tbl_LM45B );
        return( res );
}
