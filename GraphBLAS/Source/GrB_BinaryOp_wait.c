//------------------------------------------------------------------------------
// GrB_BinaryOp_wait: wait for a user-defined GrB_BinaryOp to complete
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2020, All Rights Reserved.
// http://suitesparse.com   See GraphBLAS/Doc/License.txt for license.

//------------------------------------------------------------------------------

// In SuiteSparse:GraphBLAS, a user-defined GrB_BinaryOp has no pending
// operations to wait for.  All this method does is verify that the op is
// properly initialized.

#include "GB.h"

GrB_Info GrB_BinaryOp_wait   // no work, just check if the GrB_BinaryOp is valid
(
    GrB_BinaryOp *op
)
{ 

    //--------------------------------------------------------------------------
    // check inputs
    //--------------------------------------------------------------------------

    GB_WHERE ("GrB_BinaryOp_wait (&op)") ;
    GB_RETURN_IF_NULL (op) ;
    GB_RETURN_IF_NULL_OR_FAULTY (*op) ;

    //--------------------------------------------------------------------------
    // return result
    //--------------------------------------------------------------------------

    return (GrB_SUCCESS) ;
}

