#ifndef WORKSPACE_H
#define WORKSPACE_H

/*
 * This file was autogenerated by OSQP-Python on April 30, 2023 at 17:57:13.
 * 
 * This file contains the prototypes for all the workspace variables needed
 * by OSQP. The actual data is contained inside workspace.c.
 */

#include "types.h"
#include "qdldl_interface.h"

// Data structure prototypes
extern csc Pdata;
extern csc Adata;
extern c_float qdata[244];
extern c_float ldata[284];
extern c_float udata[284];
extern OSQPData data;

// Settings structure prototype
extern OSQPSettings settings;

// Scaling structure prototypes
extern c_float Dscaling[244];
extern c_float Dinvscaling[244];
extern c_float Escaling[284];
extern c_float Einvscaling[284];
extern OSQPScaling scaling;

// Prototypes for linsys_solver structure
extern csc linsys_solver_L;
extern c_float linsys_solver_Dinv[528];
extern c_int linsys_solver_P[528];
extern c_float linsys_solver_bp[528];
extern c_float linsys_solver_sol[528];
extern c_float linsys_solver_rho_inv_vec[284];
extern c_int linsys_solver_Pdiag_idx[120];
extern csc linsys_solver_KKT;
extern c_int linsys_solver_PtoKKT[120];
extern c_int linsys_solver_AtoKKT[1164];
extern c_int linsys_solver_rhotoKKT[284];
extern QDLDL_float linsys_solver_D[528];
extern QDLDL_int linsys_solver_etree[528];
extern QDLDL_int linsys_solver_Lnz[528];
extern QDLDL_int   linsys_solver_iwork[1584];
extern QDLDL_bool  linsys_solver_bwork[528];
extern QDLDL_float linsys_solver_fwork[528];
extern qdldl_solver linsys_solver;

// Prototypes for solution
extern c_float xsolution[244];
extern c_float ysolution[284];

extern OSQPSolution solution;

// Prototype for info structure
extern OSQPInfo info;

// Prototypes for the workspace
extern c_float work_rho_vec[284];
extern c_float work_rho_inv_vec[284];
extern c_int work_constr_type[284];
extern c_float work_x[244];
extern c_float work_y[284];
extern c_float work_z[284];
extern c_float work_xz_tilde[528];
extern c_float work_x_prev[244];
extern c_float work_z_prev[284];
extern c_float work_Ax[284];
extern c_float work_Px[244];
extern c_float work_Aty[244];
extern c_float work_delta_y[284];
extern c_float work_Atdelta_y[244];
extern c_float work_delta_x[244];
extern c_float work_Pdelta_x[244];
extern c_float work_Adelta_x[284];
extern c_float work_D_temp[244];
extern c_float work_D_temp_A[244];
extern c_float work_E_temp[284];

extern OSQPWorkspace workspace;

#endif // ifndef WORKSPACE_H
