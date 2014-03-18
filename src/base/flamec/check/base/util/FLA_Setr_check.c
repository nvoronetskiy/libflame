
#include "FLAME.h"

FLA_Error FLA_Setr_check( FLA_Uplo uplo, FLA_Obj alpha, FLA_Obj A )
{
  FLA_Error e_val;

  e_val = FLA_Check_valid_uplo( uplo );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_floating_object( A );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_nonconstant_object( A );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_consistent_object_datatype( alpha, A );
  FLA_Check_error_code( e_val );

  return FLA_SUCCESS;
}
