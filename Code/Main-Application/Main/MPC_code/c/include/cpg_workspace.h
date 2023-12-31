
/*
Auto-generated by CVXPYgen on April 30, 2023 at 17:57:19.
Content: Type definitions and variable declarations.
*/

#include "types.h"

#ifndef CPG_TYPES_H
# define CPG_TYPES_H

// Canonical parameters
typedef struct {
  csc        *P;         // Canonical parameter P
  c_float    *q;         // Canonical parameter q
  c_float    d;          // Canonical parameter d
  csc        *A;         // Canonical parameter A
  c_float    *l;         // Canonical parameter l
  c_float    *u;         // Canonical parameter u
} Canon_Params_t;

// Flags indicating outdated canonical parameters
typedef struct {
  int        P;          // Bool, if canonical parameter P outdated
  int        q;          // Bool, if canonical parameter q outdated
  int        d;          // Bool, if canonical parameter d outdated
  int        A;          // Bool, if canonical parameter A outdated
  int        l;          // Bool, if canonical parameter l outdated
  int        u;          // Bool, if canonical parameter u outdated
} Canon_Outdated_t;

// Primal solution
typedef struct {
  c_float    *S;         // Your variable S
  c_float    *U;         // Your variable U
} CPG_Prim_t;

// Dual solution
typedef struct {
  c_float    *d0;        // Your dual variable for constraint d0
  c_float    *d1;        // Your dual variable for constraint d1
  c_float    *d2;        // Your dual variable for constraint d2
  c_float    *d3;        // Your dual variable for constraint d3
  c_float    *d4;        // Your dual variable for constraint d4
  c_float    *d5;        // Your dual variable for constraint d5
  c_float    *d6;        // Your dual variable for constraint d6
  c_float    *d7;        // Your dual variable for constraint d7
  c_float    *d8;        // Your dual variable for constraint d8
  c_float    *d9;        // Your dual variable for constraint d9
  c_float    *d10;       // Your dual variable for constraint d10
  c_float    *d11;       // Your dual variable for constraint d11
  c_float    *d12;       // Your dual variable for constraint d12
  c_float    *d13;       // Your dual variable for constraint d13
  c_float    *d14;       // Your dual variable for constraint d14
  c_float    *d15;       // Your dual variable for constraint d15
  c_float    *d16;       // Your dual variable for constraint d16
  c_float    *d17;       // Your dual variable for constraint d17
  c_float    *d18;       // Your dual variable for constraint d18
  c_float    *d19;       // Your dual variable for constraint d19
  c_float    *d20;       // Your dual variable for constraint d20
  c_float    *d21;       // Your dual variable for constraint d21
  c_float    *d22;       // Your dual variable for constraint d22
  c_float    *d23;       // Your dual variable for constraint d23
  c_float    *d24;       // Your dual variable for constraint d24
  c_float    *d25;       // Your dual variable for constraint d25
  c_float    *d26;       // Your dual variable for constraint d26
  c_float    *d27;       // Your dual variable for constraint d27
  c_float    *d28;       // Your dual variable for constraint d28
  c_float    *d29;       // Your dual variable for constraint d29
  c_float    *d30;       // Your dual variable for constraint d30
  c_float    *d31;       // Your dual variable for constraint d31
  c_float    *d32;       // Your dual variable for constraint d32
  c_float    *d33;       // Your dual variable for constraint d33
  c_float    *d34;       // Your dual variable for constraint d34
  c_float    *d35;       // Your dual variable for constraint d35
  c_float    *d36;       // Your dual variable for constraint d36
  c_float    *d37;       // Your dual variable for constraint d37
  c_float    *d38;       // Your dual variable for constraint d38
  c_float    *d39;       // Your dual variable for constraint d39
  c_float    *d40;       // Your dual variable for constraint d40
  c_float    *d41;       // Your dual variable for constraint d41
  c_float    *d42;       // Your dual variable for constraint d42
  c_float    *d43;       // Your dual variable for constraint d43
  c_float    *d44;       // Your dual variable for constraint d44
  c_float    *d45;       // Your dual variable for constraint d45
  c_float    *d46;       // Your dual variable for constraint d46
  c_float    *d47;       // Your dual variable for constraint d47
  c_float    *d48;       // Your dual variable for constraint d48
  c_float    *d49;       // Your dual variable for constraint d49
  c_float    *d50;       // Your dual variable for constraint d50
  c_float    *d51;       // Your dual variable for constraint d51
  c_float    *d52;       // Your dual variable for constraint d52
  c_float    *d53;       // Your dual variable for constraint d53
  c_float    *d54;       // Your dual variable for constraint d54
  c_float    *d55;       // Your dual variable for constraint d55
  c_float    *d56;       // Your dual variable for constraint d56
  c_float    *d57;       // Your dual variable for constraint d57
  c_float    *d58;       // Your dual variable for constraint d58
  c_float    *d59;       // Your dual variable for constraint d59
  c_float    *d60;       // Your dual variable for constraint d60
} CPG_Dual_t;

// Solver information
typedef struct {
  c_float    obj_val;    // Objective function value
  c_int      iter;       // Number of iterations
  char       *status;    // Solver status
  c_float    pri_res;    // Primal residual
  c_float    dua_res;    // Dual residual
} CPG_Info_t;

// Solution and solver information
typedef struct {
  CPG_Prim_t *prim;      // Primal solution
  CPG_Dual_t *dual;      // Dual solution
  CPG_Info_t *info;      // Solver info
} CPG_Result_t;

#endif // ifndef CPG_TYPES_H

// Vector containing flattened user-defined parameters
extern c_float cpg_params_vec[49];

// Sparse mappings from user-defined to canonical parameters
extern csc canon_A_map;
extern csc canon_l_map;
extern csc canon_u_map;

// Canonical parameters
extern csc canon_P;
extern c_float canon_q[244];
extern csc canon_A;
extern c_float canon_l[284];
extern c_float canon_u[284];

// Struct containing canonical parameters
extern Canon_Params_t Canon_Params;

// Struct containing flags for outdated canonical parameters
extern Canon_Outdated_t Canon_Outdated;

// Struct containing primal solution
extern CPG_Prim_t CPG_Prim;

// Struct containing dual solution
extern CPG_Dual_t CPG_Dual;

// Struct containing solver info
extern CPG_Info_t CPG_Info;

// Struct containing solution and info
extern CPG_Result_t CPG_Result;
