/* This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
 * KreMLin invocation: ../krml -fc89 -minimal -tmpdir uint128 -skip-compilation -extract-uint128 -add-include <inttypes.h> -add-include <stdbool.h> -add-include "kremlin/internal/types.h" -bundle FStar.UInt128=* -fparentheses extracted/prims.krml extracted/FStar_Pervasives_Native.krml extracted/FStar_Pervasives.krml extracted/FStar_Mul.krml extracted/FStar_Squash.krml extracted/FStar_Classical.krml extracted/FStar_List_Tot_Base.krml extracted/FStar_List_Tot_Properties.krml extracted/FStar_StrongExcludedMiddle.krml extracted/FStar_List_Tot.krml extracted/FStar_Seq_Base.krml extracted/FStar_Seq_Properties.krml extracted/FStar_Seq.krml extracted/FStar_Math_Lib.krml extracted/FStar_Math_Lemmas.krml extracted/FStar_BitVector.krml extracted/FStar_UInt.krml extracted/FStar_UInt32.krml extracted/FStar_Int.krml extracted/FStar_Int16.krml extracted/FStar_Preorder.krml extracted/FStar_Ghost.krml extracted/FStar_ErasedLogic.krml extracted/FStar_UInt64.krml extracted/FStar_FunctionalExtensionality.krml extracted/FStar_Set.krml extracted/FStar_PropositionalExtensionality.krml extracted/FStar_PredicateExtensionality.krml extracted/FStar_TSet.krml extracted/FStar_Monotonic_Heap.krml extracted/FStar_Heap.krml extracted/FStar_Map.krml extracted/FStar_Monotonic_HyperHeap.krml extracted/FStar_Monotonic_HyperStack.krml extracted/FStar_HyperStack.krml extracted/FStar_Monotonic_Witnessed.krml extracted/FStar_HyperStack_ST.krml extracted/FStar_HyperStack_All.krml extracted/FStar_Date.krml extracted/FStar_Universe.krml extracted/FStar_GSet.krml extracted/FStar_ModifiesGen.krml extracted/LowStar_Buffer.krml extracted/Spec_Loops.krml extracted/FStar_Int32.krml extracted/FStar_Buffer.krml extracted/C_Loops.krml extracted/FStar_UInt8.krml extracted/FStar_Kremlin_Endianness.krml extracted/FStar_UInt63.krml extracted/FStar_Exn.krml extracted/FStar_ST.krml extracted/FStar_All.krml extracted/FStar_Dyn.krml extracted/FStar_Int63.krml extracted/FStar_Int64.krml extracted/FStar_Int8.krml extracted/FStar_UInt16.krml extracted/FStar_Int_Cast.krml extracted/FStar_UInt128.krml extracted/C_Endianness.krml extracted/FStar_List.krml extracted/FStar_Float.krml extracted/FStar_IO.krml extracted/LowStar_Modifies.krml extracted/FStar_Char.krml extracted/FStar_String.krml extracted/FStar_Bytes.krml extracted/C.krml extracted/C_String.krml extracted/FStar_HyperStack_IO.krml extracted/C_Failure.krml extracted/TestLib.krml extracted/C_Nullity.krml extracted/FStar_Int_Cast_Full.krml
 * F* version: e6d81353
 * KreMLin version: a6051b52
 */

#include "FStar_UInt128.h"

extern uint64_t FStar_UInt64_eq_mask(uint64_t x0, uint64_t x1);

extern uint64_t FStar_UInt64_gte_mask(uint64_t x0, uint64_t x1);

uint64_t FStar_UInt128___proj__Mkuint128__item__low(FStar_UInt128_uint128 projectee)
{
  uint64_t __fname__low = projectee.low;
  return __fname__low;
}

uint64_t FStar_UInt128___proj__Mkuint128__item__high(FStar_UInt128_uint128 projectee)
{
  uint64_t __fname__high = projectee.high;
  return __fname__high;
}

static uint64_t FStar_UInt128_constant_time_carry(uint64_t a, uint64_t b)
{
  return (a ^ ((a ^ b) | ((a - b) ^ b))) >> (uint32_t)63U;
}

static uint64_t FStar_UInt128_carry(uint64_t a, uint64_t b)
{
  return FStar_UInt128_constant_time_carry(a, b);
}

FStar_UInt128_uint128 FStar_UInt128_add(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b)
{
  FStar_UInt128_uint128
  flat = { a.low + b.low, a.high + b.high + FStar_UInt128_carry(a.low + b.low, b.low) };
  return flat;
}

FStar_UInt128_uint128
FStar_UInt128_add_underspec(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b)
{
  FStar_UInt128_uint128
  flat = { a.low + b.low, a.high + b.high + FStar_UInt128_carry(a.low + b.low, b.low) };
  return flat;
}

FStar_UInt128_uint128 FStar_UInt128_add_mod(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b)
{
  FStar_UInt128_uint128
  flat = { a.low + b.low, a.high + b.high + FStar_UInt128_carry(a.low + b.low, b.low) };
  return flat;
}

FStar_UInt128_uint128 FStar_UInt128_sub(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b)
{
  FStar_UInt128_uint128
  flat = { a.low - b.low, a.high - b.high - FStar_UInt128_carry(a.low, a.low - b.low) };
  return flat;
}

FStar_UInt128_uint128
FStar_UInt128_sub_underspec(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b)
{
  FStar_UInt128_uint128
  flat = { a.low - b.low, a.high - b.high - FStar_UInt128_carry(a.low, a.low - b.low) };
  return flat;
}

static FStar_UInt128_uint128
FStar_UInt128_sub_mod_impl(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b)
{
  FStar_UInt128_uint128
  flat = { a.low - b.low, a.high - b.high - FStar_UInt128_carry(a.low, a.low - b.low) };
  return flat;
}

FStar_UInt128_uint128 FStar_UInt128_sub_mod(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b)
{
  return FStar_UInt128_sub_mod_impl(a, b);
}

FStar_UInt128_uint128 FStar_UInt128_logand(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b)
{
  FStar_UInt128_uint128 flat = { a.low & b.low, a.high & b.high };
  return flat;
}

FStar_UInt128_uint128 FStar_UInt128_logxor(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b)
{
  FStar_UInt128_uint128 flat = { a.low ^ b.low, a.high ^ b.high };
  return flat;
}

FStar_UInt128_uint128 FStar_UInt128_logor(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b)
{
  FStar_UInt128_uint128 flat = { a.low | b.low, a.high | b.high };
  return flat;
}

FStar_UInt128_uint128 FStar_UInt128_lognot(FStar_UInt128_uint128 a)
{
  FStar_UInt128_uint128 flat = { ~a.low, ~a.high };
  return flat;
}

static uint32_t FStar_UInt128_u32_64 = (uint32_t)64U;

static uint64_t FStar_UInt128_add_u64_shift_left(uint64_t hi, uint64_t lo, uint32_t s)
{
  return (hi << s) + (lo >> (FStar_UInt128_u32_64 - s));
}

static uint64_t FStar_UInt128_add_u64_shift_left_respec(uint64_t hi, uint64_t lo, uint32_t s)
{
  return FStar_UInt128_add_u64_shift_left(hi, lo, s);
}

static FStar_UInt128_uint128
FStar_UInt128_shift_left_small(FStar_UInt128_uint128 a, uint32_t s)
{
  if (s == (uint32_t)0U)
    return a;
  else
  {
    FStar_UInt128_uint128
    flat = { a.low << s, FStar_UInt128_add_u64_shift_left_respec(a.high, a.low, s) };
    return flat;
  }
}

static FStar_UInt128_uint128
FStar_UInt128_shift_left_large(FStar_UInt128_uint128 a, uint32_t s)
{
  FStar_UInt128_uint128 flat = { (uint64_t)0U, a.low << (s - FStar_UInt128_u32_64) };
  return flat;
}

FStar_UInt128_uint128 FStar_UInt128_shift_left(FStar_UInt128_uint128 a, uint32_t s)
{
  if (s < FStar_UInt128_u32_64)
    return FStar_UInt128_shift_left_small(a, s);
  else
    return FStar_UInt128_shift_left_large(a, s);
}

static uint64_t FStar_UInt128_add_u64_shift_right(uint64_t hi, uint64_t lo, uint32_t s)
{
  return (lo >> s) + (hi << (FStar_UInt128_u32_64 - s));
}

static uint64_t FStar_UInt128_add_u64_shift_right_respec(uint64_t hi, uint64_t lo, uint32_t s)
{
  return FStar_UInt128_add_u64_shift_right(hi, lo, s);
}

static FStar_UInt128_uint128
FStar_UInt128_shift_right_small(FStar_UInt128_uint128 a, uint32_t s)
{
  if (s == (uint32_t)0U)
    return a;
  else
  {
    FStar_UInt128_uint128
    flat = { FStar_UInt128_add_u64_shift_right_respec(a.high, a.low, s), a.high >> s };
    return flat;
  }
}

static FStar_UInt128_uint128
FStar_UInt128_shift_right_large(FStar_UInt128_uint128 a, uint32_t s)
{
  FStar_UInt128_uint128 flat = { a.high >> (s - FStar_UInt128_u32_64), (uint64_t)0U };
  return flat;
}

FStar_UInt128_uint128 FStar_UInt128_shift_right(FStar_UInt128_uint128 a, uint32_t s)
{
  if (s < FStar_UInt128_u32_64)
    return FStar_UInt128_shift_right_small(a, s);
  else
    return FStar_UInt128_shift_right_large(a, s);
}

bool FStar_UInt128_eq(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b)
{
  return a.low == b.low && a.high == b.high;
}

bool FStar_UInt128_gt(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b)
{
  return a.high > b.high || (a.high == b.high && a.low > b.low);
}

bool FStar_UInt128_lt(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b)
{
  return a.high < b.high || (a.high == b.high && a.low < b.low);
}

bool FStar_UInt128_gte(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b)
{
  return a.high > b.high || (a.high == b.high && a.low >= b.low);
}

bool FStar_UInt128_lte(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b)
{
  return a.high < b.high || (a.high == b.high && a.low <= b.low);
}

FStar_UInt128_uint128 FStar_UInt128_eq_mask(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b)
{
  FStar_UInt128_uint128
  flat =
    {
      FStar_UInt64_eq_mask(a.low,
        b.low)
      & FStar_UInt64_eq_mask(a.high, b.high),
      FStar_UInt64_eq_mask(a.low,
        b.low)
      & FStar_UInt64_eq_mask(a.high, b.high)
    };
  return flat;
}

FStar_UInt128_uint128 FStar_UInt128_gte_mask(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b)
{
  FStar_UInt128_uint128
  flat =
    {
      (FStar_UInt64_gte_mask(a.high, b.high) & ~FStar_UInt64_eq_mask(a.high, b.high))
      | (FStar_UInt64_eq_mask(a.high, b.high) & FStar_UInt64_gte_mask(a.low, b.low)),
      (FStar_UInt64_gte_mask(a.high, b.high) & ~FStar_UInt64_eq_mask(a.high, b.high))
      | (FStar_UInt64_eq_mask(a.high, b.high) & FStar_UInt64_gte_mask(a.low, b.low))
    };
  return flat;
}

FStar_UInt128_uint128 FStar_UInt128_uint64_to_uint128(uint64_t a)
{
  FStar_UInt128_uint128 flat = { a, (uint64_t)0U };
  return flat;
}

uint64_t FStar_UInt128_uint128_to_uint64(FStar_UInt128_uint128 a)
{
  return a.low;
}

FStar_UInt128_uint128
(*FStar_UInt128_op_Plus_Hat)(FStar_UInt128_uint128 x0, FStar_UInt128_uint128 x1) =
  FStar_UInt128_add;

FStar_UInt128_uint128
(*FStar_UInt128_op_Plus_Question_Hat)(FStar_UInt128_uint128 x0, FStar_UInt128_uint128 x1) =
  FStar_UInt128_add_underspec;

FStar_UInt128_uint128
(*FStar_UInt128_op_Plus_Percent_Hat)(FStar_UInt128_uint128 x0, FStar_UInt128_uint128 x1) =
  FStar_UInt128_add_mod;

FStar_UInt128_uint128
(*FStar_UInt128_op_Subtraction_Hat)(FStar_UInt128_uint128 x0, FStar_UInt128_uint128 x1) =
  FStar_UInt128_sub;

FStar_UInt128_uint128
(*FStar_UInt128_op_Subtraction_Question_Hat)(
  FStar_UInt128_uint128 x0,
  FStar_UInt128_uint128 x1
) = FStar_UInt128_sub_underspec;

FStar_UInt128_uint128
(*FStar_UInt128_op_Subtraction_Percent_Hat)(FStar_UInt128_uint128 x0, FStar_UInt128_uint128 x1) =
  FStar_UInt128_sub_mod;

FStar_UInt128_uint128
(*FStar_UInt128_op_Amp_Hat)(FStar_UInt128_uint128 x0, FStar_UInt128_uint128 x1) =
  FStar_UInt128_logand;

FStar_UInt128_uint128
(*FStar_UInt128_op_Hat_Hat)(FStar_UInt128_uint128 x0, FStar_UInt128_uint128 x1) =
  FStar_UInt128_logxor;

FStar_UInt128_uint128
(*FStar_UInt128_op_Bar_Hat)(FStar_UInt128_uint128 x0, FStar_UInt128_uint128 x1) =
  FStar_UInt128_logor;

FStar_UInt128_uint128
(*FStar_UInt128_op_Less_Less_Hat)(FStar_UInt128_uint128 x0, uint32_t x1) =
  FStar_UInt128_shift_left;

FStar_UInt128_uint128
(*FStar_UInt128_op_Greater_Greater_Hat)(FStar_UInt128_uint128 x0, uint32_t x1) =
  FStar_UInt128_shift_right;

bool
(*FStar_UInt128_op_Equals_Hat)(FStar_UInt128_uint128 x0, FStar_UInt128_uint128 x1) =
  FStar_UInt128_eq;

bool
(*FStar_UInt128_op_Greater_Hat)(FStar_UInt128_uint128 x0, FStar_UInt128_uint128 x1) =
  FStar_UInt128_gt;

bool
(*FStar_UInt128_op_Less_Hat)(FStar_UInt128_uint128 x0, FStar_UInt128_uint128 x1) =
  FStar_UInt128_lt;

bool
(*FStar_UInt128_op_Greater_Equals_Hat)(FStar_UInt128_uint128 x0, FStar_UInt128_uint128 x1) =
  FStar_UInt128_gte;

bool
(*FStar_UInt128_op_Less_Equals_Hat)(FStar_UInt128_uint128 x0, FStar_UInt128_uint128 x1) =
  FStar_UInt128_lte;

static uint64_t FStar_UInt128_u64_mod_32(uint64_t a)
{
  return a & (uint64_t)0xffffffffU;
}

static uint32_t FStar_UInt128_u32_32 = (uint32_t)32U;

static uint64_t FStar_UInt128_u32_combine(uint64_t hi, uint64_t lo)
{
  return lo + (hi << FStar_UInt128_u32_32);
}

FStar_UInt128_uint128 FStar_UInt128_mul32(uint64_t x, uint32_t y)
{
  FStar_UInt128_uint128
  flat =
    {
      FStar_UInt128_u32_combine((x >> FStar_UInt128_u32_32)
        * (uint64_t)y
        + (FStar_UInt128_u64_mod_32(x) * (uint64_t)y >> FStar_UInt128_u32_32),
        FStar_UInt128_u64_mod_32(FStar_UInt128_u64_mod_32(x) * (uint64_t)y)),
      ((x >> FStar_UInt128_u32_32)
      * (uint64_t)y
      + (FStar_UInt128_u64_mod_32(x) * (uint64_t)y >> FStar_UInt128_u32_32))
      >> FStar_UInt128_u32_32
    };
  return flat;
}

typedef struct K___uint64_t_uint64_t_uint64_t_uint64_t_s
{
  uint64_t fst;
  uint64_t snd;
  uint64_t thd;
  uint64_t f3;
}
K___uint64_t_uint64_t_uint64_t_uint64_t;

static K___uint64_t_uint64_t_uint64_t_uint64_t
FStar_UInt128_mul_wide_impl_t_(uint64_t x, uint64_t y)
{
  K___uint64_t_uint64_t_uint64_t_uint64_t
  flat =
    {
      FStar_UInt128_u64_mod_32(x),
      FStar_UInt128_u64_mod_32(FStar_UInt128_u64_mod_32(x) * FStar_UInt128_u64_mod_32(y)),
      x
      >> FStar_UInt128_u32_32,
      (x >> FStar_UInt128_u32_32)
      * FStar_UInt128_u64_mod_32(y)
      + (FStar_UInt128_u64_mod_32(x) * FStar_UInt128_u64_mod_32(y) >> FStar_UInt128_u32_32)
    };
  return flat;
}

static uint64_t FStar_UInt128_u32_combine_(uint64_t hi, uint64_t lo)
{
  return lo + (hi << FStar_UInt128_u32_32);
}

static FStar_UInt128_uint128 FStar_UInt128_mul_wide_impl(uint64_t x, uint64_t y)
{
  K___uint64_t_uint64_t_uint64_t_uint64_t scrut = FStar_UInt128_mul_wide_impl_t_(x, y);
  uint64_t u1 = scrut.fst;
  uint64_t w3 = scrut.snd;
  uint64_t x_ = scrut.thd;
  uint64_t t_ = scrut.f3;
  FStar_UInt128_uint128
  flat =
    {
      FStar_UInt128_u32_combine_(u1 * (y >> FStar_UInt128_u32_32) + FStar_UInt128_u64_mod_32(t_),
        w3),
      x_
      * (y >> FStar_UInt128_u32_32)
      + (t_ >> FStar_UInt128_u32_32)
      + ((u1 * (y >> FStar_UInt128_u32_32) + FStar_UInt128_u64_mod_32(t_)) >> FStar_UInt128_u32_32)
    };
  return flat;
}

FStar_UInt128_uint128 FStar_UInt128_mul_wide(uint64_t x, uint64_t y)
{
  return FStar_UInt128_mul_wide_impl(x, y);
}

