
#include "FLAME.h"

FLA_Error REF_Eig_gest_iu( FLA_Obj A, FLA_Obj B )
{
  return FLA_Eig_gest_blk_external( FLA_INVERSE, FLA_UPPER_TRIANGULAR, A, B );
}
