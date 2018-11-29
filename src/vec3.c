/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#include "../include/cglm/cglm.h"
#include "../include/cglm/call.h"

CGLM_EXPORT
void
glmc_vec3(vec4 v4, vec3 dest) {
  glm_vec3(v4, dest);
}

CGLM_EXPORT
void
glmc_vec3_copy(vec3 a, vec3 dest) {
  glm_vec3_copy(a, dest);
}

CGLM_EXPORT
void
glmc_vec3_zero(vec3 v) {
  glm_vec3_zero(v);
}

CGLM_EXPORT
void
glmc_vec3_one(vec3 v) {
  glm_vec3_one(v);
}

CGLM_EXPORT
float
glmc_vec3_dot(vec3 a, vec3 b) {
  return glm_vec3_dot(a, b);
}

CGLM_EXPORT
void
glmc_vec3_cross(vec3 a, vec3 b, vec3 d) {
  glm_vec3_cross(a, b, d);
}

CGLM_EXPORT
float
glmc_vec3_norm(vec3 vec) {
  return glm_vec3_norm(vec);
}

CGLM_EXPORT
void
glmc_vec3_normalize_to(vec3 vec, vec3 dest) {
  glm_vec3_normalize_to(vec, dest);
}

CGLM_EXPORT
void
glmc_vec3_normalize(vec3 v) {
  glm_vec3_normalize(v);
}

CGLM_EXPORT
float
glmc_vec3_norm2(vec3 vec) {
  return glm_vec3_norm2(vec);
}

CGLM_EXPORT
void
glmc_vec3_add(vec3 v1, vec3 v2, vec3 dest) {
  glm_vec3_add(v1, v2, dest);
}

CGLM_EXPORT
void
glmc_vec3_adds(vec3 v, float s, vec3 dest) {
  glm_vec3_adds(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec3_sub(vec3 a, vec3 b, vec3 dest) {
  glm_vec3_sub(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec3_subs(vec3 v, float s, vec3 dest) {
  glm_vec3_subs(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec3_mul(vec3 a, vec3 b, vec3 d) {
  glm_vec3_mul(a, b, d);
}

CGLM_EXPORT
void
glmc_vec3_scale(vec3 v, float s, vec3 dest) {
  glm_vec3_scale(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec3_scale_as(vec3 v, float s, vec3 dest) {
  glm_vec3_scale_as(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec3_div(vec3 a, vec3 b, vec3 dest) {
  glm_vec3_div(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec3_divs(vec3 a, float s, vec3 dest) {
  glm_vec3_divs(a, s, dest);
}

CGLM_EXPORT
void
glmc_vec3_addadd(vec3 a, vec3 b, vec3 dest) {
  glm_vec3_addadd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec3_subadd(vec3 a, vec3 b, vec3 dest) {
  glm_vec3_subadd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec3_muladd(vec3 a, vec3 b, vec3 dest) {
  glm_vec3_muladd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec3_muladds(vec3 a, float s, vec3 dest) {
  glm_vec3_muladds(a, s, dest);
}

CGLM_EXPORT
void
glmc_vec3_negate(vec3 v) {
  glm_vec3_negate(v);
}

CGLM_EXPORT
void
glmc_vec3_negate_to(vec3 v, vec3 dest) {
  glm_vec3_negate_to(v, dest);
}

CGLM_EXPORT
void
glmc_vec3_inv(vec3 v) {
  glm_vec3_inv(v);
}

CGLM_EXPORT
void
glmc_vec3_inv_to(vec3 v, vec3 dest) {
  glm_vec3_inv_to(v, dest);
}

CGLM_EXPORT
float
glmc_vec3_angle(vec3 v1, vec3 v2) {
  return glm_vec3_angle(v1, v2);
}

CGLM_EXPORT
void
glmc_vec3_rotate(vec3 v, float angle, vec3 axis) {
  glm_vec3_rotate(v, angle, axis);
}

CGLM_EXPORT
void
glmc_vec3_rotate_m4(mat4 m, vec3 v, vec3 dest) {
  glm_vec3_rotate_m4(m, v, dest);
}

CGLM_EXPORT
void
glmc_vec3_rotate_m3(mat3 m, vec3 v, vec3 dest) {
  glm_vec3_rotate_m3(m, v, dest);
}

CGLM_EXPORT
void
glmc_vec3_proj(vec3 a, vec3 b, vec3 dest) {
  glm_vec3_proj(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec3_center(vec3 v1, vec3 v2, vec3 dest) {
  glm_vec3_center(v1, v2, dest);
}

CGLM_EXPORT
float
glmc_vec3_distance2(vec3 v1, vec3 v2) {
  return glm_vec3_distance2(v1, v2);
}

CGLM_EXPORT
float
glmc_vec3_distance(vec3 v1, vec3 v2) {
  return glm_vec3_distance(v1, v2);
}

CGLM_EXPORT
void
glmc_vec3_maxv(vec3 v1, vec3 v2, vec3 dest) {
  glm_vec3_minv(v1, v2, dest);
}

CGLM_EXPORT
void
glmc_vec3_minv(vec3 v1, vec3 v2, vec3 dest) {
  glm_vec3_maxv(v1, v2, dest);
}

CGLM_EXPORT
void
glmc_vec3_clamp(vec3 v, float minVal, float maxVal) {
  glm_vec3_clamp(v, minVal, maxVal);
}

CGLM_EXPORT
void
glmc_vec3_ortho(vec3 v, vec3 dest) {
  glm_vec3_ortho(v, dest);
}

CGLM_EXPORT
void
glmc_vec3_lerp(vec3 from, vec3 to, float t, vec3 dest) {
  glm_vec3_lerp(from, to, t, dest);
}

/* ext */

CGLM_EXPORT
void
glmc_vec3_mulv(vec3 a, vec3 b, vec3 d) {
  glm_vec3_mulv(a, b, d);
}

CGLM_EXPORT
void
glmc_vec3_broadcast(float val, vec3 d) {
  glm_vec3_broadcast(val, d);
}

CGLM_EXPORT
bool
glmc_vec3_eq(vec3 v, float val) {
  return glm_vec3_eq(v, val);
}

CGLM_EXPORT
bool
glmc_vec3_eq_eps(vec3 v, float val) {
  return glm_vec3_eq_eps(v, val);
}

CGLM_EXPORT
bool
glmc_vec3_eq_all(vec3 v) {
  return glm_vec3_eq_all(v);
}

CGLM_EXPORT
bool
glmc_vec3_eqv(vec3 v1, vec3 v2) {
  return glm_vec3_eqv(v1, v2);
}

CGLM_EXPORT
bool
glmc_vec3_eqv_eps(vec3 v1, vec3 v2) {
  return glm_vec3_eqv_eps(v1, v2);
}

CGLM_EXPORT
float
glmc_vec3_max(vec3 v) {
  return glm_vec3_max(v);
}

CGLM_EXPORT
float
glmc_vec3_min(vec3 v) {
  return glm_vec3_min(v);
}

CGLM_EXPORT
bool
glmc_vec3_isnan(vec3 v) {
  return glm_vec3_isnan(v);
}

CGLM_EXPORT
bool
glmc_vec3_isinf(vec3 v) {
  return glm_vec3_isinf(v);
}

CGLM_EXPORT
bool
glmc_vec3_isvalid(vec3 v) {
  return glm_vec3_isvalid(v);
}

CGLM_EXPORT
void
glmc_vec3_sign(vec3 v, vec3 dest) {
  glm_vec3_sign(v, dest);
}

CGLM_EXPORT
void
glmc_vec3_sqrt(vec3 v, vec3 dest) {
  glm_vec3_sqrt(v, dest);
}
