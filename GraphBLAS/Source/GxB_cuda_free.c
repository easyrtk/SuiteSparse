//------------------------------------------------------------------------------
// GxB_cuda_free.c: wrapper for cudaFree, or just free if no CUDA
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2019, All Rights Reserved.
// http://suitesparse.com   See GraphBLAS/Doc/License.txt for license.

//------------------------------------------------------------------------------

// DRAFT: in progress

#include "GB.h"

void GxB_cuda_free (void *p)            // standard free signature
{
    #if defined ( GBCUDA )
    GB_cuda_free (p) ;
    #else
    free (p) ;
    #endif
}

