// Auto-generated file. Do not edit!
//   Template: src/f32-dwconv/up-psimd.c.in
//   Generator: tools/xngen
//
// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <psimd.h>

#include <xnnpack/dwconv.h>


void xnn_f32_dwconv_minmax_ukernel_up4x9__psimd(
    size_t channels,
    size_t output_width,
    const float** input,
    const float* weights,
    float* output,
    size_t input_stride,
    size_t output_increment,
    size_t input_offset,
    const float* zero,
    const union xnn_f32_minmax_params params[restrict XNN_MIN_ELEMENTS(1)]) XNN_DISABLE_TSAN
{
  assert(channels != 0);
  assert(output_width != 0);

  const psimd_f32 vmax = psimd_load_splat_f32(&params->scalar.max);
  const psimd_f32 vmin = psimd_load_splat_f32(&params->scalar.min);
  do {
    const float* i0 = input[0];
    assert(i0 != NULL);
    if XNN_UNPREDICTABLE(i0 != zero) {
      i0 = (const float*) ((uintptr_t) i0 + input_offset);
    }
    const float* i1 = input[1];
    assert(i1 != NULL);
    if XNN_UNPREDICTABLE(i1 != zero) {
      i1 = (const float*) ((uintptr_t) i1 + input_offset);
    }
    const float* i2 = input[2];
    assert(i2 != NULL);
    if XNN_UNPREDICTABLE(i2 != zero) {
      i2 = (const float*) ((uintptr_t) i2 + input_offset);
    }
    const float* i3 = input[3];
    assert(i3 != NULL);
    if XNN_UNPREDICTABLE(i3 != zero) {
      i3 = (const float*) ((uintptr_t) i3 + input_offset);
    }
    const float* i4 = input[4];
    assert(i4 != NULL);
    if XNN_UNPREDICTABLE(i4 != zero) {
      i4 = (const float*) ((uintptr_t) i4 + input_offset);
    }
    const float* i5 = input[5];
    assert(i5 != NULL);
    if XNN_UNPREDICTABLE(i5 != zero) {
      i5 = (const float*) ((uintptr_t) i5 + input_offset);
    }
    const float* i6 = input[6];
    assert(i6 != NULL);
    if XNN_UNPREDICTABLE(i6 != zero) {
      i6 = (const float*) ((uintptr_t) i6 + input_offset);
    }
    const float* i7 = input[7];
    assert(i7 != NULL);
    if XNN_UNPREDICTABLE(i7 != zero) {
      i7 = (const float*) ((uintptr_t) i7 + input_offset);
    }
    const float* i8 = input[8];
    assert(i8 != NULL);
    if XNN_UNPREDICTABLE(i8 != zero) {
      i8 = (const float*) ((uintptr_t) i8 + input_offset);
    }
    input = (const float**) ((uintptr_t) input + input_stride);

    size_t c = channels;
    const float* w = weights;
    for (; c >= 4; c -= 4) {
      psimd_f32 vacc0123p0 = psimd_load_f32(w);


      const psimd_f32 vi0x0123 = psimd_load_f32(i0);
      i0 += 4;

      const psimd_f32 vk0x0123 = psimd_load_f32(w + 4);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi0x0123, vk0x0123);

      const psimd_f32 vi1x0123 = psimd_load_f32(i1);
      i1 += 4;

      const psimd_f32 vk1x0123 = psimd_load_f32(w + 8);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi1x0123, vk1x0123);

      const psimd_f32 vi2x0123 = psimd_load_f32(i2);
      i2 += 4;

      const psimd_f32 vk2x0123 = psimd_load_f32(w + 12);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi2x0123, vk2x0123);

      const psimd_f32 vi3x0123 = psimd_load_f32(i3);
      i3 += 4;

      const psimd_f32 vk3x0123 = psimd_load_f32(w + 16);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi3x0123, vk3x0123);

      const psimd_f32 vi4x0123 = psimd_load_f32(i4);
      i4 += 4;

      const psimd_f32 vk4x0123 = psimd_load_f32(w + 20);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi4x0123, vk4x0123);

      const psimd_f32 vi5x0123 = psimd_load_f32(i5);
      i5 += 4;

      const psimd_f32 vk5x0123 = psimd_load_f32(w + 24);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi5x0123, vk5x0123);

      const psimd_f32 vi6x0123 = psimd_load_f32(i6);
      i6 += 4;

      const psimd_f32 vk6x0123 = psimd_load_f32(w + 28);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi6x0123, vk6x0123);

      const psimd_f32 vi7x0123 = psimd_load_f32(i7);
      i7 += 4;

      const psimd_f32 vk7x0123 = psimd_load_f32(w + 32);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi7x0123, vk7x0123);

      const psimd_f32 vi8x0123 = psimd_load_f32(i8);
      i8 += 4;

      const psimd_f32 vk8x0123 = psimd_load_f32(w + 36);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi8x0123, vk8x0123);

      w += 40;


      psimd_f32 vacc0123 = psimd_max_f32(vacc0123p0, vmin);
      vacc0123 = psimd_min_f32(vacc0123, vmax);

      psimd_store_f32(output, vacc0123);
      output += 4;
    }
    if XNN_UNLIKELY(c != 0) {
      psimd_f32 vacc0123p0 = psimd_load_f32(w);

      const psimd_f32 vi0x0123 = psimd_load_f32(i0);
      const psimd_f32 vk0x0123 = psimd_load_f32(w + 4);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi0x0123, vk0x0123);

      const psimd_f32 vi1x0123 = psimd_load_f32(i1);
      const psimd_f32 vk1x0123 = psimd_load_f32(w + 8);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi1x0123, vk1x0123);

      const psimd_f32 vi2x0123 = psimd_load_f32(i2);
      const psimd_f32 vk2x0123 = psimd_load_f32(w + 12);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi2x0123, vk2x0123);

      const psimd_f32 vi3x0123 = psimd_load_f32(i3);
      const psimd_f32 vk3x0123 = psimd_load_f32(w + 16);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi3x0123, vk3x0123);

      const psimd_f32 vi4x0123 = psimd_load_f32(i4);
      const psimd_f32 vk4x0123 = psimd_load_f32(w + 20);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi4x0123, vk4x0123);

      const psimd_f32 vi5x0123 = psimd_load_f32(i5);
      const psimd_f32 vk5x0123 = psimd_load_f32(w + 24);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi5x0123, vk5x0123);

      const psimd_f32 vi6x0123 = psimd_load_f32(i6);
      const psimd_f32 vk6x0123 = psimd_load_f32(w + 28);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi6x0123, vk6x0123);

      const psimd_f32 vi7x0123 = psimd_load_f32(i7);
      const psimd_f32 vk7x0123 = psimd_load_f32(w + 32);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi7x0123, vk7x0123);

      const psimd_f32 vi8x0123 = psimd_load_f32(i8);
      const psimd_f32 vk8x0123 = psimd_load_f32(w + 36);
      vacc0123p0 = psimd_qfma_f32(vacc0123p0, vi8x0123, vk8x0123);


      psimd_f32 vacc0123 = psimd_max_f32(vacc0123p0, vmin);
      vacc0123 = psimd_min_f32(vacc0123, vmax);

      if (c & 2) {
        psimd_store2_f32(output, vacc0123);
        vacc0123 = psimd_concat_hi_f32(vacc0123, vacc0123);
        output += 2;
      }
      if (c & 1) {
        psimd_store1_f32(output, vacc0123);
        output += 1;
      }
    }

    output = (float*) ((uintptr_t) output + output_increment);
  } while (--output_width != 0);
}
