/* This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
 * KreMLin invocation: ../krml -fc89 -fparentheses -fparentheses -fcurly-braces -fno-shadow -minimal -tmpdir extracted -warn-error +9+11 -skip-compilation -extract-uints -add-include <inttypes.h> -add-include "kremlib.h" -add-include "kremlin/internal/compat.h" extracted/prims.krml extracted/FStar_Pervasives_Native.krml extracted/FStar_Pervasives.krml extracted/FStar_Mul.krml extracted/FStar_Squash.krml extracted/FStar_Classical.krml extracted/FStar_FunctionalExtensionality.krml extracted/FStar_List_Tot_Base.krml extracted/FStar_List_Tot_Properties.krml extracted/FStar_StrongExcludedMiddle.krml extracted/FStar_List_Tot.krml extracted/FStar_Seq_Base.krml extracted/FStar_Seq_Properties.krml extracted/FStar_Seq.krml extracted/FStar_Math_Lib.krml extracted/FStar_Math_Lemmas.krml extracted/FStar_BitVector.krml extracted/FStar_UInt.krml extracted/FStar_UInt32.krml extracted/FStar_Int.krml extracted/FStar_Int16.krml extracted/FStar_Preorder.krml extracted/FStar_Ghost.krml extracted/FStar_ErasedLogic.krml extracted/FStar_UInt64.krml extracted/FStar_Set.krml extracted/FStar_PropositionalExtensionality.krml extracted/FStar_PredicateExtensionality.krml extracted/FStar_TSet.krml extracted/FStar_Monotonic_Heap.krml extracted/FStar_Heap.krml extracted/FStar_Map.krml extracted/FStar_Monotonic_HyperHeap.krml extracted/FStar_Monotonic_HyperStack.krml extracted/FStar_HyperStack.krml extracted/FStar_Monotonic_Witnessed.krml extracted/FStar_HyperStack_ST.krml extracted/FStar_HyperStack_All.krml extracted/FStar_Date.krml extracted/FStar_Universe.krml extracted/FStar_GSet.krml extracted/FStar_ModifiesGen.krml extracted/LowStar_Monotonic_Buffer.krml extracted/LowStar_Buffer.krml extracted/Spec_Loops.krml extracted/LowStar_BufferOps.krml extracted/C_Loops.krml extracted/FStar_UInt8.krml extracted/FStar_Kremlin_Endianness.krml extracted/FStar_UInt63.krml extracted/FStar_Exn.krml extracted/FStar_ST.krml extracted/FStar_All.krml extracted/FStar_Dyn.krml extracted/FStar_Int63.krml extracted/FStar_Int64.krml extracted/FStar_Int32.krml extracted/FStar_Int8.krml extracted/FStar_UInt16.krml extracted/FStar_Int_Cast.krml extracted/FStar_UInt128.krml extracted/C_Endianness.krml extracted/FStar_List.krml extracted/FStar_Float.krml extracted/FStar_IO.krml extracted/C.krml extracted/FStar_Char.krml extracted/FStar_String.krml extracted/LowStar_Modifies.krml extracted/C_String.krml extracted/FStar_Bytes.krml extracted/FStar_HyperStack_IO.krml extracted/C_Failure.krml extracted/TestLib.krml extracted/FStar_Int_Cast_Full.krml
 * F* version: 4b5cc4c6
 * KreMLin version: 78805bf7
 */


#ifndef __FStar_Bytes_H
#define __FStar_Bytes_H

#include "Prims.h"
#include "FStar_Pervasives_Native.h"
#include "FStar_List_Tot_Base.h"
#include "FStar_Seq_Base.h"
#include "FStar_BitVector.h"
#include "FStar_UInt.h"
#include "FStar_UInt64.h"
#include "FStar_UInt128.h"
#include "FStar_Int_Cast_Full.h"
#include "TestLib.h"
#include "C_String.h"
#include "C.h"
#include "C_Failure.h"
#include "FStar_HyperStack_IO.h"
#include "FStar_UInt32.h"
#include <inttypes.h>
#include "kremlib.h"
#include "kremlin/internal/compat.h"

typedef uint8_t FStar_Bytes_u8;

typedef uint16_t FStar_Bytes_u16;

typedef uint32_t FStar_Bytes_u32;

typedef uint8_t FStar_Bytes_byte;

extern uint32_t FStar_Bytes_len(FStar_Bytes_bytes x0);

Prims_int FStar_Bytes_length(FStar_Bytes_bytes b);

extern FStar_Bytes_bytes FStar_Bytes_empty_bytes;

extern uint8_t FStar_Bytes_get(FStar_Bytes_bytes x0, uint32_t x1);

extern uint8_t (*FStar_Bytes_op_String_Access)(FStar_Bytes_bytes x0, uint32_t x1);

uint8_t FStar_Bytes_index(FStar_Bytes_bytes b, Prims_int i);

extern FStar_Bytes_bytes FStar_Bytes_create(uint32_t x0, uint8_t x1);

/*
 creating byte values *
*/
FStar_Bytes_bytes FStar_Bytes_create_(Prims_int n1, uint8_t v1);

extern FStar_Bytes_bytes FStar_Bytes_init(uint32_t x0, uint8_t (*x1)(uint32_t x0));

extern FStar_Bytes_bytes FStar_Bytes_abyte(uint8_t x0);

typedef struct K___uint8_t_uint8_t_s
{
  uint8_t fst;
  uint8_t snd;
}
K___uint8_t_uint8_t;

extern FStar_Bytes_bytes FStar_Bytes_twobytes(K___uint8_t_uint8_t x0);

extern FStar_Bytes_bytes FStar_Bytes_append(FStar_Bytes_bytes x0, FStar_Bytes_bytes x1);

extern FStar_Bytes_bytes (*FStar_Bytes_op_At_Bar)(FStar_Bytes_bytes x0, FStar_Bytes_bytes x1);

extern FStar_Bytes_bytes FStar_Bytes_slice(FStar_Bytes_bytes x0, uint32_t x1, uint32_t x2);

FStar_Bytes_bytes FStar_Bytes_slice_(FStar_Bytes_bytes b, Prims_int s, Prims_int e);

extern FStar_Bytes_bytes FStar_Bytes_sub(FStar_Bytes_bytes x0, uint32_t x1, uint32_t x2);

typedef struct K___FStar_Bytes_bytes_FStar_Bytes_bytes_s
{
  FStar_Bytes_bytes fst;
  FStar_Bytes_bytes snd;
}
K___FStar_Bytes_bytes_FStar_Bytes_bytes;

extern K___FStar_Bytes_bytes_FStar_Bytes_bytes
FStar_Bytes_split(FStar_Bytes_bytes x0, uint32_t x1);

K___FStar_Bytes_bytes_FStar_Bytes_bytes FStar_Bytes_split_(FStar_Bytes_bytes b, Prims_int k);

extern Prims_pos FStar_Bytes_repr_bytes(Prims_int x0);

extern Prims_int FStar_Bytes_int_of_bytes(FStar_Bytes_bytes x0);

extern FStar_Bytes_bytes FStar_Bytes_bytes_of_int(Prims_int x0, Prims_int x1);

extern uint32_t FStar_Bytes_int32_of_bytes(FStar_Bytes_bytes x0);

extern uint16_t FStar_Bytes_int16_of_bytes(FStar_Bytes_bytes x0);

extern uint8_t FStar_Bytes_int8_of_bytes(FStar_Bytes_bytes x0);

extern FStar_Bytes_bytes FStar_Bytes_bytes_of_int32(uint32_t x0);

extern FStar_Bytes_bytes FStar_Bytes_bytes_of_int16(uint16_t x0);

extern FStar_Bytes_bytes FStar_Bytes_bytes_of_int8(uint8_t x0);

extern FStar_Bytes_bytes
FStar_Bytes_xor(uint32_t x0, FStar_Bytes_bytes x1, FStar_Bytes_bytes x2);

FStar_Bytes_bytes FStar_Bytes_xor_(Prims_int n1, FStar_Bytes_bytes b1, FStar_Bytes_bytes b2);

extern FStar_Bytes_bytes FStar_Bytes_utf8_encode(Prims_string x0);

#define FStar_Pervasives_Native_None 0
#define FStar_Pervasives_Native_Some 1

typedef uint8_t FStar_Pervasives_Native_option__Prims_string_tags;

typedef struct FStar_Pervasives_Native_option__Prims_string_s
{
  FStar_Pervasives_Native_option__Prims_string_tags tag;
  Prims_string v;
}
FStar_Pervasives_Native_option__Prims_string;

extern FStar_Pervasives_Native_option__Prims_string
FStar_Bytes_iutf8_opt(FStar_Bytes_bytes x0);

extern Prims_string FStar_Bytes_string_of_hex(Prims_string x0);

extern FStar_Bytes_bytes FStar_Bytes_bytes_of_hex(Prims_string x0);

extern Prims_string FStar_Bytes_hex_of_string(Prims_string x0);

extern Prims_string FStar_Bytes_hex_of_bytes(FStar_Bytes_bytes x0);

extern Prims_string FStar_Bytes_print_bytes(FStar_Bytes_bytes x0);

extern FStar_Bytes_bytes FStar_Bytes_bytes_of_string(Prims_string x0);

extern FStar_Bytes_bytes FStar_Bytes_of_buffer(uint32_t x0, uint8_t *x1);

extern void FStar_Bytes_store_bytes(FStar_Bytes_bytes x0, uint8_t *x1);

#define __FStar_Bytes_H_DEFINED
#endif
