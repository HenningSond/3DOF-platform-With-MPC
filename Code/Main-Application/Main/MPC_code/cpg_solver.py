
"""
Auto-generated by CVXPYgen on April 30, 2023 at 17:57:19.
Content: Custom solve method for CVXPY interface.
"""

import time
import warnings
import numpy as np
from cvxpy.reductions import Solution
from cvxpy.problems.problem import SolverStats
from MPC_code import cpg_module


def cpg_solve(prob, updated_params=None, **kwargs):

    # set flags for updated parameters
    upd = cpg_module.cpg_updated()
    if updated_params is None:
        updated_params = ["Qsqrt", "Rsqrt", "A", "B", "s_error"]
    for p in updated_params:
        try:
            setattr(upd, p, True)
        except AttributeError:
            raise(AttributeError("%s is not a parameter." % p))

    # set solver settings
    cpg_module.set_solver_default_settings()
    for key, value in kwargs.items():
        try:
            eval('cpg_module.set_solver_%s(value)' % key)
        except AttributeError:
            raise(AttributeError('Solver setting "%s" not available.' % key))

    # set parameter values
    par = cpg_module.cpg_params()
    par.Qsqrt = list(prob.param_dict['Qsqrt'].value.flatten(order='F'))
    par.Rsqrt = list(prob.param_dict['Rsqrt'].value.flatten(order='F'))
    par.A = list(prob.param_dict['A'].value.flatten(order='F'))
    par.B = list(prob.param_dict['B'].value.flatten(order='F'))
    par.s_error = list(prob.param_dict['s_error'].value.flatten(order='F'))

    # solve
    t0 = time.time()
    res = cpg_module.solve(upd, par)
    t1 = time.time()

    # store solution in problem object
    prob._clear_solution()
    prob.var_dict['S'].value = np.array(res.cpg_prim.S).reshape((4, 21), order='F')
    prob.var_dict['U'].value = np.array(res.cpg_prim.U).reshape((2, 20), order='F')
    prob.constraints[0].save_dual_value(np.array(res.cpg_dual.d0).reshape(4))
    prob.constraints[1].save_dual_value(np.array(res.cpg_dual.d1).reshape(2))
    prob.constraints[2].save_dual_value(np.array(res.cpg_dual.d2).reshape(2))
    prob.constraints[3].save_dual_value(np.array(res.cpg_dual.d3).reshape(4))
    prob.constraints[4].save_dual_value(np.array(res.cpg_dual.d4).reshape(2))
    prob.constraints[5].save_dual_value(np.array(res.cpg_dual.d5).reshape(2))
    prob.constraints[6].save_dual_value(np.array(res.cpg_dual.d6).reshape(4))
    prob.constraints[7].save_dual_value(np.array(res.cpg_dual.d7).reshape(2))
    prob.constraints[8].save_dual_value(np.array(res.cpg_dual.d8).reshape(2))
    prob.constraints[9].save_dual_value(np.array(res.cpg_dual.d9).reshape(4))
    prob.constraints[10].save_dual_value(np.array(res.cpg_dual.d10).reshape(2))
    prob.constraints[11].save_dual_value(np.array(res.cpg_dual.d11).reshape(2))
    prob.constraints[12].save_dual_value(np.array(res.cpg_dual.d12).reshape(4))
    prob.constraints[13].save_dual_value(np.array(res.cpg_dual.d13).reshape(2))
    prob.constraints[14].save_dual_value(np.array(res.cpg_dual.d14).reshape(2))
    prob.constraints[15].save_dual_value(np.array(res.cpg_dual.d15).reshape(4))
    prob.constraints[16].save_dual_value(np.array(res.cpg_dual.d16).reshape(2))
    prob.constraints[17].save_dual_value(np.array(res.cpg_dual.d17).reshape(2))
    prob.constraints[18].save_dual_value(np.array(res.cpg_dual.d18).reshape(4))
    prob.constraints[19].save_dual_value(np.array(res.cpg_dual.d19).reshape(2))
    prob.constraints[20].save_dual_value(np.array(res.cpg_dual.d20).reshape(2))
    prob.constraints[21].save_dual_value(np.array(res.cpg_dual.d21).reshape(4))
    prob.constraints[22].save_dual_value(np.array(res.cpg_dual.d22).reshape(2))
    prob.constraints[23].save_dual_value(np.array(res.cpg_dual.d23).reshape(2))
    prob.constraints[24].save_dual_value(np.array(res.cpg_dual.d24).reshape(4))
    prob.constraints[25].save_dual_value(np.array(res.cpg_dual.d25).reshape(2))
    prob.constraints[26].save_dual_value(np.array(res.cpg_dual.d26).reshape(2))
    prob.constraints[27].save_dual_value(np.array(res.cpg_dual.d27).reshape(4))
    prob.constraints[28].save_dual_value(np.array(res.cpg_dual.d28).reshape(2))
    prob.constraints[29].save_dual_value(np.array(res.cpg_dual.d29).reshape(2))
    prob.constraints[30].save_dual_value(np.array(res.cpg_dual.d30).reshape(4))
    prob.constraints[31].save_dual_value(np.array(res.cpg_dual.d31).reshape(2))
    prob.constraints[32].save_dual_value(np.array(res.cpg_dual.d32).reshape(2))
    prob.constraints[33].save_dual_value(np.array(res.cpg_dual.d33).reshape(4))
    prob.constraints[34].save_dual_value(np.array(res.cpg_dual.d34).reshape(2))
    prob.constraints[35].save_dual_value(np.array(res.cpg_dual.d35).reshape(2))
    prob.constraints[36].save_dual_value(np.array(res.cpg_dual.d36).reshape(4))
    prob.constraints[37].save_dual_value(np.array(res.cpg_dual.d37).reshape(2))
    prob.constraints[38].save_dual_value(np.array(res.cpg_dual.d38).reshape(2))
    prob.constraints[39].save_dual_value(np.array(res.cpg_dual.d39).reshape(4))
    prob.constraints[40].save_dual_value(np.array(res.cpg_dual.d40).reshape(2))
    prob.constraints[41].save_dual_value(np.array(res.cpg_dual.d41).reshape(2))
    prob.constraints[42].save_dual_value(np.array(res.cpg_dual.d42).reshape(4))
    prob.constraints[43].save_dual_value(np.array(res.cpg_dual.d43).reshape(2))
    prob.constraints[44].save_dual_value(np.array(res.cpg_dual.d44).reshape(2))
    prob.constraints[45].save_dual_value(np.array(res.cpg_dual.d45).reshape(4))
    prob.constraints[46].save_dual_value(np.array(res.cpg_dual.d46).reshape(2))
    prob.constraints[47].save_dual_value(np.array(res.cpg_dual.d47).reshape(2))
    prob.constraints[48].save_dual_value(np.array(res.cpg_dual.d48).reshape(4))
    prob.constraints[49].save_dual_value(np.array(res.cpg_dual.d49).reshape(2))
    prob.constraints[50].save_dual_value(np.array(res.cpg_dual.d50).reshape(2))
    prob.constraints[51].save_dual_value(np.array(res.cpg_dual.d51).reshape(4))
    prob.constraints[52].save_dual_value(np.array(res.cpg_dual.d52).reshape(2))
    prob.constraints[53].save_dual_value(np.array(res.cpg_dual.d53).reshape(2))
    prob.constraints[54].save_dual_value(np.array(res.cpg_dual.d54).reshape(4))
    prob.constraints[55].save_dual_value(np.array(res.cpg_dual.d55).reshape(2))
    prob.constraints[56].save_dual_value(np.array(res.cpg_dual.d56).reshape(2))
    prob.constraints[57].save_dual_value(np.array(res.cpg_dual.d57).reshape(4))
    prob.constraints[58].save_dual_value(np.array(res.cpg_dual.d58).reshape(2))
    prob.constraints[59].save_dual_value(np.array(res.cpg_dual.d59).reshape(2))
    prob.constraints[60].save_dual_value(np.array(res.cpg_dual.d60).reshape(4))

    # store additional solver information in problem object
    prob._status = res.cpg_info.status
    if abs(res.cpg_info.obj_val) == 1e30:
        prob._value = np.sign(res.cpg_info.obj_val)*np.inf
    else:
        prob._value = res.cpg_info.obj_val
    primal_vars = {var.id: var.value for var in prob.variables()}
    dual_vars = {c.id: c.dual_value for c in prob.constraints}
    solver_specific_stats = {'obj_val': res.cpg_info.obj_val,
                             'status': prob._status,
                             'iter': res.cpg_info.iter,
                             'pri_res': res.cpg_info.pri_res,
                             'dua_res': res.cpg_info.dua_res,
                             'time': res.cpg_info.time}
    attr = {'solve_time': t1-t0, 'solver_specific_stats': solver_specific_stats, 'num_iters': res.cpg_info.iter}
    prob._solution = Solution(prob.status, prob.value, primal_vars, dual_vars, attr)
    results_dict = {'solver_specific_stats': solver_specific_stats,
                    'num_iters': res.cpg_info.iter,
                    'solve_time': t1-t0}
    prob._solver_stats = SolverStats(results_dict, 'OSQP')

    return prob.value
