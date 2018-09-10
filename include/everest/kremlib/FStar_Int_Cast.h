/* This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
 * KreMLin invocation: ../krml -fc89 -minimal -tmpdir extracted -warn-error +9+11 -skip-compilation -extract-uints -add-include <inttypes.h> -add-include "kremlib.h" -add-include "kremlin/internal/compat.h" extracted/prims.krml extracted/FStar_Pervasives_Native.krml extracted/FStar_Pervasives.krml extracted/FStar_Mul.krml extracted/FStar_Squash.krml extracted/FStar_Classical.krml extracted/FStar_List_Tot_Base.krml extracted/FStar_List_Tot_Properties.krml extracted/FStar_StrongExcludedMiddle.krml extracted/FStar_List_Tot.krml extracted/FStar_Seq_Base.krml extracted/FStar_Seq_Properties.krml extracted/FStar_Seq.krml extracted/FStar_Math_Lib.krml extracted/FStar_Math_Lemmas.krml extracted/FStar_BitVector.krml extracted/FStar_UInt.krml extracted/FStar_UInt32.krml extracted/FStar_Int.krml extracted/FStar_Int16.krml extracted/FStar_Preorder.krml extracted/FStar_Ghost.krml extracted/FStar_ErasedLogic.krml extracted/FStar_UInt64.krml extracted/FStar_FunctionalExtensionality.krml extracted/FStar_Set.krml extracted/FStar_PropositionalExtensionality.krml extracted/FStar_PredicateExtensionality.krml extracted/FStar_TSet.krml extracted/FStar_Monotonic_Heap.krml extracted/FStar_Heap.krml extracted/FStar_Map.krml extracted/FStar_Monotonic_HyperHeap.krml extracted/FStar_Monotonic_HyperStack.krml extracted/FStar_HyperStack.krml extracted/FStar_Monotonic_Witnessed.krml extracted/FStar_HyperStack_ST.krml extracted/FStar_HyperStack_All.krml extracted/FStar_Date.krml extracted/FStar_Universe.krml extracted/FStar_GSet.krml extracted/FStar_ModifiesGen.krml extracted/LowStar_Monotonic_Buffer.krml extracted/LowStar_Buffer.krml extracted/Spec_Loops.krml extracted/LowStar_BufferOps.krml extracted/C_Loops.krml extracted/FStar_UInt8.krml extracted/FStar_Kremlin_Endianness.krml extracted/FStar_UInt63.krml extracted/FStar_Exn.krml extracted/FStar_ST.krml extracted/FStar_All.krml extracted/FStar_Dyn.krml extracted/FStar_Int63.krml extracted/FStar_Int64.krml extracted/FStar_Int32.krml extracted/FStar_Int8.krml extracted/FStar_UInt16.krml extracted/FStar_Int_Cast.krml extracted/FStar_UInt128.krml extracted/C_Endianness.krml extracted/FStar_List.krml extracted/FStar_Float.krml extracted/FStar_IO.krml extracted/LowStar_Modifies.krml extracted/FStar_Char.krml extracted/FStar_String.krml extracted/FStar_Bytes.krml extracted/C.krml extracted/C_String.krml extracted/FStar_HyperStack_IO.krml extracted/C_Failure.krml extracted/TestLib.krml extracted/FStar_Int_Cast_Full.krml
 * F* version: a4bbc2d1
 * KreMLin version: 47733122
 */


#ifndef __FStar_Int_Cast_H
#define __FStar_Int_Cast_H

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
#include "FStar_Bytes.h"
#include "FStar_String.h"
#include "FStar_Char.h"
#include "LowStar_Modifies.h"
#include "FStar_IO.h"
#include "FStar_Float.h"
#include "FStar_List.h"
#include "FStar_Monotonic_HyperStack.h"
#include "C_Endianness.h"
#include <inttypes.h>
#include "kremlib.h"
#include "kremlin/internal/compat.h"

extern uint64_t FStar_Int_Cast_uint8_to_uint64(uint8_t x0);

extern uint32_t FStar_Int_Cast_uint8_to_uint32(uint8_t x0);

extern uint16_t FStar_Int_Cast_uint8_to_uint16(uint8_t x0);

extern uint64_t FStar_Int_Cast_uint16_to_uint64(uint16_t x0);

extern uint32_t FStar_Int_Cast_uint16_to_uint32(uint16_t x0);

extern uint8_t FStar_Int_Cast_uint16_to_uint8(uint16_t x0);

extern uint64_t FStar_Int_Cast_uint32_to_uint64(uint32_t x0);

extern uint16_t FStar_Int_Cast_uint32_to_uint16(uint32_t x0);

extern uint8_t FStar_Int_Cast_uint32_to_uint8(uint32_t x0);

extern uint32_t FStar_Int_Cast_uint64_to_uint32(uint64_t x0);

extern uint16_t FStar_Int_Cast_uint64_to_uint16(uint64_t x0);

extern uint8_t FStar_Int_Cast_uint64_to_uint8(uint64_t x0);

extern int64_t FStar_Int_Cast_int8_to_int64(int8_t x0);

extern int32_t FStar_Int_Cast_int8_to_int32(int8_t x0);

extern int16_t FStar_Int_Cast_int8_to_int16(int8_t x0);

extern int64_t FStar_Int_Cast_int16_to_int64(int16_t x0);

extern int32_t FStar_Int_Cast_int16_to_int32(int16_t x0);

extern int8_t FStar_Int_Cast_int16_to_int8(int16_t x0);

extern int64_t FStar_Int_Cast_int32_to_int64(int32_t x0);

extern int16_t FStar_Int_Cast_int32_to_int16(int32_t x0);

extern int8_t FStar_Int_Cast_int32_to_int8(int32_t x0);

extern int32_t FStar_Int_Cast_int64_to_int32(int64_t x0);

extern int16_t FStar_Int_Cast_int64_to_int16(int64_t x0);

extern int8_t FStar_Int_Cast_int64_to_int8(int64_t x0);

extern int64_t FStar_Int_Cast_uint8_to_int64(uint8_t x0);

extern int32_t FStar_Int_Cast_uint8_to_int32(uint8_t x0);

extern int16_t FStar_Int_Cast_uint8_to_int16(uint8_t x0);

extern int8_t FStar_Int_Cast_uint8_to_int8(uint8_t x0);

extern int64_t FStar_Int_Cast_uint16_to_int64(uint16_t x0);

extern int32_t FStar_Int_Cast_uint16_to_int32(uint16_t x0);

extern int16_t FStar_Int_Cast_uint16_to_int16(uint16_t x0);

extern int8_t FStar_Int_Cast_uint16_to_int8(uint16_t x0);

extern int64_t FStar_Int_Cast_uint32_to_int64(uint32_t x0);

extern int32_t FStar_Int_Cast_uint32_to_int32(uint32_t x0);

extern int16_t FStar_Int_Cast_uint32_to_int16(uint32_t x0);

extern int8_t FStar_Int_Cast_uint32_to_int8(uint32_t x0);

extern int64_t FStar_Int_Cast_uint64_to_int64(uint64_t x0);

extern int32_t FStar_Int_Cast_uint64_to_int32(uint64_t x0);

extern int16_t FStar_Int_Cast_uint64_to_int16(uint64_t x0);

extern int8_t FStar_Int_Cast_uint64_to_int8(uint64_t x0);

extern uint64_t FStar_Int_Cast_int8_to_uint64(int8_t x0);

extern uint32_t FStar_Int_Cast_int8_to_uint32(int8_t x0);

extern uint16_t FStar_Int_Cast_int8_to_uint16(int8_t x0);

extern uint8_t FStar_Int_Cast_int8_to_uint8(int8_t x0);

extern uint64_t FStar_Int_Cast_int16_to_uint64(int16_t x0);

extern uint32_t FStar_Int_Cast_int16_to_uint32(int16_t x0);

extern uint16_t FStar_Int_Cast_int16_to_uint16(int16_t x0);

extern uint8_t FStar_Int_Cast_int16_to_uint8(int16_t x0);

extern uint64_t FStar_Int_Cast_int32_to_uint64(int32_t x0);

extern uint32_t FStar_Int_Cast_int32_to_uint32(int32_t x0);

extern uint16_t FStar_Int_Cast_int32_to_uint16(int32_t x0);

extern uint8_t FStar_Int_Cast_int32_to_uint8(int32_t x0);

extern uint64_t FStar_Int_Cast_int64_to_uint64(int64_t x0);

extern uint32_t FStar_Int_Cast_int64_to_uint32(int64_t x0);

extern uint16_t FStar_Int_Cast_int64_to_uint16(int64_t x0);

extern uint8_t FStar_Int_Cast_int64_to_uint8(int64_t x0);

#define __FStar_Int_Cast_H_DEFINED
#endif
