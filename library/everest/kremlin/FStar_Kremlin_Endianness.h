/* This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
 * KreMLin invocation: ../krml -fc89 -minimal -tmpdir extracted -warn-error +9+11 -skip-compilation -extract-uint128 -add-include <inttypes.h> -add-include "kremlib.h" -add-include "kremlin/internal/compat.h" extracted/prims.krml extracted/FStar_Pervasives_Native.krml extracted/FStar_Pervasives.krml extracted/FStar_Mul.krml extracted/FStar_Squash.krml extracted/FStar_Classical.krml extracted/FStar_List_Tot_Base.krml extracted/FStar_List_Tot_Properties.krml extracted/FStar_StrongExcludedMiddle.krml extracted/FStar_List_Tot.krml extracted/FStar_Seq_Base.krml extracted/FStar_Seq_Properties.krml extracted/FStar_Seq.krml extracted/FStar_Math_Lib.krml extracted/FStar_Math_Lemmas.krml extracted/FStar_BitVector.krml extracted/FStar_UInt.krml extracted/FStar_UInt32.krml extracted/FStar_Int.krml extracted/FStar_Int16.krml extracted/FStar_Preorder.krml extracted/FStar_Ghost.krml extracted/FStar_ErasedLogic.krml extracted/FStar_UInt64.krml extracted/FStar_FunctionalExtensionality.krml extracted/FStar_Set.krml extracted/FStar_PropositionalExtensionality.krml extracted/FStar_PredicateExtensionality.krml extracted/FStar_TSet.krml extracted/FStar_Monotonic_Heap.krml extracted/FStar_Heap.krml extracted/FStar_Map.krml extracted/FStar_Monotonic_HyperHeap.krml extracted/FStar_Monotonic_HyperStack.krml extracted/FStar_HyperStack.krml extracted/FStar_Monotonic_Witnessed.krml extracted/FStar_HyperStack_ST.krml extracted/FStar_HyperStack_All.krml extracted/FStar_Date.krml extracted/FStar_Universe.krml extracted/FStar_GSet.krml extracted/FStar_ModifiesGen.krml extracted/LowStar_Buffer.krml extracted/Spec_Loops.krml extracted/FStar_Int32.krml extracted/FStar_Buffer.krml extracted/C_Loops.krml extracted/FStar_UInt8.krml extracted/FStar_Kremlin_Endianness.krml extracted/FStar_UInt63.krml extracted/FStar_Exn.krml extracted/FStar_ST.krml extracted/FStar_All.krml extracted/FStar_Dyn.krml extracted/FStar_Int63.krml extracted/FStar_Int64.krml extracted/FStar_Int8.krml extracted/FStar_UInt16.krml extracted/FStar_Int_Cast.krml extracted/FStar_UInt128.krml extracted/C_Endianness.krml extracted/FStar_List.krml extracted/FStar_Float.krml extracted/FStar_IO.krml extracted/LowStar_Modifies.krml extracted/FStar_Char.krml extracted/FStar_String.krml extracted/FStar_Bytes.krml extracted/C.krml extracted/C_String.krml extracted/FStar_HyperStack_IO.krml extracted/C_Failure.krml extracted/TestLib.krml extracted/C_Nullity.krml extracted/FStar_Int_Cast_Full.krml
 * F* version: e6d81353
 * KreMLin version: a6051b52
 */


#ifndef __FStar_Kremlin_Endianness_H
#define __FStar_Kremlin_Endianness_H

#include "Prims.h"
#include "FStar_Pervasives_Native.h"
#include "FStar_List_Tot_Base.h"
#include "FStar_Seq_Base.h"
#include "FStar_BitVector.h"
#include "FStar_UInt.h"
#include "FStar_UInt64.h"
#include "FStar_UInt128.h"
#include "FStar_Int_Cast_Full.h"
#include "C_Nullity.h"
#include "TestLib.h"
#include "C_String.h"
#include "C.h"
#include "C_Failure.h"
#include "FStar_HyperStack_IO.h"
#include "FStar_UInt32.h"
#include "FStar_Bytes.h"
#include "FStar_String.h"
#include "FStar_Char.h"
#include "LowStar_Modifies.h"
#include "FStar_IO.h"
#include "FStar_Float.h"
#include "FStar_List.h"
#include "C_Endianness.h"
#include "FStar_Int_Cast.h"
#include "FStar_UInt16.h"
#include "FStar_Int.h"
#include "FStar_Int8.h"
#include "FStar_Int64.h"
#include "FStar_Int63.h"
#include "FStar_Dyn.h"
#include "FStar_All.h"
#include "FStar_Set.h"
#include "FStar_Pervasives.h"
#include "FStar_Monotonic_Heap.h"
#include "FStar_Monotonic_Witnessed.h"
#include "FStar_ST.h"
#include "FStar_Exn.h"
#include "FStar_UInt63.h"
#include "FStar_Seq_Properties.h"
#include "FStar_UInt8.h"
#include <inttypes.h>
#include "kremlib.h"
#include "kremlin/internal/compat.h"

typedef struct Prims_list__uint8_t_s Prims_list__uint8_t;

typedef struct Prims_list__uint8_t_s
{
  Prims_list__Prims_string_tags tag;
  uint8_t hd;
  Prims_list__uint8_t *tl;
}
Prims_list__uint8_t;

typedef struct FStar_Seq_Base_seq__uint8_t_s { Prims_list__uint8_t *l; }
FStar_Seq_Base_seq__uint8_t;

typedef FStar_Seq_Base_seq__uint8_t FStar_Kremlin_Endianness_bytes;

/*
 [length l] returns the total number of elements in [l]. Named as
in: OCaml, F#, Coq 
*/
Prims_int FStar_List_Tot_Base_length__uint8_t(Prims_list__uint8_t *uu___49_157);

Prims_int FStar_Seq_Base_length__uint8_t(FStar_Seq_Base_seq__uint8_t s);

/*
 [hd l] returns the first element of [l]. Requires [l] to be
nonempty, at type-checking time. Named as in: OCaml, F#, Coq 
*/
uint8_t FStar_List_Tot_Base_hd__uint8_t(Prims_list__uint8_t *uu___45_38);

/*
 [tail l] returns [l] without its first element. Requires, at
type-checking time, that [l] be nonempty. Similar to: tl in OCaml, F#, Coq

*/
Prims_list__uint8_t *FStar_List_Tot_Base_tail__uint8_t(Prims_list__uint8_t *uu___46_64);

extern Prims_list__uint8_t *(*FStar_List_Tot_Base_tl__uint8_t)(Prims_list__uint8_t *x0);

/*
 [index l n] returns the [n]-th element in list [l] (with the first
element being the 0-th). Requires, at type-checking time, that [l] be
of length at least [n+1]. 
*/
uint8_t FStar_List_Tot_Base_index__uint8_t(Prims_list__uint8_t *l, Prims_int i);

uint8_t FStar_Seq_Base_index__uint8_t(FStar_Seq_Base_seq__uint8_t s, Prims_int i);

uint8_t FStar_Seq_Properties_head__uint8_t(FStar_Seq_Base_seq__uint8_t s);

FStar_Seq_Base_seq__uint8_t
FStar_Seq_Base_slice__uint8_t(FStar_Seq_Base_seq__uint8_t s, Prims_int i, Prims_int j);

FStar_Seq_Base_seq__uint8_t FStar_Seq_Properties_tail__uint8_t(FStar_Seq_Base_seq__uint8_t s);

Prims_int FStar_Kremlin_Endianness_le_to_n(FStar_Seq_Base_seq__uint8_t b);

uint8_t FStar_Seq_Properties_last__uint8_t(FStar_Seq_Base_seq__uint8_t s);

Prims_int FStar_Kremlin_Endianness_be_to_n(FStar_Seq_Base_seq__uint8_t b);

FStar_Seq_Base_seq__uint8_t FStar_Seq_Base_empty__uint8_t();

/*
 [append l1 l2] appends the elements of [l2] to the end of [l1]. Named as: OCaml, F#. Similar to: [List.app] in Coq. 
*/
Prims_list__uint8_t
*FStar_List_Tot_Base_append__uint8_t(Prims_list__uint8_t *x, Prims_list__uint8_t *y);

FStar_Seq_Base_seq__uint8_t
FStar_Seq_Base_append__uint8_t(FStar_Seq_Base_seq__uint8_t s1, FStar_Seq_Base_seq__uint8_t s2);

FStar_Seq_Base_seq__uint8_t FStar_Seq_Base_create__uint8_t(Prims_int len, uint8_t v);

FStar_Seq_Base_seq__uint8_t
FStar_Seq_Properties_cons__uint8_t(uint8_t x, FStar_Seq_Base_seq__uint8_t s);

FStar_Seq_Base_seq__uint8_t FStar_Kremlin_Endianness_n_to_le(uint32_t len, Prims_int n1);

FStar_Seq_Base_seq__uint8_t FStar_Kremlin_Endianness_n_to_be(uint32_t len, Prims_int n1);

#define __FStar_Kremlin_Endianness_H_DEFINED
#endif
