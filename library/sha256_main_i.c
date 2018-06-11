/* This file was auto-generated by KreMLin! */

#include "sha256_main_i.h"

void
sha256_main_i_DafnyMemcpy(
  uint8_t *dst,
  uint64_t dst_offset,
  uint8_t *src,
  uint64_t src_offset,
  uint64_t len
)
{
  uint64_t pos = (uint64_t)0U;
  pos = (uint64_t)0U;
  while (pos < len)
  {
    dst[(uint32_t)(dst_offset + pos)] = src[(uint32_t)(src_offset + pos)];
    pos = pos + (uint64_t)1U;
  }
}

void  sha256_main_i_DafnyBzero(uint8_t *ptr, uint32_t offset, uint32_t len)
{
  uint32_t pos = (uint32_t)0U;
  pos = (uint32_t)0U;
  while (pos < len)
  {
    ptr[(uint32_t)(offset + pos)] = (uint8_t)0U;
    pos = pos + (uint32_t)1U;
  }
}

void sha256_main_i_CopyUint64ToByteArray(uint8_t *a, uint64_t offset, uint64_t u)
{
  a[(uint32_t)offset] = (uint8_t)(u / (uint64_t)72057594037927936U);
  a[(uint32_t)(offset + (uint64_t)1U)] =
    (uint8_t)(u / (uint64_t)281474976710656U % (uint64_t)256U);
  a[(uint32_t)(offset + (uint64_t)2U)] = (uint8_t)(u / (uint64_t)1099511627776U % (uint64_t)256U);
  a[(uint32_t)(offset + (uint64_t)3U)] = (uint8_t)(u / (uint64_t)4294967296U % (uint64_t)256U);
  a[(uint32_t)(offset + (uint64_t)4U)] = (uint8_t)(u / (uint64_t)16777216U % (uint64_t)256U);
  a[(uint32_t)(offset + (uint64_t)5U)] = (uint8_t)(u / (uint64_t)65536U % (uint64_t)256U);
  a[(uint32_t)(offset + (uint64_t)6U)] = (uint8_t)(u / (uint64_t)256U % (uint64_t)256U);
  a[(uint32_t)(offset + (uint64_t)7U)] = (uint8_t)(u % (uint64_t)256U);
}

void  sha256_main_i_CopyUint32Array(uint32_t *dst, uint32_t *src, uint64_t len)
{
  uint64_t pos = (uint64_t)0U;
  pos = (uint64_t)0U;
  while (pos < len)
  {
    dst[(uint32_t)pos] = src[(uint32_t)pos];
    pos = pos + (uint64_t)1U;
  }
}

void

sha256_main_i_SHA256_DigestOneBlock(
  sha256_main_i_SHA256Context *ctx,
  uint32_t *W,
  uint8_t *ptr,
  uint64_t offset
)
{
  sha256_main_i_SHA256_ComputeInitialWs(ptr,
    (uint32_t)offset,
    W,
    (uint32_t)0U,
    (uint32_t)1U,
    (uint32_t)2U,
    (uint32_t)3U);
  sha256_main_i_SHA256_Compute64Steps(ctx->H,
    W,
    (uint32_t)0U,
    (uint32_t)1U,
    (uint32_t)2U,
    (uint32_t)3U,
    (uint32_t)4U,
    (uint32_t)5U,
    (uint32_t)6U,
    (uint32_t)7U,
    (uint32_t)8U,
    (uint32_t)9U,
    (uint32_t)10U,
    (uint32_t)11U,
    (uint32_t)12U,
    (uint32_t)13U,
    (uint32_t)14U,
    (uint32_t)15U,
    (uint32_t)16U);
}

void
sha256_main_i_SHA256_BlockDataOrder(
  sha256_main_i_SHA256Context *ctx,
  uint8_t *ptr,
  uint64_t offset,
  uint64_t len
)
{
  uint64_t pos = (uint64_t)0U;
  uint32_t *W;
  uint32_t buf[(uint32_t)(uint64_t)64U];
  memset(buf, 0U, (uint32_t)(uint64_t)64U * sizeof buf[0U]);
  W = buf;
  while (pos < len)
  {
    sha256_main_i_SHA256_DigestOneBlock(ctx, W, ptr, offset + pos);
    pos = pos + (uint64_t)64U;
  }
}

void
sha256_main_i_SHA256UpdateWhenNoUnprocessedBytes(
  sha256_main_i_SHA256Context *ctx,
  uint8_t *bytes,
  uint64_t offset,
  uint64_t len
)
{
  uint64_t num_blocks = (uint64_t)0U;
  uint32_t num_leftover_bytes = (uint32_t)0U;
  uint64_t num_block_bytes = (uint64_t)0U;
  
  num_blocks = len / (uint64_t)64U;
  num_leftover_bytes = (uint32_t)(len % (uint64_t)64U);
  num_block_bytes = (uint64_t)64U * num_blocks;

  sha256_main_i_SHA256_BlockDataOrder(ctx, bytes, offset, num_block_bytes);
  if (num_leftover_bytes == (uint32_t)0U)
  {
    ctx->num_total_bytes = ctx->num_total_bytes + num_block_bytes;
    return;
  }
  sha256_main_i_DafnyMemcpy(ctx->unprocessed_bytes,
    (uint64_t)0U,
    bytes,
    offset + num_block_bytes,
    (uint64_t)num_leftover_bytes);
  ctx->num_unprocessed_bytes = num_leftover_bytes;
  ctx->num_total_bytes = ctx->num_total_bytes + num_block_bytes + (uint64_t)num_leftover_bytes;
}

void  sha256_main_i_SHA256_Init(sha256_main_i_SHA256Context *ctx)
{
  ctx->H[(uint32_t)(uint64_t)0U] = (uint32_t)1779033703U;
  ctx->H[(uint32_t)(uint64_t)1U] = (uint32_t)3144134277U;
  ctx->H[(uint32_t)(uint64_t)2U] = (uint32_t)1013904242U;
  ctx->H[(uint32_t)(uint64_t)3U] = (uint32_t)2773480762U;
  ctx->H[(uint32_t)(uint64_t)4U] = (uint32_t)1359893119U;
  ctx->H[(uint32_t)(uint64_t)5U] = (uint32_t)2600822924U;
  ctx->H[(uint32_t)(uint64_t)6U] = (uint32_t)528734635U;
  ctx->H[(uint32_t)(uint64_t)7U] = (uint32_t)1541459225U;
  ctx->num_unprocessed_bytes = (uint32_t)0U;
  ctx->num_total_bytes = (uint64_t)0U;
}

void
sha256_main_i_SHA256_Update(
  sha256_main_i_SHA256Context *ctx,
  uint8_t *bytes,
  uint64_t offset,
  uint64_t len
)
{
  uint64_t remaining_room = (uint64_t)0U;
  uint64_t new_offset = (uint64_t)0U;
  uint64_t new_len = (uint64_t)0U;

  if (len == (uint64_t)0U)
    return;
  if (ctx->num_unprocessed_bytes == (uint32_t)0U)
  {
    sha256_main_i_SHA256UpdateWhenNoUnprocessedBytes(ctx, bytes, offset, len);
    return;
  }
  remaining_room = (uint64_t)((uint32_t)64U - ctx->num_unprocessed_bytes);
  if (len < remaining_room)
  {
    sha256_main_i_DafnyMemcpy(ctx->unprocessed_bytes,
      (uint64_t)ctx->num_unprocessed_bytes,
      bytes,
      offset,
      len);
    ctx->num_unprocessed_bytes = ctx->num_unprocessed_bytes + (uint32_t)len;
    ctx->num_total_bytes = ctx->num_total_bytes + len;
    return;
  }
  sha256_main_i_DafnyMemcpy(ctx->unprocessed_bytes,
    (uint64_t)ctx->num_unprocessed_bytes,
    bytes,
    offset,
    remaining_room);
  sha256_main_i_SHA256_BlockDataOrder(ctx, ctx->unprocessed_bytes, (uint64_t)0U, (uint64_t)64U);
  ctx->num_total_bytes = ctx->num_total_bytes + remaining_room;
  ctx->num_unprocessed_bytes = (uint32_t)0U;
  if (len == remaining_room)
    return;
  new_offset = offset + remaining_room;
  new_len = len - remaining_room;
  sha256_main_i_SHA256UpdateWhenNoUnprocessedBytes(ctx, bytes, new_offset, new_len);
}

void  sha256_main_i_SHA256_Final(sha256_main_i_SHA256Context *ctx, uint32_t *digest)
{
  uint64_t message_bits = (uint64_t)0U;
  message_bits = ctx->num_total_bytes * (uint64_t)8U;
  ctx->unprocessed_bytes[(uint32_t)ctx->num_unprocessed_bytes] = (uint8_t)128U;
  if (ctx->num_unprocessed_bytes <= (uint32_t)55U)
  {
    sha256_main_i_DafnyBzero(ctx->unprocessed_bytes,
      ctx->num_unprocessed_bytes + (uint32_t)1U,
      (uint32_t)55U - ctx->num_unprocessed_bytes);
    sha256_main_i_CopyUint64ToByteArray(ctx->unprocessed_bytes, (uint64_t)56U, message_bits);
    sha256_main_i_SHA256_BlockDataOrder(ctx, ctx->unprocessed_bytes, (uint64_t)0U, (uint64_t)64U);
  }
  else
  {
    sha256_main_i_DafnyBzero(ctx->unprocessed_bytes,
      ctx->num_unprocessed_bytes + (uint32_t)1U,
      (uint32_t)63U - ctx->num_unprocessed_bytes);
    sha256_main_i_SHA256_BlockDataOrder(ctx, ctx->unprocessed_bytes, (uint64_t)0U, (uint64_t)64U);
    sha256_main_i_DafnyBzero(ctx->unprocessed_bytes, (uint32_t)0U, (uint32_t)56U);
    sha256_main_i_CopyUint64ToByteArray(ctx->unprocessed_bytes, (uint64_t)56U, message_bits);
    sha256_main_i_SHA256_BlockDataOrder(ctx, ctx->unprocessed_bytes, (uint64_t)0U, (uint64_t)64U);
  }
  sha256_main_i_CopyUint32Array(digest, ctx->H, (uint64_t)8U);
}

void
sha256_main_i_SHA256_Complete(uint8_t *bytes, uint64_t offset, uint64_t len, uint32_t *digest)
{
  sha256_main_i_SHA256Context c =
      (sha256_main_i_SHA256Context){
        .H = { 0 },
        .unprocessed_bytes = { 0 },
        .num_unprocessed_bytes = (uint32_t)0U,
        .num_total_bytes = (uint64_t)0U
      };
  sha256_main_i_SHA256Context *ctx = &c;
  sha256_main_i_SHA256_Init(ctx);
  sha256_main_i_SHA256_Update(ctx, bytes, offset, len);
  sha256_main_i_SHA256_Final(ctx, digest);
}

