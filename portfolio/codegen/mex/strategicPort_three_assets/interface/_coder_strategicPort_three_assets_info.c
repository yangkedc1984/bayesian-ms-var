/*
 * _coder_strategicPort_three_assets_info.c
 *
 * Code generation for function '_coder_strategicPort_three_assets_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "strategicPort_three_assets.h"
#include "_coder_strategicPort_three_assets_info.h"
#include "lapacke.h"

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const char * u);
static void b_info_helper(const mxArray **info);
static const mxArray *c_emlrt_marshallOut(const uint32_T u);
static void c_info_helper(const mxArray **info);
static void d_info_helper(const mxArray **info);
static void e_info_helper(const mxArray **info);
static void f_info_helper(const mxArray **info);
static void g_info_helper(const mxArray **info);
static void info_helper(const mxArray **info);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const char * u)
{
  const mxArray *y;
  const mxArray *m5;
  y = NULL;
  m5 = emlrtCreateString(u);
  emlrtAssign(&y, m5);
  return y;
}

static void b_info_helper(const mxArray **info)
{
  const mxArray *rhs64 = NULL;
  const mxArray *lhs64 = NULL;
  const mxArray *rhs65 = NULL;
  const mxArray *lhs65 = NULL;
  const mxArray *rhs66 = NULL;
  const mxArray *lhs66 = NULL;
  const mxArray *rhs67 = NULL;
  const mxArray *lhs67 = NULL;
  const mxArray *rhs68 = NULL;
  const mxArray *lhs68 = NULL;
  const mxArray *rhs69 = NULL;
  const mxArray *lhs69 = NULL;
  const mxArray *rhs70 = NULL;
  const mxArray *lhs70 = NULL;
  const mxArray *rhs71 = NULL;
  const mxArray *lhs71 = NULL;
  const mxArray *rhs72 = NULL;
  const mxArray *lhs72 = NULL;
  const mxArray *rhs73 = NULL;
  const mxArray *lhs73 = NULL;
  const mxArray *rhs74 = NULL;
  const mxArray *lhs74 = NULL;
  const mxArray *rhs75 = NULL;
  const mxArray *lhs75 = NULL;
  const mxArray *rhs76 = NULL;
  const mxArray *lhs76 = NULL;
  const mxArray *rhs77 = NULL;
  const mxArray *lhs77 = NULL;
  const mxArray *rhs78 = NULL;
  const mxArray *lhs78 = NULL;
  const mxArray *rhs79 = NULL;
  const mxArray *lhs79 = NULL;
  const mxArray *rhs80 = NULL;
  const mxArray *lhs80 = NULL;
  const mxArray *rhs81 = NULL;
  const mxArray *lhs81 = NULL;
  const mxArray *rhs82 = NULL;
  const mxArray *lhs82 = NULL;
  const mxArray *rhs83 = NULL;
  const mxArray *lhs83 = NULL;
  const mxArray *rhs84 = NULL;
  const mxArray *lhs84 = NULL;
  const mxArray *rhs85 = NULL;
  const mxArray *lhs85 = NULL;
  const mxArray *rhs86 = NULL;
  const mxArray *lhs86 = NULL;
  const mxArray *rhs87 = NULL;
  const mxArray *lhs87 = NULL;
  const mxArray *rhs88 = NULL;
  const mxArray *lhs88 = NULL;
  const mxArray *rhs89 = NULL;
  const mxArray *lhs89 = NULL;
  const mxArray *rhs90 = NULL;
  const mxArray *lhs90 = NULL;
  const mxArray *rhs91 = NULL;
  const mxArray *lhs91 = NULL;
  const mxArray *rhs92 = NULL;
  const mxArray *lhs92 = NULL;
  const mxArray *rhs93 = NULL;
  const mxArray *lhs93 = NULL;
  const mxArray *rhs94 = NULL;
  const mxArray *lhs94 = NULL;
  const mxArray *rhs95 = NULL;
  const mxArray *lhs95 = NULL;
  const mxArray *rhs96 = NULL;
  const mxArray *lhs96 = NULL;
  const mxArray *rhs97 = NULL;
  const mxArray *lhs97 = NULL;
  const mxArray *rhs98 = NULL;
  const mxArray *lhs98 = NULL;
  const mxArray *rhs99 = NULL;
  const mxArray *lhs99 = NULL;
  const mxArray *rhs100 = NULL;
  const mxArray *lhs100 = NULL;
  const mxArray *rhs101 = NULL;
  const mxArray *lhs101 = NULL;
  const mxArray *rhs102 = NULL;
  const mxArray *lhs102 = NULL;
  const mxArray *rhs103 = NULL;
  const mxArray *lhs103 = NULL;
  const mxArray *rhs104 = NULL;
  const mxArray *lhs104 = NULL;
  const mxArray *rhs105 = NULL;
  const mxArray *lhs105 = NULL;
  const mxArray *rhs106 = NULL;
  const mxArray *lhs106 = NULL;
  const mxArray *rhs107 = NULL;
  const mxArray *lhs107 = NULL;
  const mxArray *rhs108 = NULL;
  const mxArray *lhs108 = NULL;
  const mxArray *rhs109 = NULL;
  const mxArray *lhs109 = NULL;
  const mxArray *rhs110 = NULL;
  const mxArray *lhs110 = NULL;
  const mxArray *rhs111 = NULL;
  const mxArray *lhs111 = NULL;
  const mxArray *rhs112 = NULL;
  const mxArray *lhs112 = NULL;
  const mxArray *rhs113 = NULL;
  const mxArray *lhs113 = NULL;
  const mxArray *rhs114 = NULL;
  const mxArray *lhs114 = NULL;
  const mxArray *rhs115 = NULL;
  const mxArray *lhs115 = NULL;
  const mxArray *rhs116 = NULL;
  const mxArray *lhs116 = NULL;
  const mxArray *rhs117 = NULL;
  const mxArray *lhs117 = NULL;
  const mxArray *rhs118 = NULL;
  const mxArray *lhs118 = NULL;
  const mxArray *rhs119 = NULL;
  const mxArray *lhs119 = NULL;
  const mxArray *rhs120 = NULL;
  const mxArray *lhs120 = NULL;
  const mxArray *rhs121 = NULL;
  const mxArray *lhs121 = NULL;
  const mxArray *rhs122 = NULL;
  const mxArray *lhs122 = NULL;
  const mxArray *rhs123 = NULL;
  const mxArray *lhs123 = NULL;
  const mxArray *rhs124 = NULL;
  const mxArray *lhs124 = NULL;
  const mxArray *rhs125 = NULL;
  const mxArray *lhs125 = NULL;
  const mxArray *rhs126 = NULL;
  const mxArray *lhs126 = NULL;
  const mxArray *rhs127 = NULL;
  const mxArray *lhs127 = NULL;
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/ceil.m"),
                "context", 64);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 64);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 64);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 64);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 64);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 64);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 64);
  emlrtAssign(&rhs64, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs64, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs64), "rhs", 64);
  emlrtAddField(*info, emlrtAliasP(lhs64), "lhs", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/ceil.m"),
                "context", 65);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalar.ceil"), "name",
                65);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/ceil.m"),
                "resolved", 65);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 65);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 65);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 65);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 65);
  emlrtAssign(&rhs65, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs65, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs65), "rhs", 65);
  emlrtAddField(*info, emlrtAliasP(lhs65), "lhs", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/ceil.m"),
                "context", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "coder.internal.applyScalarFunctionInPlace"), "name", 66);
  emlrtAddField(*info, b_emlrt_marshallOut("function_handle"), "dominantType",
                66);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "resolved", 66);
  emlrtAddField(*info, c_emlrt_marshallOut(1422884200U), "fileTimeLo", 66);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 66);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 66);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 66);
  emlrtAssign(&rhs66, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs66, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs66), "rhs", 66);
  emlrtAddField(*info, emlrtAliasP(lhs66), "lhs", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "context", 67);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalar.ceil"), "name",
                67);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/ceil.m"),
                "resolved", 67);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 67);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 67);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 67);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 67);
  emlrtAssign(&rhs67, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs67, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs67), "rhs", 67);
  emlrtAddField(*info, emlrtAliasP(lhs67), "lhs", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[E]C:/Users/Bayesd/msc-thesis/msc-thesis/current/analysis/portfolio/strategicPort_three_assets.m"),
                "context", 68);
  emlrtAddField(*info, b_emlrt_marshallOut("min"), "name", 68);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/min.m"),
                "resolved", 68);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907926U), "fileTimeLo", 68);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 68);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 68);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 68);
  emlrtAssign(&rhs68, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs68, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs68), "rhs", 68);
  emlrtAddField(*info, emlrtAliasP(lhs68), "lhs", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/min.m"),
                "context", 69);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.minOrMax"), "name",
                69);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m"),
                "resolved", 69);
  emlrtAddField(*info, c_emlrt_marshallOut(1426776442U), "fileTimeLo", 69);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 69);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 69);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 69);
  emlrtAssign(&rhs69, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs69, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs69), "rhs", 69);
  emlrtAddField(*info, emlrtAliasP(lhs69), "lhs", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_bin_extremum"),
                "context", 70);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                70);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 70);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 70);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 70);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 70);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 70);
  emlrtAssign(&rhs70, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs70, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs70), "rhs", 70);
  emlrtAddField(*info, emlrtAliasP(lhs70), "lhs", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_bin_extremum"),
                "context", 71);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalexpAlloc"),
                "name", 71);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m"),
                "resolved", 71);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907916U), "fileTimeLo", 71);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 71);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 71);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 71);
  emlrtAssign(&rhs71, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs71, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs71), "rhs", 71);
  emlrtAddField(*info, emlrtAliasP(lhs71), "lhs", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m"),
                "context", 72);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalexpAllocNoCheck"),
                "name", 72);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAllocNoCheck.m"),
                "resolved", 72);
  emlrtAddField(*info, c_emlrt_marshallOut(1410437090U), "fileTimeLo", 72);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 72);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 72);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 72);
  emlrtAssign(&rhs72, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs72, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs72), "rhs", 72);
  emlrtAddField(*info, emlrtAliasP(lhs72), "lhs", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_scalar_bin_extremum"),
                "context", 73);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                73);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 73);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 73);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 73);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 73);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 73);
  emlrtAssign(&rhs73, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs73, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs73), "rhs", 73);
  emlrtAddField(*info, emlrtAliasP(lhs73), "lhs", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_scalar_bin_extremum"),
                "context", 74);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 74);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 74);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 74);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 74);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 74);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 74);
  emlrtAssign(&rhs74, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs74, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs74), "rhs", 74);
  emlrtAddField(*info, emlrtAliasP(lhs74), "lhs", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[E]C:/Users/Bayesd/msc-thesis/msc-thesis/current/analysis/portfolio/strategicPort_three_assets.m"),
                "context", 75);
  emlrtAddField(*info, b_emlrt_marshallOut("colon"), "name", 75);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m"),
                "resolved", 75);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907938U), "fileTimeLo", 75);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 75);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 75);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 75);
  emlrtAssign(&rhs75, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs75, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs75), "rhs", 75);
  emlrtAddField(*info, emlrtAliasP(lhs75), "lhs", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m"),
                "context", 76);
  emlrtAddField(*info, b_emlrt_marshallOut("colon"), "name", 76);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m"),
                "resolved", 76);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907938U), "fileTimeLo", 76);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 76);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 76);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 76);
  emlrtAssign(&rhs76, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs76, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs76), "rhs", 76);
  emlrtAddField(*info, emlrtAliasP(lhs76), "lhs", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m"),
                "context", 77);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 77);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 77);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 77);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 77);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 77);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 77);
  emlrtAssign(&rhs77, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs77, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs77), "rhs", 77);
  emlrtAddField(*info, emlrtAliasP(lhs77), "lhs", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon"),
                "context", 78);
  emlrtAddField(*info, b_emlrt_marshallOut("isfinite"), "name", 78);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isfinite.m"),
                "resolved", 78);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 78);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 78);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 78);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 78);
  emlrtAssign(&rhs78, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs78, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs78), "rhs", 78);
  emlrtAddField(*info, emlrtAliasP(lhs78), "lhs", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isfinite.m"),
                "context", 79);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 79);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 79);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 79);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 79);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 79);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 79);
  emlrtAssign(&rhs79, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs79, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs79), "rhs", 79);
  emlrtAddField(*info, emlrtAliasP(lhs79), "lhs", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isfinite.m"),
                "context", 80);
  emlrtAddField(*info, b_emlrt_marshallOut("isinf"), "name", 80);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isinf.m"),
                "resolved", 80);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 80);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 80);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 80);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 80);
  emlrtAssign(&rhs80, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs80, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs80), "rhs", 80);
  emlrtAddField(*info, emlrtAliasP(lhs80), "lhs", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isinf.m"),
                "context", 81);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 81);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 81);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 81);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 81);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 81);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 81);
  emlrtAssign(&rhs81, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs81, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs81), "rhs", 81);
  emlrtAddField(*info, emlrtAliasP(lhs81), "lhs", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isfinite.m"),
                "context", 82);
  emlrtAddField(*info, b_emlrt_marshallOut("isnan"), "name", 82);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isnan.m"),
                "resolved", 82);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 82);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 82);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 82);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 82);
  emlrtAssign(&rhs82, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs82, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs82), "rhs", 82);
  emlrtAddField(*info, emlrtAliasP(lhs82), "lhs", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isnan.m"),
                "context", 83);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 83);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 83);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 83);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 83);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 83);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 83);
  emlrtAssign(&rhs83, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs83, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs83), "rhs", 83);
  emlrtAddField(*info, emlrtAliasP(lhs83), "lhs", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon"),
                "context", 84);
  emlrtAddField(*info, b_emlrt_marshallOut("floor"), "name", 84);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "resolved", 84);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313828U), "fileTimeLo", 84);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 84);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 84);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 84);
  emlrtAssign(&rhs84, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs84, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs84), "rhs", 84);
  emlrtAddField(*info, emlrtAliasP(lhs84), "lhs", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!checkFlintRange"),
                "context", 85);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                85);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 85);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 85);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 85);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 85);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 85);
  emlrtAssign(&rhs85, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs85, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs85), "rhs", 85);
  emlrtAddField(*info, emlrtAliasP(lhs85), "lhs", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!checkFlintRange"),
                "context", 86);
  emlrtAddField(*info, b_emlrt_marshallOut("flintmax"), "name", 86);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/flintmax.m"),
                "resolved", 86);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 86);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 86);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 86);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 86);
  emlrtAssign(&rhs86, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs86, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs86), "rhs", 86);
  emlrtAddField(*info, emlrtAliasP(lhs86), "lhs", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/flintmax.m"),
                "context", 87);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.floatModel"), "name",
                87);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/floatModel.m"),
                "resolved", 87);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 87);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 87);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 87);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 87);
  emlrtAssign(&rhs87, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs87, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs87), "rhs", 87);
  emlrtAddField(*info, emlrtAliasP(lhs87), "lhs", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!checkFlintRange"),
                "context", 88);
  emlrtAddField(*info, b_emlrt_marshallOut("abs"), "name", 88);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "resolved", 88);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313826U), "fileTimeLo", 88);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 88);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 88);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 88);
  emlrtAssign(&rhs88, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs88, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs88), "rhs", 88);
  emlrtAddField(*info, emlrtAliasP(lhs88), "lhs", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!checkrange"),
                "context", 89);
  emlrtAddField(*info, b_emlrt_marshallOut("realmax"), "name", 89);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/realmax.m"),
                "resolved", 89);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 89);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 89);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 89);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 89);
  emlrtAssign(&rhs89, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs89, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs89), "rhs", 89);
  emlrtAddField(*info, emlrtAliasP(lhs89), "lhs", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/realmax.m"),
                "context", 90);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_realmax"), "name", 90);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/private/eml_realmax.m"),
                "resolved", 90);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 90);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 90);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 90);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 90);
  emlrtAssign(&rhs90, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs90, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs90), "rhs", 90);
  emlrtAddField(*info, emlrtAliasP(lhs90), "lhs", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/private/eml_realmax.m"),
                "context", 91);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.floatModel"), "name",
                91);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/floatModel.m"),
                "resolved", 91);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 91);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 91);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 91);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 91);
  emlrtAssign(&rhs91, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs91, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs91), "rhs", 91);
  emlrtAddField(*info, emlrtAliasP(lhs91), "lhs", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 92);
  emlrtAddField(*info, b_emlrt_marshallOut("isnan"), "name", 92);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isnan.m"),
                "resolved", 92);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 92);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 92);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 92);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 92);
  emlrtAssign(&rhs92, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs92, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs92), "rhs", 92);
  emlrtAddField(*info, emlrtAliasP(lhs92), "lhs", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 93);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.nan"), "name", 93);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/nan.m"),
                "resolved", 93);
  emlrtAddField(*info, c_emlrt_marshallOut(1362262032U), "fileTimeLo", 93);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 93);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 93);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 93);
  emlrtAssign(&rhs93, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs93, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs93), "rhs", 93);
  emlrtAddField(*info, emlrtAliasP(lhs93), "lhs", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 94);
  emlrtAddField(*info, b_emlrt_marshallOut("isinf"), "name", 94);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isinf.m"),
                "resolved", 94);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 94);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 94);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 94);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 94);
  emlrtAssign(&rhs94, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs94, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs94), "rhs", 94);
  emlrtAddField(*info, emlrtAliasP(lhs94), "lhs", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 95);
  emlrtAddField(*info, b_emlrt_marshallOut("floor"), "name", 95);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "resolved", 95);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313828U), "fileTimeLo", 95);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 95);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 95);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 95);
  emlrtAssign(&rhs95, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs95, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs95), "rhs", 95);
  emlrtAddField(*info, emlrtAliasP(lhs95), "lhs", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 96);
  emlrtAddField(*info, b_emlrt_marshallOut("abs"), "name", 96);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "resolved", 96);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313826U), "fileTimeLo", 96);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 96);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 96);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 96);
  emlrtAssign(&rhs96, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs96, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs96), "rhs", 96);
  emlrtAddField(*info, emlrtAliasP(lhs96), "lhs", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 97);
  emlrtAddField(*info, b_emlrt_marshallOut("eps"), "name", 97);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/eps.m"),
                "resolved", 97);
  emlrtAddField(*info, c_emlrt_marshallOut(1427228304U), "fileTimeLo", 97);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 97);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 97);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 97);
  emlrtAssign(&rhs97, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs97, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs97), "rhs", 97);
  emlrtAddField(*info, emlrtAliasP(lhs97), "lhs", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/eps.m"),
                "context", 98);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isFloatClass"),
                "name", 98);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isFloatClass.m"),
                "resolved", 98);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 98);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 98);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 98);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 98);
  emlrtAssign(&rhs98, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs98, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs98), "rhs", 98);
  emlrtAddField(*info, emlrtAliasP(lhs98), "lhs", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/eps.m"),
                "context", 99);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_eps"), "name", 99);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/private/eml_eps.m"),
                "resolved", 99);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 99);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 99);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 99);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 99);
  emlrtAssign(&rhs99, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs99, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs99), "rhs", 99);
  emlrtAddField(*info, emlrtAliasP(lhs99), "lhs", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/private/eml_eps.m"),
                "context", 100);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.floatModel"), "name",
                100);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/floatModel.m"),
                "resolved", 100);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 100);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 100);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 100);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 100);
  emlrtAssign(&rhs100, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs100, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs100), "rhs", 100);
  emlrtAddField(*info, emlrtAliasP(lhs100), "lhs", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!maxabs"),
                "context", 101);
  emlrtAddField(*info, b_emlrt_marshallOut("abs"), "name", 101);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "resolved", 101);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313826U), "fileTimeLo", 101);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 101);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 101);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 101);
  emlrtAssign(&rhs101, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs101, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs101), "rhs", 101);
  emlrtAddField(*info, emlrtAliasP(lhs101), "lhs", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 102);
  emlrtAddField(*info, b_emlrt_marshallOut("intmax"), "name", 102);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmax.m"),
                "resolved", 102);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 102);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 102);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 102);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 102);
  emlrtAssign(&rhs102, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs102, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs102), "rhs", 102);
  emlrtAddField(*info, emlrtAliasP(lhs102), "lhs", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 103);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexIntRelop"),
                "name", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"),
                "resolved", 103);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907946U), "fileTimeLo", 103);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 103);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 103);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 103);
  emlrtAssign(&rhs103, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs103, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs103), "rhs", 103);
  emlrtAddField(*info, emlrtAliasP(lhs103), "lhs", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!float_class_contains_indexIntCl"
    "ass"), "context", 104);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.floatModel"), "name",
                104);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/floatModel.m"),
                "resolved", 104);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 104);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 104);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 104);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 104);
  emlrtAssign(&rhs104, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs104, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs104), "rhs", 104);
  emlrtAddField(*info, emlrtAliasP(lhs104), "lhs", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!is_signed_indexIntClass"),
                "context", 105);
  emlrtAddField(*info, b_emlrt_marshallOut("intmin"), "name", 105);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmin.m"),
                "resolved", 105);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 105);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 105);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 105);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 105);
  emlrtAssign(&rhs105, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs105, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs105), "rhs", 105);
  emlrtAddField(*info, emlrtAliasP(lhs105), "lhs", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon"),
                "context", 106);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexMinus"), "name",
                106);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexMinus.m"),
                "resolved", 106);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 106);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 106);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 106);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 106);
  emlrtAssign(&rhs106, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs106, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs106), "rhs", 106);
  emlrtAddField(*info, emlrtAliasP(lhs106), "lhs", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon"),
                "context", 107);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexDivide"), "name",
                107);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexDivide.m"),
                "resolved", 107);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 107);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 107);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 107);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 107);
  emlrtAssign(&rhs107, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs107, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs107), "rhs", 107);
  emlrtAddField(*info, emlrtAliasP(lhs107), "lhs", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon"),
                "context", 108);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 108);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 108);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 108);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 108);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 108);
  emlrtAssign(&rhs108, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs108, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs108), "rhs", 108);
  emlrtAddField(*info, emlrtAliasP(lhs108), "lhs", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon"),
                "context", 109);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexTimes"), "name",
                109);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexTimes.m"),
                "resolved", 109);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 109);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 109);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 109);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 109);
  emlrtAssign(&rhs109, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs109, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs109), "rhs", 109);
  emlrtAddField(*info, emlrtAliasP(lhs109), "lhs", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon"),
                "context", 110);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                110);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 110);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 110);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 110);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 110);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 110);
  emlrtAssign(&rhs110, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs110, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs110), "rhs", 110);
  emlrtAddField(*info, emlrtAliasP(lhs110), "lhs", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon"),
                "context", 111);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexMinus"), "name",
                111);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexMinus.m"),
                "resolved", 111);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 111);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 111);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 111);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 111);
  emlrtAssign(&rhs111, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs111, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs111), "rhs", 111);
  emlrtAddField(*info, emlrtAliasP(lhs111), "lhs", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[E]C:/Users/Bayesd/msc-thesis/msc-thesis/current/analysis/portfolio/strategicPort_three_assets.m"),
                "context", 112);
  emlrtAddField(*info, b_emlrt_marshallOut("log"), "name", 112);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/log.m"),
                "resolved", 112);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313828U), "fileTimeLo", 112);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 112);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 112);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 112);
  emlrtAssign(&rhs112, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs112, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs112), "rhs", 112);
  emlrtAddField(*info, emlrtAliasP(lhs112), "lhs", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/log.m"),
                "context", 113);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isDomainError"),
                "name", 113);
  emlrtAddField(*info, b_emlrt_marshallOut("function_handle"), "dominantType",
                113);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isDomainError.m"),
                "resolved", 113);
  emlrtAddField(*info, c_emlrt_marshallOut(1419333384U), "fileTimeLo", 113);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 113);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 113);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 113);
  emlrtAssign(&rhs113, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs113, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs113), "rhs", 113);
  emlrtAddField(*info, emlrtAliasP(lhs113), "lhs", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/log.m"),
                "context", 114);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.error"), "name", 114);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/error.m"),
                "resolved", 114);
  emlrtAddField(*info, c_emlrt_marshallOut(1435845494U), "fileTimeLo", 114);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 114);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 114);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 114);
  emlrtAssign(&rhs114, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs114, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs114), "rhs", 114);
  emlrtAddField(*info, emlrtAliasP(lhs114), "lhs", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/log.m"),
                "context", 115);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalar.log"), "name",
                115);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/log.m"),
                "resolved", 115);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 115);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 115);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 115);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 115);
  emlrtAssign(&rhs115, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs115, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs115), "rhs", 115);
  emlrtAddField(*info, emlrtAliasP(lhs115), "lhs", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/log.m"),
                "context", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "coder.internal.applyScalarFunctionInPlace"), "name", 116);
  emlrtAddField(*info, b_emlrt_marshallOut("function_handle"), "dominantType",
                116);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "resolved", 116);
  emlrtAddField(*info, c_emlrt_marshallOut(1422884200U), "fileTimeLo", 116);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 116);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 116);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 116);
  emlrtAssign(&rhs116, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs116, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs116), "rhs", 116);
  emlrtAddField(*info, emlrtAliasP(lhs116), "lhs", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "context", 117);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalar.log"), "name",
                117);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/log.m"),
                "resolved", 117);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 117);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 117);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 117);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 117);
  emlrtAssign(&rhs117, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs117, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs117), "rhs", 117);
  emlrtAddField(*info, emlrtAliasP(lhs117), "lhs", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/log.m"),
                "context", 118);
  emlrtAddField(*info, b_emlrt_marshallOut("realmax"), "name", 118);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/realmax.m"),
                "resolved", 118);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 118);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 118);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 118);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 118);
  emlrtAssign(&rhs118, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs118, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs118), "rhs", 118);
  emlrtAddField(*info, emlrtAliasP(lhs118), "lhs", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/log.m"),
                "context", 119);
  emlrtAddField(*info, b_emlrt_marshallOut("mrdivide"), "name", 119);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mrdivide.p"),
                "resolved", 119);
  emlrtAddField(*info, c_emlrt_marshallOut(1438285820U), "fileTimeLo", 119);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 119);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907940U), "mFileTimeLo", 119);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 119);
  emlrtAssign(&rhs119, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs119, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs119), "rhs", 119);
  emlrtAddField(*info, emlrtAliasP(lhs119), "lhs", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[E]C:/Users/Bayesd/msc-thesis/msc-thesis/current/analysis/portfolio/strategicPort_three_assets.m"),
                "context", 120);
  emlrtAddField(*info, b_emlrt_marshallOut("repmat"), "name", 120);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/repmat.m"),
                "resolved", 120);
  emlrtAddField(*info, c_emlrt_marshallOut(1436262282U), "fileTimeLo", 120);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 120);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 120);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 120);
  emlrtAssign(&rhs120, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs120, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs120), "rhs", 120);
  emlrtAddField(*info, emlrtAliasP(lhs120), "lhs", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/repmat.m"),
                "context", 121);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.narginchk"), "name",
                121);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/narginchk.m"),
                "resolved", 121);
  emlrtAddField(*info, c_emlrt_marshallOut(1363714558U), "fileTimeLo", 121);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 121);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 121);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 121);
  emlrtAssign(&rhs121, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs121, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs121), "rhs", 121);
  emlrtAddField(*info, emlrtAliasP(lhs121), "lhs", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/repmat.m"),
                "context", 122);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.assertValidSizeArg"),
                "name", 122);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"),
                "resolved", 122);
  emlrtAddField(*info, c_emlrt_marshallOut(1427209022U), "fileTimeLo", 122);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 122);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 122);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 122);
  emlrtAssign(&rhs122, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs122, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs122), "rhs", 122);
  emlrtAddField(*info, emlrtAliasP(lhs122), "lhs", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"),
                "context", 123);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 123);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 123);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 123);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 123);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 123);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 123);
  emlrtAssign(&rhs123, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs123, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs123), "rhs", 123);
  emlrtAddField(*info, emlrtAliasP(lhs123), "lhs", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m!isintegral"),
                "context", 124);
  emlrtAddField(*info, b_emlrt_marshallOut("isinf"), "name", 124);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isinf.m"),
                "resolved", 124);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 124);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 124);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 124);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 124);
  emlrtAssign(&rhs124, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs124, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs124), "rhs", 124);
  emlrtAddField(*info, emlrtAliasP(lhs124), "lhs", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m!isinbounds"),
                "context", 125);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isIntegerClass"),
                "name", 125);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isIntegerClass.m"),
                "resolved", 125);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 125);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 125);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 125);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 125);
  emlrtAssign(&rhs125, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs125, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs125), "rhs", 125);
  emlrtAddField(*info, emlrtAliasP(lhs125), "lhs", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m!isinbounds"),
                "context", 126);
  emlrtAddField(*info, b_emlrt_marshallOut("intmax"), "name", 126);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmax.m"),
                "resolved", 126);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 126);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 126);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 126);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 126);
  emlrtAssign(&rhs126, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs126, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs126), "rhs", 126);
  emlrtAddField(*info, emlrtAliasP(lhs126), "lhs", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m!isinbounds"),
                "context", 127);
  emlrtAddField(*info, b_emlrt_marshallOut("intmin"), "name", 127);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmin.m"),
                "resolved", 127);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 127);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 127);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 127);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 127);
  emlrtAssign(&rhs127, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs127, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs127), "rhs", 127);
  emlrtAddField(*info, emlrtAliasP(lhs127), "lhs", 127);
  emlrtDestroyArray(&rhs64);
  emlrtDestroyArray(&lhs64);
  emlrtDestroyArray(&rhs65);
  emlrtDestroyArray(&lhs65);
  emlrtDestroyArray(&rhs66);
  emlrtDestroyArray(&lhs66);
  emlrtDestroyArray(&rhs67);
  emlrtDestroyArray(&lhs67);
  emlrtDestroyArray(&rhs68);
  emlrtDestroyArray(&lhs68);
  emlrtDestroyArray(&rhs69);
  emlrtDestroyArray(&lhs69);
  emlrtDestroyArray(&rhs70);
  emlrtDestroyArray(&lhs70);
  emlrtDestroyArray(&rhs71);
  emlrtDestroyArray(&lhs71);
  emlrtDestroyArray(&rhs72);
  emlrtDestroyArray(&lhs72);
  emlrtDestroyArray(&rhs73);
  emlrtDestroyArray(&lhs73);
  emlrtDestroyArray(&rhs74);
  emlrtDestroyArray(&lhs74);
  emlrtDestroyArray(&rhs75);
  emlrtDestroyArray(&lhs75);
  emlrtDestroyArray(&rhs76);
  emlrtDestroyArray(&lhs76);
  emlrtDestroyArray(&rhs77);
  emlrtDestroyArray(&lhs77);
  emlrtDestroyArray(&rhs78);
  emlrtDestroyArray(&lhs78);
  emlrtDestroyArray(&rhs79);
  emlrtDestroyArray(&lhs79);
  emlrtDestroyArray(&rhs80);
  emlrtDestroyArray(&lhs80);
  emlrtDestroyArray(&rhs81);
  emlrtDestroyArray(&lhs81);
  emlrtDestroyArray(&rhs82);
  emlrtDestroyArray(&lhs82);
  emlrtDestroyArray(&rhs83);
  emlrtDestroyArray(&lhs83);
  emlrtDestroyArray(&rhs84);
  emlrtDestroyArray(&lhs84);
  emlrtDestroyArray(&rhs85);
  emlrtDestroyArray(&lhs85);
  emlrtDestroyArray(&rhs86);
  emlrtDestroyArray(&lhs86);
  emlrtDestroyArray(&rhs87);
  emlrtDestroyArray(&lhs87);
  emlrtDestroyArray(&rhs88);
  emlrtDestroyArray(&lhs88);
  emlrtDestroyArray(&rhs89);
  emlrtDestroyArray(&lhs89);
  emlrtDestroyArray(&rhs90);
  emlrtDestroyArray(&lhs90);
  emlrtDestroyArray(&rhs91);
  emlrtDestroyArray(&lhs91);
  emlrtDestroyArray(&rhs92);
  emlrtDestroyArray(&lhs92);
  emlrtDestroyArray(&rhs93);
  emlrtDestroyArray(&lhs93);
  emlrtDestroyArray(&rhs94);
  emlrtDestroyArray(&lhs94);
  emlrtDestroyArray(&rhs95);
  emlrtDestroyArray(&lhs95);
  emlrtDestroyArray(&rhs96);
  emlrtDestroyArray(&lhs96);
  emlrtDestroyArray(&rhs97);
  emlrtDestroyArray(&lhs97);
  emlrtDestroyArray(&rhs98);
  emlrtDestroyArray(&lhs98);
  emlrtDestroyArray(&rhs99);
  emlrtDestroyArray(&lhs99);
  emlrtDestroyArray(&rhs100);
  emlrtDestroyArray(&lhs100);
  emlrtDestroyArray(&rhs101);
  emlrtDestroyArray(&lhs101);
  emlrtDestroyArray(&rhs102);
  emlrtDestroyArray(&lhs102);
  emlrtDestroyArray(&rhs103);
  emlrtDestroyArray(&lhs103);
  emlrtDestroyArray(&rhs104);
  emlrtDestroyArray(&lhs104);
  emlrtDestroyArray(&rhs105);
  emlrtDestroyArray(&lhs105);
  emlrtDestroyArray(&rhs106);
  emlrtDestroyArray(&lhs106);
  emlrtDestroyArray(&rhs107);
  emlrtDestroyArray(&lhs107);
  emlrtDestroyArray(&rhs108);
  emlrtDestroyArray(&lhs108);
  emlrtDestroyArray(&rhs109);
  emlrtDestroyArray(&lhs109);
  emlrtDestroyArray(&rhs110);
  emlrtDestroyArray(&lhs110);
  emlrtDestroyArray(&rhs111);
  emlrtDestroyArray(&lhs111);
  emlrtDestroyArray(&rhs112);
  emlrtDestroyArray(&lhs112);
  emlrtDestroyArray(&rhs113);
  emlrtDestroyArray(&lhs113);
  emlrtDestroyArray(&rhs114);
  emlrtDestroyArray(&lhs114);
  emlrtDestroyArray(&rhs115);
  emlrtDestroyArray(&lhs115);
  emlrtDestroyArray(&rhs116);
  emlrtDestroyArray(&lhs116);
  emlrtDestroyArray(&rhs117);
  emlrtDestroyArray(&lhs117);
  emlrtDestroyArray(&rhs118);
  emlrtDestroyArray(&lhs118);
  emlrtDestroyArray(&rhs119);
  emlrtDestroyArray(&lhs119);
  emlrtDestroyArray(&rhs120);
  emlrtDestroyArray(&lhs120);
  emlrtDestroyArray(&rhs121);
  emlrtDestroyArray(&lhs121);
  emlrtDestroyArray(&rhs122);
  emlrtDestroyArray(&lhs122);
  emlrtDestroyArray(&rhs123);
  emlrtDestroyArray(&lhs123);
  emlrtDestroyArray(&rhs124);
  emlrtDestroyArray(&lhs124);
  emlrtDestroyArray(&rhs125);
  emlrtDestroyArray(&lhs125);
  emlrtDestroyArray(&rhs126);
  emlrtDestroyArray(&lhs126);
  emlrtDestroyArray(&rhs127);
  emlrtDestroyArray(&lhs127);
}

static const mxArray *c_emlrt_marshallOut(const uint32_T u)
{
  const mxArray *y;
  const mxArray *m6;
  y = NULL;
  m6 = emlrtCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
  *(uint32_T *)mxGetData(m6) = u;
  emlrtAssign(&y, m6);
  return y;
}

static void c_info_helper(const mxArray **info)
{
  const mxArray *rhs128 = NULL;
  const mxArray *lhs128 = NULL;
  const mxArray *rhs129 = NULL;
  const mxArray *lhs129 = NULL;
  const mxArray *rhs130 = NULL;
  const mxArray *lhs130 = NULL;
  const mxArray *rhs131 = NULL;
  const mxArray *lhs131 = NULL;
  const mxArray *rhs132 = NULL;
  const mxArray *lhs132 = NULL;
  const mxArray *rhs133 = NULL;
  const mxArray *lhs133 = NULL;
  const mxArray *rhs134 = NULL;
  const mxArray *lhs134 = NULL;
  const mxArray *rhs135 = NULL;
  const mxArray *lhs135 = NULL;
  const mxArray *rhs136 = NULL;
  const mxArray *lhs136 = NULL;
  const mxArray *rhs137 = NULL;
  const mxArray *lhs137 = NULL;
  const mxArray *rhs138 = NULL;
  const mxArray *lhs138 = NULL;
  const mxArray *rhs139 = NULL;
  const mxArray *lhs139 = NULL;
  const mxArray *rhs140 = NULL;
  const mxArray *lhs140 = NULL;
  const mxArray *rhs141 = NULL;
  const mxArray *lhs141 = NULL;
  const mxArray *rhs142 = NULL;
  const mxArray *lhs142 = NULL;
  const mxArray *rhs143 = NULL;
  const mxArray *lhs143 = NULL;
  const mxArray *rhs144 = NULL;
  const mxArray *lhs144 = NULL;
  const mxArray *rhs145 = NULL;
  const mxArray *lhs145 = NULL;
  const mxArray *rhs146 = NULL;
  const mxArray *lhs146 = NULL;
  const mxArray *rhs147 = NULL;
  const mxArray *lhs147 = NULL;
  const mxArray *rhs148 = NULL;
  const mxArray *lhs148 = NULL;
  const mxArray *rhs149 = NULL;
  const mxArray *lhs149 = NULL;
  const mxArray *rhs150 = NULL;
  const mxArray *lhs150 = NULL;
  const mxArray *rhs151 = NULL;
  const mxArray *lhs151 = NULL;
  const mxArray *rhs152 = NULL;
  const mxArray *lhs152 = NULL;
  const mxArray *rhs153 = NULL;
  const mxArray *lhs153 = NULL;
  const mxArray *rhs154 = NULL;
  const mxArray *lhs154 = NULL;
  const mxArray *rhs155 = NULL;
  const mxArray *lhs155 = NULL;
  const mxArray *rhs156 = NULL;
  const mxArray *lhs156 = NULL;
  const mxArray *rhs157 = NULL;
  const mxArray *lhs157 = NULL;
  const mxArray *rhs158 = NULL;
  const mxArray *lhs158 = NULL;
  const mxArray *rhs159 = NULL;
  const mxArray *lhs159 = NULL;
  const mxArray *rhs160 = NULL;
  const mxArray *lhs160 = NULL;
  const mxArray *rhs161 = NULL;
  const mxArray *lhs161 = NULL;
  const mxArray *rhs162 = NULL;
  const mxArray *lhs162 = NULL;
  const mxArray *rhs163 = NULL;
  const mxArray *lhs163 = NULL;
  const mxArray *rhs164 = NULL;
  const mxArray *lhs164 = NULL;
  const mxArray *rhs165 = NULL;
  const mxArray *lhs165 = NULL;
  const mxArray *rhs166 = NULL;
  const mxArray *lhs166 = NULL;
  const mxArray *rhs167 = NULL;
  const mxArray *lhs167 = NULL;
  const mxArray *rhs168 = NULL;
  const mxArray *lhs168 = NULL;
  const mxArray *rhs169 = NULL;
  const mxArray *lhs169 = NULL;
  const mxArray *rhs170 = NULL;
  const mxArray *lhs170 = NULL;
  const mxArray *rhs171 = NULL;
  const mxArray *lhs171 = NULL;
  const mxArray *rhs172 = NULL;
  const mxArray *lhs172 = NULL;
  const mxArray *rhs173 = NULL;
  const mxArray *lhs173 = NULL;
  const mxArray *rhs174 = NULL;
  const mxArray *lhs174 = NULL;
  const mxArray *rhs175 = NULL;
  const mxArray *lhs175 = NULL;
  const mxArray *rhs176 = NULL;
  const mxArray *lhs176 = NULL;
  const mxArray *rhs177 = NULL;
  const mxArray *lhs177 = NULL;
  const mxArray *rhs178 = NULL;
  const mxArray *lhs178 = NULL;
  const mxArray *rhs179 = NULL;
  const mxArray *lhs179 = NULL;
  const mxArray *rhs180 = NULL;
  const mxArray *lhs180 = NULL;
  const mxArray *rhs181 = NULL;
  const mxArray *lhs181 = NULL;
  const mxArray *rhs182 = NULL;
  const mxArray *lhs182 = NULL;
  const mxArray *rhs183 = NULL;
  const mxArray *lhs183 = NULL;
  const mxArray *rhs184 = NULL;
  const mxArray *lhs184 = NULL;
  const mxArray *rhs185 = NULL;
  const mxArray *lhs185 = NULL;
  const mxArray *rhs186 = NULL;
  const mxArray *lhs186 = NULL;
  const mxArray *rhs187 = NULL;
  const mxArray *lhs187 = NULL;
  const mxArray *rhs188 = NULL;
  const mxArray *lhs188 = NULL;
  const mxArray *rhs189 = NULL;
  const mxArray *lhs189 = NULL;
  const mxArray *rhs190 = NULL;
  const mxArray *lhs190 = NULL;
  const mxArray *rhs191 = NULL;
  const mxArray *lhs191 = NULL;
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m!isinbounds"),
                "context", 128);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexIntRelop"),
                "name", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"),
                "resolved", 128);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907946U), "fileTimeLo", 128);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 128);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 128);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 128);
  emlrtAssign(&rhs128, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs128, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs128), "rhs", 128);
  emlrtAddField(*info, emlrtAliasP(lhs128), "lhs", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"),
                "context", 129);
  emlrtAddField(*info, b_emlrt_marshallOut("intmin"), "name", 129);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmin.m"),
                "resolved", 129);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 129);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 129);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 129);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 129);
  emlrtAssign(&rhs129, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs129, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs129), "rhs", 129);
  emlrtAddField(*info, emlrtAliasP(lhs129), "lhs", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"),
                "context", 130);
  emlrtAddField(*info, b_emlrt_marshallOut("intmax"), "name", 130);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmax.m"),
                "resolved", 130);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 130);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 130);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 130);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 130);
  emlrtAssign(&rhs130, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs130, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs130), "rhs", 130);
  emlrtAddField(*info, emlrtAliasP(lhs130), "lhs", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"),
                "context", 131);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexIntRelop"),
                "name", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"),
                "resolved", 131);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907946U), "fileTimeLo", 131);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 131);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 131);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 131);
  emlrtAssign(&rhs131, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs131, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs131), "rhs", 131);
  emlrtAddField(*info, emlrtAliasP(lhs131), "lhs", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/repmat.m"),
                "context", 132);
  emlrtAddField(*info, b_emlrt_marshallOut("max"), "name", 132);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/max.m"),
                "resolved", 132);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907926U), "fileTimeLo", 132);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 132);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 132);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 132);
  emlrtAssign(&rhs132, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs132, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs132), "rhs", 132);
  emlrtAddField(*info, emlrtAliasP(lhs132), "lhs", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/max.m"),
                "context", 133);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.minOrMax"), "name",
                133);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 133);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m"),
                "resolved", 133);
  emlrtAddField(*info, c_emlrt_marshallOut(1426776442U), "fileTimeLo", 133);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 133);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 133);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 133);
  emlrtAssign(&rhs133, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs133, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs133), "rhs", 133);
  emlrtAddField(*info, emlrtAliasP(lhs133), "lhs", 133);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_bin_extremum"),
                "context", 134);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                134);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 134);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 134);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 134);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 134);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 134);
  emlrtAssign(&rhs134, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs134, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs134), "rhs", 134);
  emlrtAddField(*info, emlrtAliasP(lhs134), "lhs", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "context", 135);
  emlrtAddField(*info, b_emlrt_marshallOut("isnumerictype"), "name", 135);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isnumerictype.m"),
                "resolved", 135);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907924U), "fileTimeLo", 135);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 135);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 135);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 135);
  emlrtAssign(&rhs135, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs135, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs135), "rhs", 135);
  emlrtAddField(*info, emlrtAliasP(lhs135), "lhs", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "context", 136);
  emlrtAddField(*info, b_emlrt_marshallOut("isfimath"), "name", 136);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isfimath.m"),
                "resolved", 136);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907924U), "fileTimeLo", 136);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 136);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 136);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 136);
  emlrtAssign(&rhs136, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs136, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs136), "rhs", 136);
  emlrtAddField(*info, emlrtAliasP(lhs136), "lhs", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m!firstfi"),
                "context", 137);
  emlrtAddField(*info, b_emlrt_marshallOut("isfi"), "name", 137);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isfi.m"),
                "resolved", 137);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907924U), "fileTimeLo", 137);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 137);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 137);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 137);
  emlrtAssign(&rhs137, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs137, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs137), "rhs", 137);
  emlrtAddField(*info, emlrtAliasP(lhs137), "lhs", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_bin_extremum"),
                "context", 138);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalexpAlloc"),
                "name", 138);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m"),
                "resolved", 138);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907916U), "fileTimeLo", 138);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 138);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 138);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 138);
  emlrtAssign(&rhs138, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs138, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs138), "rhs", 138);
  emlrtAddField(*info, emlrtAliasP(lhs138), "lhs", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m"),
                "context", 139);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalexpAllocNoCheck"),
                "name", 139);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 139);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAllocNoCheck.m"),
                "resolved", 139);
  emlrtAddField(*info, c_emlrt_marshallOut(1410437090U), "fileTimeLo", 139);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 139);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 139);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 139);
  emlrtAssign(&rhs139, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs139, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs139), "rhs", 139);
  emlrtAddField(*info, emlrtAliasP(lhs139), "lhs", 139);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_scalar_bin_extremum"),
                "context", 140);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                140);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 140);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 140);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 140);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 140);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 140);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 140);
  emlrtAssign(&rhs140, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs140, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs140), "rhs", 140);
  emlrtAddField(*info, emlrtAliasP(lhs140), "lhs", 140);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_scalar_bin_extremum"),
                "context", 141);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 141);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 141);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 141);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 141);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 141);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 141);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 141);
  emlrtAssign(&rhs141, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs141, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs141), "rhs", 141);
  emlrtAddField(*info, emlrtAliasP(lhs141), "lhs", 141);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/repmat.m"),
                "context", 142);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 142);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 142);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 142);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 142);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 142);
  emlrtAssign(&rhs142, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs142, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs142), "rhs", 142);
  emlrtAddField(*info, emlrtAliasP(lhs142), "lhs", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/repmat.m"),
                "context", 143);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexIntRelop"),
                "name", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"),
                "resolved", 143);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907946U), "fileTimeLo", 143);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 143);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 143);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 143);
  emlrtAssign(&rhs143, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs143, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs143), "rhs", 143);
  emlrtAddField(*info, emlrtAliasP(lhs143), "lhs", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/repmat.m"),
                "context", 144);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                144);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 144);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 144);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 144);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 144);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 144);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 144);
  emlrtAssign(&rhs144, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs144, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs144), "rhs", 144);
  emlrtAddField(*info, emlrtAliasP(lhs144), "lhs", 144);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/repmat.m!locDimsAreEmpty"),
                "context", 145);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 145);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 145);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 145);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 145);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 145);
  emlrtAssign(&rhs145, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs145, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs145), "rhs", 145);
  emlrtAddField(*info, emlrtAliasP(lhs145), "lhs", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/repmat.m"),
                "context", 146);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.prodsize"), "name",
                146);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/prodsize.m"),
                "resolved", 146);
  emlrtAddField(*info, c_emlrt_marshallOut(1360282588U), "fileTimeLo", 146);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 146);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 146);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 146);
  emlrtAssign(&rhs146, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs146, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs146), "rhs", 146);
  emlrtAddField(*info, emlrtAliasP(lhs146), "lhs", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[E]C:/Users/Bayesd/msc-thesis/msc-thesis/current/analysis/portfolio/strategicPort_three_assets.m"),
                "context", 147);
  emlrtAddField(*info, b_emlrt_marshallOut("squeeze"), "name", 147);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 147);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/squeeze.m"),
                "resolved", 147);
  emlrtAddField(*info, c_emlrt_marshallOut(1435836562U), "fileTimeLo", 147);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 147);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 147);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 147);
  emlrtAssign(&rhs147, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs147, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs147), "rhs", 147);
  emlrtAddField(*info, emlrtAliasP(lhs147), "lhs", 147);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/squeeze.m"),
                "context", 148);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_ndims_varsized"), "name", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_ndims_varsized.m"),
                "resolved", 148);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 148);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 148);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 148);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 148);
  emlrtAssign(&rhs148, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs148, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs148), "rhs", 148);
  emlrtAddField(*info, emlrtAliasP(lhs148), "lhs", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/squeeze.m"),
                "context", 149);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                149);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 149);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 149);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 149);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 149);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 149);
  emlrtAssign(&rhs149, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs149, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs149), "rhs", 149);
  emlrtAddField(*info, emlrtAliasP(lhs149), "lhs", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/squeeze.m"),
                "context", 150);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 150);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 150);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 150);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 150);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 150);
  emlrtAssign(&rhs150, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs150, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs150), "rhs", 150);
  emlrtAddField(*info, emlrtAliasP(lhs150), "lhs", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/squeeze.m"),
                "context", 151);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                151);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 151);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 151);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 151);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 151);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 151);
  emlrtAssign(&rhs151, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs151, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs151), "rhs", 151);
  emlrtAddField(*info, emlrtAliasP(lhs151), "lhs", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/squeeze.m"),
                "context", 152);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexMinus"), "name",
                152);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexMinus.m"),
                "resolved", 152);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 152);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 152);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 152);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 152);
  emlrtAssign(&rhs152, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs152, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs152), "rhs", 152);
  emlrtAddField(*info, emlrtAliasP(lhs152), "lhs", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[E]C:/Users/Bayesd/msc-thesis/msc-thesis/current/analysis/portfolio/strategicPort_three_assets.m"),
                "context", 153);
  emlrtAddField(*info, b_emlrt_marshallOut("mldivide"), "name", 153);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mldivide.p"),
                "resolved", 153);
  emlrtAddField(*info, c_emlrt_marshallOut(1438285820U), "fileTimeLo", 153);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 153);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907938U), "mFileTimeLo", 153);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 153);
  emlrtAssign(&rhs153, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs153, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs153), "rhs", 153);
  emlrtAddField(*info, emlrtAliasP(lhs153), "lhs", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mldivide.p"),
                "context", 154);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                154);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 154);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 154);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 154);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 154);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 154);
  emlrtAssign(&rhs154, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs154, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs154), "rhs", 154);
  emlrtAddField(*info, emlrtAliasP(lhs154), "lhs", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mldivide.p"),
                "context", 155);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lusolve"), "name",
                155);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/lusolve.m"),
                "resolved", 155);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 155);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 155);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 155);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 155);
  emlrtAssign(&rhs155, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs155, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs155), "rhs", 155);
  emlrtAddField(*info, emlrtAliasP(lhs155), "lhs", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/lusolve.m!lusolveNxN"),
                "context", 156);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.xgetrf"),
                "name", 156);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 156);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"),
                "resolved", 156);
  emlrtAddField(*info, c_emlrt_marshallOut(1429533024U), "fileTimeLo", 156);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 156);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 156);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 156);
  emlrtAssign(&rhs156, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs156, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs156), "rhs", 156);
  emlrtAddField(*info, emlrtAliasP(lhs156), "lhs", 156);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"),
                "context", 157);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.use_lapack"),
                "name", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/use_lapack.m"),
                "resolved", 157);
  emlrtAddField(*info, c_emlrt_marshallOut(1424668594U), "fileTimeLo", 157);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 157);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 157);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 157);
  emlrtAssign(&rhs157, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs157, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs157), "rhs", 157);
  emlrtAddField(*info, emlrtAliasP(lhs157), "lhs", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m!below_threshold"),
                "context", 158);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.threshold"),
                "name", 158);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 158);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/threshold.m"),
                "resolved", 158);
  emlrtAddField(*info, c_emlrt_marshallOut(1425305942U), "fileTimeLo", 158);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 158);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 158);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 158);
  emlrtAssign(&rhs158, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs158, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs158), "rhs", 158);
  emlrtAddField(*info, emlrtAliasP(lhs158), "lhs", 158);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m!ceval_xgetrf"),
                "context", 159);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.info_t"),
                "name", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/info_t.m"),
                "resolved", 159);
  emlrtAddField(*info, c_emlrt_marshallOut(1424668594U), "fileTimeLo", 159);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 159);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 159);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 159);
  emlrtAssign(&rhs159, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs159, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs159), "rhs", 159);
  emlrtAddField(*info, emlrtAliasP(lhs159), "lhs", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m!ceval_xgetrf"),
                "context", 160);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.int"), "name",
                160);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 160);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/int.m"),
                "resolved", 160);
  emlrtAddField(*info, c_emlrt_marshallOut(1425032208U), "fileTimeLo", 160);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 160);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 160);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 160);
  emlrtAssign(&rhs160, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs160, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs160), "rhs", 160);
  emlrtAddField(*info, emlrtAliasP(lhs160), "lhs", 160);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[IXC]C:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/ExternalDependency.m"),
                "context", 161);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.matlabCodegenHandle"),
                "name", 161);
  emlrtAddField(*info, b_emlrt_marshallOut("unknown"), "dominantType", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXC]C:/Program Files/MATLAB/R2015b/toolbox/coder/coder/+coder/+internal/matlabCodegenHandle.p"),
                "resolved", 161);
  emlrtAddField(*info, c_emlrt_marshallOut(1438286000U), "fileTimeLo", 161);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 161);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 161);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 161);
  emlrtAssign(&rhs161, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs161, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs161), "rhs", 161);
  emlrtAddField(*info, emlrtAliasP(lhs161), "lhs", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXC]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/LAPACKApi.m"),
                "context", 162);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.ExternalDependency"), "name",
                162);
  emlrtAddField(*info, b_emlrt_marshallOut("unknown"), "dominantType", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[IXC]C:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/ExternalDependency.m"),
                "resolved", 162);
  emlrtAddField(*info, c_emlrt_marshallOut(1378297246U), "fileTimeLo", 162);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 162);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 162);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 162);
  emlrtAssign(&rhs162, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs162, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs162), "rhs", 162);
  emlrtAddField(*info, emlrtAliasP(lhs162), "lhs", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXC]C:/Program Files/MATLAB/R2015b/toolbox/coder/coder/+coder/+internal/JITSupportedExternalDependency.p"),
                "context", 163);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.matlabCodegenHandle"),
                "name", 163);
  emlrtAddField(*info, b_emlrt_marshallOut("unknown"), "dominantType", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXC]C:/Program Files/MATLAB/R2015b/toolbox/coder/coder/+coder/+internal/matlabCodegenHandle.p"),
                "resolved", 163);
  emlrtAddField(*info, c_emlrt_marshallOut(1438286000U), "fileTimeLo", 163);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 163);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 163);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 163);
  emlrtAssign(&rhs163, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs163, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs163), "rhs", 163);
  emlrtAddField(*info, emlrtAliasP(lhs163), "lhs", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXC]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/LAPACKApi.m"),
                "context", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "coder.internal.JITSupportedExternalDependency"), "name", 164);
  emlrtAddField(*info, b_emlrt_marshallOut("unknown"), "dominantType", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXC]C:/Program Files/MATLAB/R2015b/toolbox/coder/coder/+coder/+internal/JITSupportedExternalDependency.p"),
                "resolved", 164);
  emlrtAddField(*info, c_emlrt_marshallOut(1438285998U), "fileTimeLo", 164);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 164);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 164);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 164);
  emlrtAssign(&rhs164, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs164, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs164), "rhs", 164);
  emlrtAddField(*info, emlrtAliasP(lhs164), "lhs", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/int.m"),
                "context", 165);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.LAPACKApi"),
                "name", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXC]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/LAPACKApi.m"),
                "resolved", 165);
  emlrtAddField(*info, c_emlrt_marshallOut(1426779304U), "fileTimeLo", 165);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 165);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 165);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 165);
  emlrtAssign(&rhs165, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs165, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs165), "rhs", 165);
  emlrtAddField(*info, emlrtAliasP(lhs165), "lhs", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m!ceval_xgetrf"),
                "context", 166);
  emlrtAddField(*info, b_emlrt_marshallOut("min"), "name", 166);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/min.m"),
                "resolved", 166);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907926U), "fileTimeLo", 166);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 166);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 166);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 166);
  emlrtAssign(&rhs166, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs166, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs166), "rhs", 166);
  emlrtAddField(*info, emlrtAliasP(lhs166), "lhs", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m!ceval_xgetrf"),
                "context", 167);
  emlrtAddField(*info, b_emlrt_marshallOut("max"), "name", 167);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 167);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/max.m"),
                "resolved", 167);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907926U), "fileTimeLo", 167);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 167);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 167);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 167);
  emlrtAssign(&rhs167, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs167, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs167), "rhs", 167);
  emlrtAddField(*info, emlrtAliasP(lhs167), "lhs", 167);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_scalar_bin_extremum"),
                "context", 168);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.relop"), "name", 168);
  emlrtAddField(*info, b_emlrt_marshallOut("function_handle"), "dominantType",
                168);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/relop.m"),
                "resolved", 168);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907916U), "fileTimeLo", 168);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 168);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 168);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 168);
  emlrtAssign(&rhs168, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs168, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs168), "rhs", 168);
  emlrtAddField(*info, emlrtAliasP(lhs168), "lhs", 168);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/relop.m"),
                "context", 169);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexIntRelop"),
                "name", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"),
                "resolved", 169);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907946U), "fileTimeLo", 169);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 169);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 169);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 169);
  emlrtAssign(&rhs169, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs169, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs169), "rhs", 169);
  emlrtAddField(*info, emlrtAliasP(lhs169), "lhs", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_scalar_bin_extremum"),
                "context", 170);
  emlrtAddField(*info, b_emlrt_marshallOut("isnan"), "name", 170);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 170);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isnan.m"),
                "resolved", 170);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 170);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 170);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 170);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 170);
  emlrtAssign(&rhs170, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs170, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs170), "rhs", 170);
  emlrtAddField(*info, emlrtAliasP(lhs170), "lhs", 170);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isnan.m"),
                "context", 171);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 171);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 171);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 171);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 171);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 171);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 171);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 171);
  emlrtAssign(&rhs171, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs171, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs171), "rhs", 171);
  emlrtAddField(*info, emlrtAliasP(lhs171), "lhs", 171);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m!ceval_xgetrf"),
                "context", 172);
  emlrtAddField(*info, b_emlrt_marshallOut("repmat"), "name", 172);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 172);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/repmat.m"),
                "resolved", 172);
  emlrtAddField(*info, c_emlrt_marshallOut(1436262282U), "fileTimeLo", 172);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 172);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 172);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 172);
  emlrtAssign(&rhs172, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs172, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs172), "rhs", 172);
  emlrtAddField(*info, emlrtAliasP(lhs172), "lhs", 172);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"),
                "context", 173);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 173);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 173);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 173);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 173);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 173);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 173);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 173);
  emlrtAssign(&rhs173, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs173, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs173), "rhs", 173);
  emlrtAddField(*info, emlrtAliasP(lhs173), "lhs", 173);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m!ceval_xgetrf"),
                "context", 174);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.majority"),
                "name", 174);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 174);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/majority.m"),
                "resolved", 174);
  emlrtAddField(*info, c_emlrt_marshallOut(1424668594U), "fileTimeLo", 174);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 174);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 174);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 174);
  emlrtAssign(&rhs174, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs174, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs174), "rhs", 174);
  emlrtAddField(*info, emlrtAliasP(lhs174), "lhs", 174);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m!ceval_xgetrf"),
                "context", 175);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.infocheck"),
                "name", 175);
  emlrtAddField(*info, b_emlrt_marshallOut("int32"), "dominantType", 175);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/infocheck.m"),
                "resolved", 175);
  emlrtAddField(*info, c_emlrt_marshallOut(1429530038U), "fileTimeLo", 175);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 175);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 175);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 175);
  emlrtAssign(&rhs175, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs175, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs175), "rhs", 175);
  emlrtAddField(*info, emlrtAliasP(lhs175), "lhs", 175);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/infocheck.m"),
                "context", 176);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.info_t"),
                "name", 176);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 176);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/info_t.m"),
                "resolved", 176);
  emlrtAddField(*info, c_emlrt_marshallOut(1424668594U), "fileTimeLo", 176);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 176);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 176);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 176);
  emlrtAssign(&rhs176, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs176, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs176), "rhs", 176);
  emlrtAddField(*info, emlrtAliasP(lhs176), "lhs", 176);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/infocheck.m"),
                "context", 177);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.error"), "name", 177);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 177);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/error.m"),
                "resolved", 177);
  emlrtAddField(*info, c_emlrt_marshallOut(1435845494U), "fileTimeLo", 177);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 177);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 177);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 177);
  emlrtAssign(&rhs177, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs177, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs177), "rhs", 177);
  emlrtAddField(*info, emlrtAliasP(lhs177), "lhs", 177);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/infocheck.m"),
                "context", 178);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.error"), "name", 178);
  emlrtAddField(*info, b_emlrt_marshallOut("int32"), "dominantType", 178);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/error.m"),
                "resolved", 178);
  emlrtAddField(*info, c_emlrt_marshallOut(1435845494U), "fileTimeLo", 178);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 178);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 178);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 178);
  emlrtAssign(&rhs178, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs178, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs178), "rhs", 178);
  emlrtAddField(*info, emlrtAliasP(lhs178), "lhs", 178);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m!ceval_xgetrf"),
                "context", 179);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.nan"), "name", 179);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 179);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/nan.m"),
                "resolved", 179);
  emlrtAddField(*info, c_emlrt_marshallOut(1362262032U), "fileTimeLo", 179);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 179);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 179);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 179);
  emlrtAssign(&rhs179, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs179, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs179), "rhs", 179);
  emlrtAddField(*info, emlrtAliasP(lhs179), "lhs", 179);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m!ceval_xgetrf"),
                "context", 180);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 180);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 180);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 180);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 180);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 180);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 180);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 180);
  emlrtAssign(&rhs180, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs180, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs180), "rhs", 180);
  emlrtAddField(*info, emlrtAliasP(lhs180), "lhs", 180);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"),
                "context", 181);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.reflapack.xzgetrf"),
                "name", 181);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 181);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"),
                "resolved", 181);
  emlrtAddField(*info, c_emlrt_marshallOut(1424689230U), "fileTimeLo", 181);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 181);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 181);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 181);
  emlrtAssign(&rhs181, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs181, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs181), "rhs", 181);
  emlrtAddField(*info, emlrtAliasP(lhs181), "lhs", 181);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"),
                "context", 182);
  emlrtAddField(*info, b_emlrt_marshallOut("realmin"), "name", 182);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 182);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/realmin.m"),
                "resolved", 182);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 182);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 182);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 182);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 182);
  emlrtAssign(&rhs182, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs182, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs182), "rhs", 182);
  emlrtAddField(*info, emlrtAliasP(lhs182), "lhs", 182);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/realmin.m"),
                "context", 183);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_realmin"), "name", 183);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 183);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/private/eml_realmin.m"),
                "resolved", 183);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 183);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 183);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 183);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 183);
  emlrtAssign(&rhs183, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs183, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs183), "rhs", 183);
  emlrtAddField(*info, emlrtAliasP(lhs183), "lhs", 183);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/private/eml_realmin.m"),
                "context", 184);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.floatModel"), "name",
                184);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 184);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/floatModel.m"),
                "resolved", 184);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 184);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 184);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 184);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 184);
  emlrtAssign(&rhs184, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs184, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs184), "rhs", 184);
  emlrtAddField(*info, emlrtAliasP(lhs184), "lhs", 184);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"),
                "context", 185);
  emlrtAddField(*info, b_emlrt_marshallOut("eps"), "name", 185);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 185);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/eps.m"),
                "resolved", 185);
  emlrtAddField(*info, c_emlrt_marshallOut(1427228304U), "fileTimeLo", 185);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 185);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 185);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 185);
  emlrtAssign(&rhs185, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs185, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs185), "rhs", 185);
  emlrtAddField(*info, emlrtAliasP(lhs185), "lhs", 185);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"),
                "context", 186);
  emlrtAddField(*info, b_emlrt_marshallOut("min"), "name", 186);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 186);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/min.m"),
                "resolved", 186);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907926U), "fileTimeLo", 186);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 186);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 186);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 186);
  emlrtAssign(&rhs186, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs186, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs186), "rhs", 186);
  emlrtAddField(*info, emlrtAliasP(lhs186), "lhs", 186);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"),
                "context", 187);
  emlrtAddField(*info, b_emlrt_marshallOut("colon"), "name", 187);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 187);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m"),
                "resolved", 187);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907938U), "fileTimeLo", 187);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 187);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 187);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 187);
  emlrtAssign(&rhs187, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs187, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs187), "rhs", 187);
  emlrtAddField(*info, emlrtAliasP(lhs187), "lhs", 187);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m"),
                "context", 188);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 188);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 188);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 188);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 188);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 188);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 188);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 188);
  emlrtAssign(&rhs188, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs188, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs188), "rhs", 188);
  emlrtAddField(*info, emlrtAliasP(lhs188), "lhs", 188);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m"),
                "context", 189);
  emlrtAddField(*info, b_emlrt_marshallOut("floor"), "name", 189);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 189);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "resolved", 189);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313828U), "fileTimeLo", 189);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 189);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 189);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 189);
  emlrtAssign(&rhs189, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs189, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs189), "rhs", 189);
  emlrtAddField(*info, emlrtAliasP(lhs189), "lhs", 189);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!checkrange"),
                "context", 190);
  emlrtAddField(*info, b_emlrt_marshallOut("intmin"), "name", 190);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 190);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmin.m"),
                "resolved", 190);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 190);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 190);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 190);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 190);
  emlrtAssign(&rhs190, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs190, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs190), "rhs", 190);
  emlrtAddField(*info, emlrtAliasP(lhs190), "lhs", 190);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!checkrange"),
                "context", 191);
  emlrtAddField(*info, b_emlrt_marshallOut("intmax"), "name", 191);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 191);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmax.m"),
                "resolved", 191);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 191);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 191);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 191);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 191);
  emlrtAssign(&rhs191, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs191, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs191), "rhs", 191);
  emlrtAddField(*info, emlrtAliasP(lhs191), "lhs", 191);
  emlrtDestroyArray(&rhs128);
  emlrtDestroyArray(&lhs128);
  emlrtDestroyArray(&rhs129);
  emlrtDestroyArray(&lhs129);
  emlrtDestroyArray(&rhs130);
  emlrtDestroyArray(&lhs130);
  emlrtDestroyArray(&rhs131);
  emlrtDestroyArray(&lhs131);
  emlrtDestroyArray(&rhs132);
  emlrtDestroyArray(&lhs132);
  emlrtDestroyArray(&rhs133);
  emlrtDestroyArray(&lhs133);
  emlrtDestroyArray(&rhs134);
  emlrtDestroyArray(&lhs134);
  emlrtDestroyArray(&rhs135);
  emlrtDestroyArray(&lhs135);
  emlrtDestroyArray(&rhs136);
  emlrtDestroyArray(&lhs136);
  emlrtDestroyArray(&rhs137);
  emlrtDestroyArray(&lhs137);
  emlrtDestroyArray(&rhs138);
  emlrtDestroyArray(&lhs138);
  emlrtDestroyArray(&rhs139);
  emlrtDestroyArray(&lhs139);
  emlrtDestroyArray(&rhs140);
  emlrtDestroyArray(&lhs140);
  emlrtDestroyArray(&rhs141);
  emlrtDestroyArray(&lhs141);
  emlrtDestroyArray(&rhs142);
  emlrtDestroyArray(&lhs142);
  emlrtDestroyArray(&rhs143);
  emlrtDestroyArray(&lhs143);
  emlrtDestroyArray(&rhs144);
  emlrtDestroyArray(&lhs144);
  emlrtDestroyArray(&rhs145);
  emlrtDestroyArray(&lhs145);
  emlrtDestroyArray(&rhs146);
  emlrtDestroyArray(&lhs146);
  emlrtDestroyArray(&rhs147);
  emlrtDestroyArray(&lhs147);
  emlrtDestroyArray(&rhs148);
  emlrtDestroyArray(&lhs148);
  emlrtDestroyArray(&rhs149);
  emlrtDestroyArray(&lhs149);
  emlrtDestroyArray(&rhs150);
  emlrtDestroyArray(&lhs150);
  emlrtDestroyArray(&rhs151);
  emlrtDestroyArray(&lhs151);
  emlrtDestroyArray(&rhs152);
  emlrtDestroyArray(&lhs152);
  emlrtDestroyArray(&rhs153);
  emlrtDestroyArray(&lhs153);
  emlrtDestroyArray(&rhs154);
  emlrtDestroyArray(&lhs154);
  emlrtDestroyArray(&rhs155);
  emlrtDestroyArray(&lhs155);
  emlrtDestroyArray(&rhs156);
  emlrtDestroyArray(&lhs156);
  emlrtDestroyArray(&rhs157);
  emlrtDestroyArray(&lhs157);
  emlrtDestroyArray(&rhs158);
  emlrtDestroyArray(&lhs158);
  emlrtDestroyArray(&rhs159);
  emlrtDestroyArray(&lhs159);
  emlrtDestroyArray(&rhs160);
  emlrtDestroyArray(&lhs160);
  emlrtDestroyArray(&rhs161);
  emlrtDestroyArray(&lhs161);
  emlrtDestroyArray(&rhs162);
  emlrtDestroyArray(&lhs162);
  emlrtDestroyArray(&rhs163);
  emlrtDestroyArray(&lhs163);
  emlrtDestroyArray(&rhs164);
  emlrtDestroyArray(&lhs164);
  emlrtDestroyArray(&rhs165);
  emlrtDestroyArray(&lhs165);
  emlrtDestroyArray(&rhs166);
  emlrtDestroyArray(&lhs166);
  emlrtDestroyArray(&rhs167);
  emlrtDestroyArray(&lhs167);
  emlrtDestroyArray(&rhs168);
  emlrtDestroyArray(&lhs168);
  emlrtDestroyArray(&rhs169);
  emlrtDestroyArray(&lhs169);
  emlrtDestroyArray(&rhs170);
  emlrtDestroyArray(&lhs170);
  emlrtDestroyArray(&rhs171);
  emlrtDestroyArray(&lhs171);
  emlrtDestroyArray(&rhs172);
  emlrtDestroyArray(&lhs172);
  emlrtDestroyArray(&rhs173);
  emlrtDestroyArray(&lhs173);
  emlrtDestroyArray(&rhs174);
  emlrtDestroyArray(&lhs174);
  emlrtDestroyArray(&rhs175);
  emlrtDestroyArray(&lhs175);
  emlrtDestroyArray(&rhs176);
  emlrtDestroyArray(&lhs176);
  emlrtDestroyArray(&rhs177);
  emlrtDestroyArray(&lhs177);
  emlrtDestroyArray(&rhs178);
  emlrtDestroyArray(&lhs178);
  emlrtDestroyArray(&rhs179);
  emlrtDestroyArray(&lhs179);
  emlrtDestroyArray(&rhs180);
  emlrtDestroyArray(&lhs180);
  emlrtDestroyArray(&rhs181);
  emlrtDestroyArray(&lhs181);
  emlrtDestroyArray(&rhs182);
  emlrtDestroyArray(&lhs182);
  emlrtDestroyArray(&rhs183);
  emlrtDestroyArray(&lhs183);
  emlrtDestroyArray(&rhs184);
  emlrtDestroyArray(&lhs184);
  emlrtDestroyArray(&rhs185);
  emlrtDestroyArray(&lhs185);
  emlrtDestroyArray(&rhs186);
  emlrtDestroyArray(&lhs186);
  emlrtDestroyArray(&rhs187);
  emlrtDestroyArray(&lhs187);
  emlrtDestroyArray(&rhs188);
  emlrtDestroyArray(&lhs188);
  emlrtDestroyArray(&rhs189);
  emlrtDestroyArray(&lhs189);
  emlrtDestroyArray(&rhs190);
  emlrtDestroyArray(&lhs190);
  emlrtDestroyArray(&rhs191);
  emlrtDestroyArray(&lhs191);
}

static void d_info_helper(const mxArray **info)
{
  const mxArray *rhs192 = NULL;
  const mxArray *lhs192 = NULL;
  const mxArray *rhs193 = NULL;
  const mxArray *lhs193 = NULL;
  const mxArray *rhs194 = NULL;
  const mxArray *lhs194 = NULL;
  const mxArray *rhs195 = NULL;
  const mxArray *lhs195 = NULL;
  const mxArray *rhs196 = NULL;
  const mxArray *lhs196 = NULL;
  const mxArray *rhs197 = NULL;
  const mxArray *lhs197 = NULL;
  const mxArray *rhs198 = NULL;
  const mxArray *lhs198 = NULL;
  const mxArray *rhs199 = NULL;
  const mxArray *lhs199 = NULL;
  const mxArray *rhs200 = NULL;
  const mxArray *lhs200 = NULL;
  const mxArray *rhs201 = NULL;
  const mxArray *lhs201 = NULL;
  const mxArray *rhs202 = NULL;
  const mxArray *lhs202 = NULL;
  const mxArray *rhs203 = NULL;
  const mxArray *lhs203 = NULL;
  const mxArray *rhs204 = NULL;
  const mxArray *lhs204 = NULL;
  const mxArray *rhs205 = NULL;
  const mxArray *lhs205 = NULL;
  const mxArray *rhs206 = NULL;
  const mxArray *lhs206 = NULL;
  const mxArray *rhs207 = NULL;
  const mxArray *lhs207 = NULL;
  const mxArray *rhs208 = NULL;
  const mxArray *lhs208 = NULL;
  const mxArray *rhs209 = NULL;
  const mxArray *lhs209 = NULL;
  const mxArray *rhs210 = NULL;
  const mxArray *lhs210 = NULL;
  const mxArray *rhs211 = NULL;
  const mxArray *lhs211 = NULL;
  const mxArray *rhs212 = NULL;
  const mxArray *lhs212 = NULL;
  const mxArray *rhs213 = NULL;
  const mxArray *lhs213 = NULL;
  const mxArray *rhs214 = NULL;
  const mxArray *lhs214 = NULL;
  const mxArray *rhs215 = NULL;
  const mxArray *lhs215 = NULL;
  const mxArray *rhs216 = NULL;
  const mxArray *lhs216 = NULL;
  const mxArray *rhs217 = NULL;
  const mxArray *lhs217 = NULL;
  const mxArray *rhs218 = NULL;
  const mxArray *lhs218 = NULL;
  const mxArray *rhs219 = NULL;
  const mxArray *lhs219 = NULL;
  const mxArray *rhs220 = NULL;
  const mxArray *lhs220 = NULL;
  const mxArray *rhs221 = NULL;
  const mxArray *lhs221 = NULL;
  const mxArray *rhs222 = NULL;
  const mxArray *lhs222 = NULL;
  const mxArray *rhs223 = NULL;
  const mxArray *lhs223 = NULL;
  const mxArray *rhs224 = NULL;
  const mxArray *lhs224 = NULL;
  const mxArray *rhs225 = NULL;
  const mxArray *lhs225 = NULL;
  const mxArray *rhs226 = NULL;
  const mxArray *lhs226 = NULL;
  const mxArray *rhs227 = NULL;
  const mxArray *lhs227 = NULL;
  const mxArray *rhs228 = NULL;
  const mxArray *lhs228 = NULL;
  const mxArray *rhs229 = NULL;
  const mxArray *lhs229 = NULL;
  const mxArray *rhs230 = NULL;
  const mxArray *lhs230 = NULL;
  const mxArray *rhs231 = NULL;
  const mxArray *lhs231 = NULL;
  const mxArray *rhs232 = NULL;
  const mxArray *lhs232 = NULL;
  const mxArray *rhs233 = NULL;
  const mxArray *lhs233 = NULL;
  const mxArray *rhs234 = NULL;
  const mxArray *lhs234 = NULL;
  const mxArray *rhs235 = NULL;
  const mxArray *lhs235 = NULL;
  const mxArray *rhs236 = NULL;
  const mxArray *lhs236 = NULL;
  const mxArray *rhs237 = NULL;
  const mxArray *lhs237 = NULL;
  const mxArray *rhs238 = NULL;
  const mxArray *lhs238 = NULL;
  const mxArray *rhs239 = NULL;
  const mxArray *lhs239 = NULL;
  const mxArray *rhs240 = NULL;
  const mxArray *lhs240 = NULL;
  const mxArray *rhs241 = NULL;
  const mxArray *lhs241 = NULL;
  const mxArray *rhs242 = NULL;
  const mxArray *lhs242 = NULL;
  const mxArray *rhs243 = NULL;
  const mxArray *lhs243 = NULL;
  const mxArray *rhs244 = NULL;
  const mxArray *lhs244 = NULL;
  const mxArray *rhs245 = NULL;
  const mxArray *lhs245 = NULL;
  const mxArray *rhs246 = NULL;
  const mxArray *lhs246 = NULL;
  const mxArray *rhs247 = NULL;
  const mxArray *lhs247 = NULL;
  const mxArray *rhs248 = NULL;
  const mxArray *lhs248 = NULL;
  const mxArray *rhs249 = NULL;
  const mxArray *lhs249 = NULL;
  const mxArray *rhs250 = NULL;
  const mxArray *lhs250 = NULL;
  const mxArray *rhs251 = NULL;
  const mxArray *lhs251 = NULL;
  const mxArray *rhs252 = NULL;
  const mxArray *lhs252 = NULL;
  const mxArray *rhs253 = NULL;
  const mxArray *lhs253 = NULL;
  const mxArray *rhs254 = NULL;
  const mxArray *lhs254 = NULL;
  const mxArray *rhs255 = NULL;
  const mxArray *lhs255 = NULL;
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!eml_integer_colon_dispatcher"),
                "context", 192);
  emlrtAddField(*info, b_emlrt_marshallOut("intmin"), "name", 192);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 192);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmin.m"),
                "resolved", 192);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 192);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 192);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 192);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 192);
  emlrtAssign(&rhs192, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs192, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs192), "rhs", 192);
  emlrtAddField(*info, emlrtAliasP(lhs192), "lhs", 192);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!eml_integer_colon_dispatcher"),
                "context", 193);
  emlrtAddField(*info, b_emlrt_marshallOut("intmax"), "name", 193);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 193);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmax.m"),
                "resolved", 193);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 193);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 193);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 193);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 193);
  emlrtAssign(&rhs193, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs193, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs193), "rhs", 193);
  emlrtAddField(*info, emlrtAliasP(lhs193), "lhs", 193);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!eml_integer_colon_dispatcher"),
                "context", 194);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isaUint"), "name",
                194);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 194);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isaUint.m"),
                "resolved", 194);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980662U), "fileTimeLo", 194);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 194);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 194);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 194);
  emlrtAssign(&rhs194, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs194, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs194), "rhs", 194);
  emlrtAddField(*info, emlrtAliasP(lhs194), "lhs", 194);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd"),
                "context", 195);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.unsignedClass"),
                "name", 195);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 195);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/unsignedClass.m"),
                "resolved", 195);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907916U), "fileTimeLo", 195);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 195);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 195);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 195);
  emlrtAssign(&rhs195, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs195, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs195), "rhs", 195);
  emlrtAddField(*info, emlrtAliasP(lhs195), "lhs", 195);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd"),
                "context", 196);
  emlrtAddField(*info, b_emlrt_marshallOut("intmax"), "name", 196);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 196);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmax.m"),
                "resolved", 196);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 196);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 196);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 196);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 196);
  emlrtAssign(&rhs196, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs196, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs196), "rhs", 196);
  emlrtAddField(*info, emlrtAliasP(lhs196), "lhs", 196);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd"),
                "context", 197);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isaUint"), "name",
                197);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 197);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isaUint.m"),
                "resolved", 197);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980662U), "fileTimeLo", 197);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 197);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 197);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 197);
  emlrtAssign(&rhs197, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs197, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs197), "rhs", 197);
  emlrtAddField(*info, emlrtAliasP(lhs197), "lhs", 197);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd"),
                "context", 198);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                198);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 198);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 198);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 198);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 198);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 198);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 198);
  emlrtAssign(&rhs198, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs198, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs198), "rhs", 198);
  emlrtAddField(*info, emlrtAliasP(lhs198), "lhs", 198);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m!eml_signed_integer_colon"),
                "context", 199);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 199);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 199);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 199);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 199);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 199);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 199);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 199);
  emlrtAssign(&rhs199, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs199, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs199), "rhs", 199);
  emlrtAddField(*info, emlrtAliasP(lhs199), "lhs", 199);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"),
                "context", 200);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.info_t"),
                "name", 200);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 200);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/info_t.m"),
                "resolved", 200);
  emlrtAddField(*info, c_emlrt_marshallOut(1424668594U), "fileTimeLo", 200);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 200);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 200);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 200);
  emlrtAssign(&rhs200, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs200, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs200), "rhs", 200);
  emlrtAddField(*info, emlrtAliasP(lhs200), "lhs", 200);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"),
                "context", 201);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                201);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 201);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 201);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 201);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 201);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 201);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 201);
  emlrtAssign(&rhs201, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs201, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs201), "rhs", 201);
  emlrtAddField(*info, emlrtAliasP(lhs201), "lhs", 201);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"),
                "context", 202);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 202);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 202);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 202);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 202);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 202);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 202);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 202);
  emlrtAssign(&rhs202, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs202, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs202), "rhs", 202);
  emlrtAddField(*info, emlrtAliasP(lhs202), "lhs", 202);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"),
                "context", 203);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexMinus"), "name",
                203);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 203);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexMinus.m"),
                "resolved", 203);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 203);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 203);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 203);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 203);
  emlrtAssign(&rhs203, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs203, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs203), "rhs", 203);
  emlrtAddField(*info, emlrtAliasP(lhs203), "lhs", 203);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"),
                "context", 204);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexMinus"), "name",
                204);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 204);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexMinus.m"),
                "resolved", 204);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 204);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 204);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 204);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 204);
  emlrtAssign(&rhs204, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs204, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs204), "rhs", 204);
  emlrtAddField(*info, emlrtAliasP(lhs204), "lhs", 204);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"),
                "context", 205);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexTimes"), "name",
                205);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 205);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexTimes.m"),
                "resolved", 205);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 205);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 205);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 205);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 205);
  emlrtAssign(&rhs205, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs205, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs205), "rhs", 205);
  emlrtAddField(*info, emlrtAliasP(lhs205), "lhs", 205);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"),
                "context", 206);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                206);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 206);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 206);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 206);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 206);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 206);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 206);
  emlrtAssign(&rhs206, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs206, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs206), "rhs", 206);
  emlrtAddField(*info, emlrtAliasP(lhs206), "lhs", 206);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"),
                "context", 207);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.ixamax"), "name",
                207);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 207);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/ixamax.m"),
                "resolved", 207);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 207);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 207);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 207);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 207);
  emlrtAssign(&rhs207, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs207, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs207), "rhs", 207);
  emlrtAddField(*info, emlrtAliasP(lhs207), "lhs", 207);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/ixamax.m"),
                "context", 208);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.inline"), "name",
                208);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 208);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/inline.m"),
                "resolved", 208);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 208);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 208);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 208);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 208);
  emlrtAssign(&rhs208, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs208, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs208), "rhs", 208);
  emlrtAddField(*info, emlrtAliasP(lhs208), "lhs", 208);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/ixamax.m"),
                "context", 209);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.use_refblas"),
                "name", 209);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 209);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/use_refblas.m"),
                "resolved", 209);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 209);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 209);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 209);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 209);
  emlrtAssign(&rhs209, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs209, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs209), "rhs", 209);
  emlrtAddField(*info, emlrtAliasP(lhs209), "lhs", 209);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/ixamax.m!below_threshold"),
                "context", 210);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.threshold"),
                "name", 210);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 210);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/threshold.m"),
                "resolved", 210);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 210);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 210);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 210);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 210);
  emlrtAssign(&rhs210, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs210, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs210), "rhs", 210);
  emlrtAddField(*info, emlrtAliasP(lhs210), "lhs", 210);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/ixamax.m"),
                "context", 211);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.refblas.ixamax"),
                "name", 211);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 211);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/ixamax.m"),
                "resolved", 211);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 211);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 211);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 211);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 211);
  emlrtAssign(&rhs211, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs211, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs211), "rhs", 211);
  emlrtAddField(*info, emlrtAliasP(lhs211), "lhs", 211);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/ixamax.m"),
                "context", 212);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.refblas.xcabs1"),
                "name", 212);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 212);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xcabs1.m"),
                "resolved", 212);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 212);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 212);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 212);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 212);
  emlrtAssign(&rhs212, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs212, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs212), "rhs", 212);
  emlrtAddField(*info, emlrtAliasP(lhs212), "lhs", 212);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xcabs1.m"),
                "context", 213);
  emlrtAddField(*info, b_emlrt_marshallOut("abs"), "name", 213);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 213);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "resolved", 213);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313826U), "fileTimeLo", 213);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 213);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 213);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 213);
  emlrtAssign(&rhs213, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs213, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs213), "rhs", 213);
  emlrtAddField(*info, emlrtAliasP(lhs213), "lhs", 213);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/ixamax.m"),
                "context", 214);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 214);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 214);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 214);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 214);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 214);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 214);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 214);
  emlrtAssign(&rhs214, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs214, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs214), "rhs", 214);
  emlrtAddField(*info, emlrtAliasP(lhs214), "lhs", 214);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/ixamax.m"),
                "context", 215);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                215);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 215);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 215);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 215);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 215);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 215);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 215);
  emlrtAssign(&rhs215, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs215, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs215), "rhs", 215);
  emlrtAddField(*info, emlrtAliasP(lhs215), "lhs", 215);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/ixamax.m"),
                "context", 216);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.int"), "name",
                216);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 216);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/int.m"),
                "resolved", 216);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 216);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 216);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 216);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 216);
  emlrtAssign(&rhs216, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs216, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs216), "rhs", 216);
  emlrtAddField(*info, emlrtAliasP(lhs216), "lhs", 216);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/ixamax.m!ceval_ixamax"),
                "context", 217);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.size_ptr"),
                "name", 217);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 217);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/size_ptr.m"),
                "resolved", 217);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 217);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 217);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 217);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 217);
  emlrtAssign(&rhs217, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs217, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs217), "rhs", 217);
  emlrtAddField(*info, emlrtAliasP(lhs217), "lhs", 217);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/ixamax.m!ceval_ixamax"),
                "context", 218);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.c_cast"), "name", 218);
  emlrtAddField(*info, b_emlrt_marshallOut("int32"), "dominantType", 218);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/coder/coder/+coder/+internal/c_cast.p"),
                "resolved", 218);
  emlrtAddField(*info, c_emlrt_marshallOut(1438285998U), "fileTimeLo", 218);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 218);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 218);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 218);
  emlrtAssign(&rhs218, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs218, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs218), "rhs", 218);
  emlrtAddField(*info, emlrtAliasP(lhs218), "lhs", 218);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/ixamax.m!ceval_ixamax"),
                "context", 219);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                219);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 219);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 219);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 219);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 219);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 219);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 219);
  emlrtAssign(&rhs219, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs219, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs219), "rhs", 219);
  emlrtAddField(*info, emlrtAliasP(lhs219), "lhs", 219);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/ixamax.m!ceval_ixamax"),
                "context", 220);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.int"), "name",
                220);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 220);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/int.m"),
                "resolved", 220);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 220);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 220);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 220);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 220);
  emlrtAssign(&rhs220, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs220, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs220), "rhs", 220);
  emlrtAddField(*info, emlrtAliasP(lhs220), "lhs", 220);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"),
                "context", 221);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.xswap"), "name",
                221);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 221);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xswap.m"),
                "resolved", 221);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 221);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 221);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 221);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 221);
  emlrtAssign(&rhs221, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs221, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs221), "rhs", 221);
  emlrtAddField(*info, emlrtAliasP(lhs221), "lhs", 221);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xswap.m"),
                "context", 222);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.inline"), "name",
                222);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 222);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/inline.m"),
                "resolved", 222);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 222);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 222);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 222);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 222);
  emlrtAssign(&rhs222, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs222, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs222), "rhs", 222);
  emlrtAddField(*info, emlrtAliasP(lhs222), "lhs", 222);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xswap.m"),
                "context", 223);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.refblas.xswap"),
                "name", 223);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 223);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xswap.m"),
                "resolved", 223);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 223);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 223);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 223);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 223);
  emlrtAssign(&rhs223, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs223, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs223), "rhs", 223);
  emlrtAddField(*info, emlrtAliasP(lhs223), "lhs", 223);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xswap.m"),
                "context", 224);
  emlrtAddField(*info, b_emlrt_marshallOut("abs"), "name", 224);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 224);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "resolved", 224);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313826U), "fileTimeLo", 224);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 224);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 224);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 224);
  emlrtAssign(&rhs224, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs224, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs224), "rhs", 224);
  emlrtAddField(*info, emlrtAliasP(lhs224), "lhs", 224);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "context", 225);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 225);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 225);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 225);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 225);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 225);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 225);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 225);
  emlrtAssign(&rhs225, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs225, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs225), "rhs", 225);
  emlrtAddField(*info, emlrtAliasP(lhs225), "lhs", 225);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"),
                "context", 226);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalar.abs"), "name",
                226);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 226);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/abs.m"),
                "resolved", 226);
  emlrtAddField(*info, c_emlrt_marshallOut(1424693734U), "fileTimeLo", 226);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 226);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 226);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 226);
  emlrtAssign(&rhs226, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs226, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs226), "rhs", 226);
  emlrtAddField(*info, emlrtAliasP(lhs226), "lhs", 226);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xswap.m"),
                "context", 227);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 227);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 227);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 227);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 227);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 227);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 227);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 227);
  emlrtAssign(&rhs227, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs227, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs227), "rhs", 227);
  emlrtAddField(*info, emlrtAliasP(lhs227), "lhs", 227);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xswap.m"),
                "context", 228);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexMinus"), "name",
                228);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 228);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexMinus.m"),
                "resolved", 228);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 228);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 228);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 228);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 228);
  emlrtAssign(&rhs228, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs228, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs228), "rhs", 228);
  emlrtAddField(*info, emlrtAliasP(lhs228), "lhs", 228);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xswap.m"),
                "context", 229);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                229);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 229);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 229);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 229);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 229);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 229);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 229);
  emlrtAssign(&rhs229, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs229, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs229), "rhs", 229);
  emlrtAddField(*info, emlrtAliasP(lhs229), "lhs", 229);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"),
                "context", 230);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.div"), "name", 230);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 230);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/div.m"),
                "resolved", 230);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 230);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 230);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 230);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 230);
  emlrtAssign(&rhs230, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs230, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs230), "rhs", 230);
  emlrtAddField(*info, emlrtAliasP(lhs230), "lhs", 230);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"),
                "context", 231);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.xgeru"), "name",
                231);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 231);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgeru.m"),
                "resolved", 231);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 231);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 231);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 231);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 231);
  emlrtAssign(&rhs231, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs231, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs231), "rhs", 231);
  emlrtAddField(*info, emlrtAliasP(lhs231), "lhs", 231);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgeru.m"),
                "context", 232);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.inline"), "name",
                232);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 232);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/inline.m"),
                "resolved", 232);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 232);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 232);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 232);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 232);
  emlrtAssign(&rhs232, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs232, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs232), "rhs", 232);
  emlrtAddField(*info, emlrtAliasP(lhs232), "lhs", 232);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgeru.m"),
                "context", 233);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.xger"), "name",
                233);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 233);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xger.m"),
                "resolved", 233);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 233);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 233);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 233);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 233);
  emlrtAssign(&rhs233, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs233, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs233), "rhs", 233);
  emlrtAddField(*info, emlrtAliasP(lhs233), "lhs", 233);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xger.m"),
                "context", 234);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.inline"), "name",
                234);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 234);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/inline.m"),
                "resolved", 234);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 234);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 234);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 234);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 234);
  emlrtAssign(&rhs234, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs234, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs234), "rhs", 234);
  emlrtAddField(*info, emlrtAliasP(lhs234), "lhs", 234);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xger.m"),
                "context", 235);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.use_refblas"),
                "name", 235);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 235);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/use_refblas.m"),
                "resolved", 235);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 235);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 235);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 235);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 235);
  emlrtAssign(&rhs235, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs235, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs235), "rhs", 235);
  emlrtAddField(*info, emlrtAliasP(lhs235), "lhs", 235);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xger.m!below_threshold"),
                "context", 236);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.threshold"),
                "name", 236);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 236);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/threshold.m"),
                "resolved", 236);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 236);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 236);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 236);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 236);
  emlrtAssign(&rhs236, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs236, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs236), "rhs", 236);
  emlrtAddField(*info, emlrtAliasP(lhs236), "lhs", 236);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xger.m!below_threshold"),
                "context", 237);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.int"), "name",
                237);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 237);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/int.m"),
                "resolved", 237);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 237);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 237);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 237);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 237);
  emlrtAssign(&rhs237, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs237, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs237), "rhs", 237);
  emlrtAddField(*info, emlrtAliasP(lhs237), "lhs", 237);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xger.m!below_threshold"),
                "context", 238);
  emlrtAddField(*info, b_emlrt_marshallOut("intmax"), "name", 238);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 238);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmax.m"),
                "resolved", 238);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 238);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 238);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 238);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 238);
  emlrtAssign(&rhs238, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs238, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs238), "rhs", 238);
  emlrtAddField(*info, emlrtAliasP(lhs238), "lhs", 238);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xger.m!below_threshold"),
                "context", 239);
  emlrtAddField(*info, b_emlrt_marshallOut("min"), "name", 239);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 239);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/min.m"),
                "resolved", 239);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907926U), "fileTimeLo", 239);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 239);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 239);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 239);
  emlrtAssign(&rhs239, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs239, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs239), "rhs", 239);
  emlrtAddField(*info, emlrtAliasP(lhs239), "lhs", 239);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xger.m"),
                "context", 240);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.refblas.xger"),
                "name", 240);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 240);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xger.m"),
                "resolved", 240);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 240);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 240);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 240);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 240);
  emlrtAssign(&rhs240, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs240, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs240), "rhs", 240);
  emlrtAddField(*info, emlrtAliasP(lhs240), "lhs", 240);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xger.m"),
                "context", 241);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.refblas.xgerx"),
                "name", 241);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 241);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgerx.m"),
                "resolved", 241);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 241);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 241);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 241);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 241);
  emlrtAssign(&rhs241, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs241, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs241), "rhs", 241);
  emlrtAddField(*info, emlrtAliasP(lhs241), "lhs", 241);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgerx.m"),
                "context", 242);
  emlrtAddField(*info, b_emlrt_marshallOut("abs"), "name", 242);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 242);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "resolved", 242);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313826U), "fileTimeLo", 242);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 242);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 242);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 242);
  emlrtAssign(&rhs242, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs242, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs242), "rhs", 242);
  emlrtAddField(*info, emlrtAliasP(lhs242), "lhs", 242);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgerx.m"),
                "context", 243);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexMinus"), "name",
                243);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 243);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexMinus.m"),
                "resolved", 243);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 243);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 243);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 243);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 243);
  emlrtAssign(&rhs243, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs243, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs243), "rhs", 243);
  emlrtAddField(*info, emlrtAliasP(lhs243), "lhs", 243);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgerx.m"),
                "context", 244);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 244);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 244);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 244);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 244);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 244);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 244);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 244);
  emlrtAssign(&rhs244, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs244, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs244), "rhs", 244);
  emlrtAddField(*info, emlrtAliasP(lhs244), "lhs", 244);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgerx.m"),
                "context", 245);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                245);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 245);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 245);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 245);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 245);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 245);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 245);
  emlrtAssign(&rhs245, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs245, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs245), "rhs", 245);
  emlrtAddField(*info, emlrtAliasP(lhs245), "lhs", 245);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgerx.m"),
                "context", 246);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                246);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 246);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 246);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 246);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 246);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 246);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 246);
  emlrtAssign(&rhs246, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs246, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs246), "rhs", 246);
  emlrtAddField(*info, emlrtAliasP(lhs246), "lhs", 246);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgerx.m"),
                "context", 247);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexMinus"), "name",
                247);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 247);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexMinus.m"),
                "resolved", 247);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 247);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 247);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 247);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 247);
  emlrtAssign(&rhs247, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs247, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs247), "rhs", 247);
  emlrtAddField(*info, emlrtAliasP(lhs247), "lhs", 247);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xger.m"),
                "context", 248);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.int"), "name",
                248);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 248);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/int.m"),
                "resolved", 248);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 248);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 248);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 248);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 248);
  emlrtAssign(&rhs248, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs248, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs248), "rhs", 248);
  emlrtAddField(*info, emlrtAliasP(lhs248), "lhs", 248);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xger.m!ceval_xger"),
                "context", 249);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.size_ptr"),
                "name", 249);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 249);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/size_ptr.m"),
                "resolved", 249);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 249);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 249);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 249);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 249);
  emlrtAssign(&rhs249, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs249, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs249), "rhs", 249);
  emlrtAddField(*info, emlrtAliasP(lhs249), "lhs", 249);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xger.m!ceval_xger"),
                "context", 250);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.c_cast"), "name", 250);
  emlrtAddField(*info, b_emlrt_marshallOut("int32"), "dominantType", 250);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/coder/coder/+coder/+internal/c_cast.p"),
                "resolved", 250);
  emlrtAddField(*info, c_emlrt_marshallOut(1438285998U), "fileTimeLo", 250);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 250);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 250);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 250);
  emlrtAssign(&rhs250, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs250, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs250), "rhs", 250);
  emlrtAddField(*info, emlrtAliasP(lhs250), "lhs", 250);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xger.m!ceval_xger"),
                "context", 251);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                251);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 251);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 251);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 251);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 251);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 251);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 251);
  emlrtAssign(&rhs251, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs251, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs251), "rhs", 251);
  emlrtAddField(*info, emlrtAliasP(lhs251), "lhs", 251);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/lusolve.m!warn_singular"),
                "context", 252);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.warning"), "name",
                252);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 252);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/warning.m"),
                "resolved", 252);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907948U), "fileTimeLo", 252);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 252);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 252);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 252);
  emlrtAssign(&rhs252, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs252, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs252), "rhs", 252);
  emlrtAddField(*info, emlrtAliasP(lhs252), "lhs", 252);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/lusolve.m!lusolveNxN"),
                "context", 253);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                253);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 253);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 253);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 253);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 253);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 253);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 253);
  emlrtAssign(&rhs253, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs253, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs253), "rhs", 253);
  emlrtAddField(*info, emlrtAliasP(lhs253), "lhs", 253);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/lusolve.m!lusolveNxN"),
                "context", 254);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 254);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 254);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 254);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 254);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 254);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 254);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 254);
  emlrtAssign(&rhs254, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs254, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs254), "rhs", 254);
  emlrtAddField(*info, emlrtAliasP(lhs254), "lhs", 254);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/lusolve.m!lusolveNxN"),
                "context", 255);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.xtrsm"), "name",
                255);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 255);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xtrsm.m"),
                "resolved", 255);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 255);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 255);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 255);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 255);
  emlrtAssign(&rhs255, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs255, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs255), "rhs", 255);
  emlrtAddField(*info, emlrtAliasP(lhs255), "lhs", 255);
  emlrtDestroyArray(&rhs192);
  emlrtDestroyArray(&lhs192);
  emlrtDestroyArray(&rhs193);
  emlrtDestroyArray(&lhs193);
  emlrtDestroyArray(&rhs194);
  emlrtDestroyArray(&lhs194);
  emlrtDestroyArray(&rhs195);
  emlrtDestroyArray(&lhs195);
  emlrtDestroyArray(&rhs196);
  emlrtDestroyArray(&lhs196);
  emlrtDestroyArray(&rhs197);
  emlrtDestroyArray(&lhs197);
  emlrtDestroyArray(&rhs198);
  emlrtDestroyArray(&lhs198);
  emlrtDestroyArray(&rhs199);
  emlrtDestroyArray(&lhs199);
  emlrtDestroyArray(&rhs200);
  emlrtDestroyArray(&lhs200);
  emlrtDestroyArray(&rhs201);
  emlrtDestroyArray(&lhs201);
  emlrtDestroyArray(&rhs202);
  emlrtDestroyArray(&lhs202);
  emlrtDestroyArray(&rhs203);
  emlrtDestroyArray(&lhs203);
  emlrtDestroyArray(&rhs204);
  emlrtDestroyArray(&lhs204);
  emlrtDestroyArray(&rhs205);
  emlrtDestroyArray(&lhs205);
  emlrtDestroyArray(&rhs206);
  emlrtDestroyArray(&lhs206);
  emlrtDestroyArray(&rhs207);
  emlrtDestroyArray(&lhs207);
  emlrtDestroyArray(&rhs208);
  emlrtDestroyArray(&lhs208);
  emlrtDestroyArray(&rhs209);
  emlrtDestroyArray(&lhs209);
  emlrtDestroyArray(&rhs210);
  emlrtDestroyArray(&lhs210);
  emlrtDestroyArray(&rhs211);
  emlrtDestroyArray(&lhs211);
  emlrtDestroyArray(&rhs212);
  emlrtDestroyArray(&lhs212);
  emlrtDestroyArray(&rhs213);
  emlrtDestroyArray(&lhs213);
  emlrtDestroyArray(&rhs214);
  emlrtDestroyArray(&lhs214);
  emlrtDestroyArray(&rhs215);
  emlrtDestroyArray(&lhs215);
  emlrtDestroyArray(&rhs216);
  emlrtDestroyArray(&lhs216);
  emlrtDestroyArray(&rhs217);
  emlrtDestroyArray(&lhs217);
  emlrtDestroyArray(&rhs218);
  emlrtDestroyArray(&lhs218);
  emlrtDestroyArray(&rhs219);
  emlrtDestroyArray(&lhs219);
  emlrtDestroyArray(&rhs220);
  emlrtDestroyArray(&lhs220);
  emlrtDestroyArray(&rhs221);
  emlrtDestroyArray(&lhs221);
  emlrtDestroyArray(&rhs222);
  emlrtDestroyArray(&lhs222);
  emlrtDestroyArray(&rhs223);
  emlrtDestroyArray(&lhs223);
  emlrtDestroyArray(&rhs224);
  emlrtDestroyArray(&lhs224);
  emlrtDestroyArray(&rhs225);
  emlrtDestroyArray(&lhs225);
  emlrtDestroyArray(&rhs226);
  emlrtDestroyArray(&lhs226);
  emlrtDestroyArray(&rhs227);
  emlrtDestroyArray(&lhs227);
  emlrtDestroyArray(&rhs228);
  emlrtDestroyArray(&lhs228);
  emlrtDestroyArray(&rhs229);
  emlrtDestroyArray(&lhs229);
  emlrtDestroyArray(&rhs230);
  emlrtDestroyArray(&lhs230);
  emlrtDestroyArray(&rhs231);
  emlrtDestroyArray(&lhs231);
  emlrtDestroyArray(&rhs232);
  emlrtDestroyArray(&lhs232);
  emlrtDestroyArray(&rhs233);
  emlrtDestroyArray(&lhs233);
  emlrtDestroyArray(&rhs234);
  emlrtDestroyArray(&lhs234);
  emlrtDestroyArray(&rhs235);
  emlrtDestroyArray(&lhs235);
  emlrtDestroyArray(&rhs236);
  emlrtDestroyArray(&lhs236);
  emlrtDestroyArray(&rhs237);
  emlrtDestroyArray(&lhs237);
  emlrtDestroyArray(&rhs238);
  emlrtDestroyArray(&lhs238);
  emlrtDestroyArray(&rhs239);
  emlrtDestroyArray(&lhs239);
  emlrtDestroyArray(&rhs240);
  emlrtDestroyArray(&lhs240);
  emlrtDestroyArray(&rhs241);
  emlrtDestroyArray(&lhs241);
  emlrtDestroyArray(&rhs242);
  emlrtDestroyArray(&lhs242);
  emlrtDestroyArray(&rhs243);
  emlrtDestroyArray(&lhs243);
  emlrtDestroyArray(&rhs244);
  emlrtDestroyArray(&lhs244);
  emlrtDestroyArray(&rhs245);
  emlrtDestroyArray(&lhs245);
  emlrtDestroyArray(&rhs246);
  emlrtDestroyArray(&lhs246);
  emlrtDestroyArray(&rhs247);
  emlrtDestroyArray(&lhs247);
  emlrtDestroyArray(&rhs248);
  emlrtDestroyArray(&lhs248);
  emlrtDestroyArray(&rhs249);
  emlrtDestroyArray(&lhs249);
  emlrtDestroyArray(&rhs250);
  emlrtDestroyArray(&lhs250);
  emlrtDestroyArray(&rhs251);
  emlrtDestroyArray(&lhs251);
  emlrtDestroyArray(&rhs252);
  emlrtDestroyArray(&lhs252);
  emlrtDestroyArray(&rhs253);
  emlrtDestroyArray(&lhs253);
  emlrtDestroyArray(&rhs254);
  emlrtDestroyArray(&lhs254);
  emlrtDestroyArray(&rhs255);
  emlrtDestroyArray(&lhs255);
}

static void e_info_helper(const mxArray **info)
{
  const mxArray *rhs256 = NULL;
  const mxArray *lhs256 = NULL;
  const mxArray *rhs257 = NULL;
  const mxArray *lhs257 = NULL;
  const mxArray *rhs258 = NULL;
  const mxArray *lhs258 = NULL;
  const mxArray *rhs259 = NULL;
  const mxArray *lhs259 = NULL;
  const mxArray *rhs260 = NULL;
  const mxArray *lhs260 = NULL;
  const mxArray *rhs261 = NULL;
  const mxArray *lhs261 = NULL;
  const mxArray *rhs262 = NULL;
  const mxArray *lhs262 = NULL;
  const mxArray *rhs263 = NULL;
  const mxArray *lhs263 = NULL;
  const mxArray *rhs264 = NULL;
  const mxArray *lhs264 = NULL;
  const mxArray *rhs265 = NULL;
  const mxArray *lhs265 = NULL;
  const mxArray *rhs266 = NULL;
  const mxArray *lhs266 = NULL;
  const mxArray *rhs267 = NULL;
  const mxArray *lhs267 = NULL;
  const mxArray *rhs268 = NULL;
  const mxArray *lhs268 = NULL;
  const mxArray *rhs269 = NULL;
  const mxArray *lhs269 = NULL;
  const mxArray *rhs270 = NULL;
  const mxArray *lhs270 = NULL;
  const mxArray *rhs271 = NULL;
  const mxArray *lhs271 = NULL;
  const mxArray *rhs272 = NULL;
  const mxArray *lhs272 = NULL;
  const mxArray *rhs273 = NULL;
  const mxArray *lhs273 = NULL;
  const mxArray *rhs274 = NULL;
  const mxArray *lhs274 = NULL;
  const mxArray *rhs275 = NULL;
  const mxArray *lhs275 = NULL;
  const mxArray *rhs276 = NULL;
  const mxArray *lhs276 = NULL;
  const mxArray *rhs277 = NULL;
  const mxArray *lhs277 = NULL;
  const mxArray *rhs278 = NULL;
  const mxArray *lhs278 = NULL;
  const mxArray *rhs279 = NULL;
  const mxArray *lhs279 = NULL;
  const mxArray *rhs280 = NULL;
  const mxArray *lhs280 = NULL;
  const mxArray *rhs281 = NULL;
  const mxArray *lhs281 = NULL;
  const mxArray *rhs282 = NULL;
  const mxArray *lhs282 = NULL;
  const mxArray *rhs283 = NULL;
  const mxArray *lhs283 = NULL;
  const mxArray *rhs284 = NULL;
  const mxArray *lhs284 = NULL;
  const mxArray *rhs285 = NULL;
  const mxArray *lhs285 = NULL;
  const mxArray *rhs286 = NULL;
  const mxArray *lhs286 = NULL;
  const mxArray *rhs287 = NULL;
  const mxArray *lhs287 = NULL;
  const mxArray *rhs288 = NULL;
  const mxArray *lhs288 = NULL;
  const mxArray *rhs289 = NULL;
  const mxArray *lhs289 = NULL;
  const mxArray *rhs290 = NULL;
  const mxArray *lhs290 = NULL;
  const mxArray *rhs291 = NULL;
  const mxArray *lhs291 = NULL;
  const mxArray *rhs292 = NULL;
  const mxArray *lhs292 = NULL;
  const mxArray *rhs293 = NULL;
  const mxArray *lhs293 = NULL;
  const mxArray *rhs294 = NULL;
  const mxArray *lhs294 = NULL;
  const mxArray *rhs295 = NULL;
  const mxArray *lhs295 = NULL;
  const mxArray *rhs296 = NULL;
  const mxArray *lhs296 = NULL;
  const mxArray *rhs297 = NULL;
  const mxArray *lhs297 = NULL;
  const mxArray *rhs298 = NULL;
  const mxArray *lhs298 = NULL;
  const mxArray *rhs299 = NULL;
  const mxArray *lhs299 = NULL;
  const mxArray *rhs300 = NULL;
  const mxArray *lhs300 = NULL;
  const mxArray *rhs301 = NULL;
  const mxArray *lhs301 = NULL;
  const mxArray *rhs302 = NULL;
  const mxArray *lhs302 = NULL;
  const mxArray *rhs303 = NULL;
  const mxArray *lhs303 = NULL;
  const mxArray *rhs304 = NULL;
  const mxArray *lhs304 = NULL;
  const mxArray *rhs305 = NULL;
  const mxArray *lhs305 = NULL;
  const mxArray *rhs306 = NULL;
  const mxArray *lhs306 = NULL;
  const mxArray *rhs307 = NULL;
  const mxArray *lhs307 = NULL;
  const mxArray *rhs308 = NULL;
  const mxArray *lhs308 = NULL;
  const mxArray *rhs309 = NULL;
  const mxArray *lhs309 = NULL;
  const mxArray *rhs310 = NULL;
  const mxArray *lhs310 = NULL;
  const mxArray *rhs311 = NULL;
  const mxArray *lhs311 = NULL;
  const mxArray *rhs312 = NULL;
  const mxArray *lhs312 = NULL;
  const mxArray *rhs313 = NULL;
  const mxArray *lhs313 = NULL;
  const mxArray *rhs314 = NULL;
  const mxArray *lhs314 = NULL;
  const mxArray *rhs315 = NULL;
  const mxArray *lhs315 = NULL;
  const mxArray *rhs316 = NULL;
  const mxArray *lhs316 = NULL;
  const mxArray *rhs317 = NULL;
  const mxArray *lhs317 = NULL;
  const mxArray *rhs318 = NULL;
  const mxArray *lhs318 = NULL;
  const mxArray *rhs319 = NULL;
  const mxArray *lhs319 = NULL;
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xtrsm.m"),
                "context", 256);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.inline"), "name",
                256);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 256);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/inline.m"),
                "resolved", 256);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 256);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 256);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 256);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 256);
  emlrtAssign(&rhs256, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs256, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs256), "rhs", 256);
  emlrtAddField(*info, emlrtAliasP(lhs256), "lhs", 256);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xtrsm.m"),
                "context", 257);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.use_refblas"),
                "name", 257);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 257);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/use_refblas.m"),
                "resolved", 257);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 257);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 257);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 257);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 257);
  emlrtAssign(&rhs257, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs257, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs257), "rhs", 257);
  emlrtAddField(*info, emlrtAliasP(lhs257), "lhs", 257);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xtrsm.m"),
                "context", 258);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                258);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 258);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 258);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 258);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 258);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 258);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 258);
  emlrtAssign(&rhs258, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs258, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs258), "rhs", 258);
  emlrtAddField(*info, emlrtAliasP(lhs258), "lhs", 258);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xtrsm.m"),
                "context", 259);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.refblas.xtrsm"),
                "name", 259);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 259);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xtrsm.m"),
                "resolved", 259);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 259);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 259);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 259);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 259);
  emlrtAssign(&rhs259, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs259, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs259), "rhs", 259);
  emlrtAddField(*info, emlrtAliasP(lhs259), "lhs", 259);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xtrsm.m"),
                "context", 260);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                260);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 260);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 260);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 260);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 260);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 260);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 260);
  emlrtAssign(&rhs260, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs260, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs260), "rhs", 260);
  emlrtAddField(*info, emlrtAliasP(lhs260), "lhs", 260);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xtrsm.m"),
                "context", 261);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 261);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 261);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 261);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 261);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 261);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 261);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 261);
  emlrtAssign(&rhs261, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs261, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs261), "rhs", 261);
  emlrtAddField(*info, emlrtAliasP(lhs261), "lhs", 261);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xtrsm.m"),
                "context", 262);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.int"), "name",
                262);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 262);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/int.m"),
                "resolved", 262);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 262);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 262);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 262);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 262);
  emlrtAssign(&rhs262, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs262, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs262), "rhs", 262);
  emlrtAddField(*info, emlrtAliasP(lhs262), "lhs", 262);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xtrsm.m!ceval_xtrsm"),
                "context", 263);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.size_ptr"),
                "name", 263);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 263);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/size_ptr.m"),
                "resolved", 263);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 263);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 263);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 263);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 263);
  emlrtAssign(&rhs263, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs263, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs263), "rhs", 263);
  emlrtAddField(*info, emlrtAliasP(lhs263), "lhs", 263);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xtrsm.m!ceval_xtrsm"),
                "context", 264);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.c_cast"), "name", 264);
  emlrtAddField(*info, b_emlrt_marshallOut("int32"), "dominantType", 264);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/coder/coder/+coder/+internal/c_cast.p"),
                "resolved", 264);
  emlrtAddField(*info, c_emlrt_marshallOut(1438285998U), "fileTimeLo", 264);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 264);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 264);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 264);
  emlrtAssign(&rhs264, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs264, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs264), "rhs", 264);
  emlrtAddField(*info, emlrtAliasP(lhs264), "lhs", 264);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xtrsm.m!ceval_xtrsm"),
                "context", 265);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                265);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 265);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 265);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 265);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 265);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 265);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 265);
  emlrtAssign(&rhs265, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs265, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs265), "rhs", 265);
  emlrtAddField(*info, emlrtAliasP(lhs265), "lhs", 265);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xtrsm.m"),
                "context", 266);
  emlrtAddField(*info, b_emlrt_marshallOut("rdivide"), "name", 266);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 266);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/rdivide.m"),
                "resolved", 266);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907940U), "fileTimeLo", 266);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 266);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 266);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 266);
  emlrtAssign(&rhs266, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs266, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs266), "rhs", 266);
  emlrtAddField(*info, emlrtAliasP(lhs266), "lhs", 266);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mldivide.p"),
                "context", 267);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.qrsolve"), "name",
                267);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 267);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/qrsolve.m"),
                "resolved", 267);
  emlrtAddField(*info, c_emlrt_marshallOut(1429534710U), "fileTimeLo", 267);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 267);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 267);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 267);
  emlrtAssign(&rhs267, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs267, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs267), "rhs", 267);
  emlrtAddField(*info, emlrtAliasP(lhs267), "lhs", 267);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/qrsolve.m"),
                "context", 268);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.xgeqp3"),
                "name", 268);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 268);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"),
                "resolved", 268);
  emlrtAddField(*info, c_emlrt_marshallOut(1425304476U), "fileTimeLo", 268);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 268);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 268);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 268);
  emlrtAssign(&rhs268, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs268, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs268), "rhs", 268);
  emlrtAddField(*info, emlrtAliasP(lhs268), "lhs", 268);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"),
                "context", 269);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.use_lapack"),
                "name", 269);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 269);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/use_lapack.m"),
                "resolved", 269);
  emlrtAddField(*info, c_emlrt_marshallOut(1424668594U), "fileTimeLo", 269);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 269);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 269);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 269);
  emlrtAssign(&rhs269, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs269, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs269), "rhs", 269);
  emlrtAddField(*info, emlrtAliasP(lhs269), "lhs", 269);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m!below_threshold"),
                "context", 270);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.threshold"),
                "name", 270);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 270);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/threshold.m"),
                "resolved", 270);
  emlrtAddField(*info, c_emlrt_marshallOut(1425305942U), "fileTimeLo", 270);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 270);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 270);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 270);
  emlrtAssign(&rhs270, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs270, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs270), "rhs", 270);
  emlrtAddField(*info, emlrtAliasP(lhs270), "lhs", 270);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m!ceval_xgeqp3"),
                "context", 271);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.int"), "name",
                271);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 271);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/int.m"),
                "resolved", 271);
  emlrtAddField(*info, c_emlrt_marshallOut(1425032208U), "fileTimeLo", 271);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 271);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 271);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 271);
  emlrtAssign(&rhs271, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs271, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs271), "rhs", 271);
  emlrtAddField(*info, emlrtAliasP(lhs271), "lhs", 271);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m!ceval_xgeqp3"),
                "context", 272);
  emlrtAddField(*info, b_emlrt_marshallOut("colon"), "name", 272);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 272);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m"),
                "resolved", 272);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907938U), "fileTimeLo", 272);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 272);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 272);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 272);
  emlrtAssign(&rhs272, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs272, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs272), "rhs", 272);
  emlrtAddField(*info, emlrtAliasP(lhs272), "lhs", 272);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m!ceval_xgeqp3"),
                "context", 273);
  emlrtAddField(*info, b_emlrt_marshallOut("min"), "name", 273);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 273);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/min.m"),
                "resolved", 273);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907926U), "fileTimeLo", 273);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 273);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 273);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 273);
  emlrtAssign(&rhs273, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs273, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs273), "rhs", 273);
  emlrtAddField(*info, emlrtAliasP(lhs273), "lhs", 273);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m!ceval_xgeqp3"),
                "context", 274);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.majority"),
                "name", 274);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 274);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/majority.m"),
                "resolved", 274);
  emlrtAddField(*info, c_emlrt_marshallOut(1424668594U), "fileTimeLo", 274);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 274);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 274);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 274);
  emlrtAssign(&rhs274, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs274, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs274), "rhs", 274);
  emlrtAddField(*info, emlrtAliasP(lhs274), "lhs", 274);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m!ceval_xgeqp3"),
                "context", 275);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.info_t"),
                "name", 275);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 275);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/info_t.m"),
                "resolved", 275);
  emlrtAddField(*info, c_emlrt_marshallOut(1424668594U), "fileTimeLo", 275);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 275);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 275);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 275);
  emlrtAssign(&rhs275, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs275, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs275), "rhs", 275);
  emlrtAddField(*info, emlrtAliasP(lhs275), "lhs", 275);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m!ceval_xgeqp3"),
                "context", 276);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.infocheck"),
                "name", 276);
  emlrtAddField(*info, b_emlrt_marshallOut("int32"), "dominantType", 276);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/infocheck.m"),
                "resolved", 276);
  emlrtAddField(*info, c_emlrt_marshallOut(1429530038U), "fileTimeLo", 276);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 276);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 276);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 276);
  emlrtAssign(&rhs276, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs276, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs276), "rhs", 276);
  emlrtAddField(*info, emlrtAliasP(lhs276), "lhs", 276);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m!ceval_xgeqp3"),
                "context", 277);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.nan"), "name", 277);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 277);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/nan.m"),
                "resolved", 277);
  emlrtAddField(*info, c_emlrt_marshallOut(1362262032U), "fileTimeLo", 277);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 277);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 277);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 277);
  emlrtAssign(&rhs277, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs277, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs277), "rhs", 277);
  emlrtAddField(*info, emlrtAliasP(lhs277), "lhs", 277);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xgeqp3.m"),
                "context", 278);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.reflapack.xzgeqp3"),
                "name", 278);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 278);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "resolved", 278);
  emlrtAddField(*info, c_emlrt_marshallOut(1424689194U), "fileTimeLo", 278);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 278);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 278);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 278);
  emlrtAssign(&rhs278, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs278, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs278), "rhs", 278);
  emlrtAddField(*info, emlrtAliasP(lhs278), "lhs", 278);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "context", 279);
  emlrtAddField(*info, b_emlrt_marshallOut("min"), "name", 279);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 279);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/min.m"),
                "resolved", 279);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907926U), "fileTimeLo", 279);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 279);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 279);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 279);
  emlrtAssign(&rhs279, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs279, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs279), "rhs", 279);
  emlrtAddField(*info, emlrtAliasP(lhs279), "lhs", 279);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "context", 280);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                280);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 280);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 280);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 280);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 280);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 280);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 280);
  emlrtAssign(&rhs280, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs280, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs280), "rhs", 280);
  emlrtAddField(*info, emlrtAliasP(lhs280), "lhs", 280);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "context", 281);
  emlrtAddField(*info, b_emlrt_marshallOut("colon"), "name", 281);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 281);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/colon.m"),
                "resolved", 281);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907938U), "fileTimeLo", 281);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 281);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 281);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 281);
  emlrtAssign(&rhs281, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs281, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs281), "rhs", 281);
  emlrtAddField(*info, emlrtAliasP(lhs281), "lhs", 281);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "context", 282);
  emlrtAddField(*info, b_emlrt_marshallOut("eps"), "name", 282);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 282);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/eps.m"),
                "resolved", 282);
  emlrtAddField(*info, c_emlrt_marshallOut(1427228304U), "fileTimeLo", 282);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 282);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 282);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 282);
  emlrtAssign(&rhs282, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs282, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs282), "rhs", 282);
  emlrtAddField(*info, emlrtAliasP(lhs282), "lhs", 282);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "context", 283);
  emlrtAddField(*info, b_emlrt_marshallOut("sqrt"), "name", 283);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 283);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/sqrt.m"),
                "resolved", 283);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313828U), "fileTimeLo", 283);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 283);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 283);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 283);
  emlrtAssign(&rhs283, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs283, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs283), "rhs", 283);
  emlrtAddField(*info, emlrtAliasP(lhs283), "lhs", 283);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/sqrt.m"),
                "context", 284);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isDomainError"),
                "name", 284);
  emlrtAddField(*info, b_emlrt_marshallOut("function_handle"), "dominantType",
                284);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isDomainError.m"),
                "resolved", 284);
  emlrtAddField(*info, c_emlrt_marshallOut(1419333384U), "fileTimeLo", 284);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 284);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 284);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 284);
  emlrtAssign(&rhs284, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs284, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs284), "rhs", 284);
  emlrtAddField(*info, emlrtAliasP(lhs284), "lhs", 284);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/sqrt.m"),
                "context", 285);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.error"), "name", 285);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 285);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/error.m"),
                "resolved", 285);
  emlrtAddField(*info, c_emlrt_marshallOut(1435845494U), "fileTimeLo", 285);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 285);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 285);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 285);
  emlrtAssign(&rhs285, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs285, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs285), "rhs", 285);
  emlrtAddField(*info, emlrtAliasP(lhs285), "lhs", 285);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/sqrt.m"),
                "context", 286);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalar.sqrt"), "name",
                286);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 286);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/sqrt.m"),
                "resolved", 286);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 286);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 286);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 286);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 286);
  emlrtAssign(&rhs286, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs286, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs286), "rhs", 286);
  emlrtAddField(*info, emlrtAliasP(lhs286), "lhs", 286);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/sqrt.m"),
                "context", 287);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "coder.internal.applyScalarFunctionInPlace"), "name", 287);
  emlrtAddField(*info, b_emlrt_marshallOut("function_handle"), "dominantType",
                287);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "resolved", 287);
  emlrtAddField(*info, c_emlrt_marshallOut(1422884200U), "fileTimeLo", 287);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 287);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 287);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 287);
  emlrtAssign(&rhs287, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs287, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs287), "rhs", 287);
  emlrtAddField(*info, emlrtAliasP(lhs287), "lhs", 287);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "context", 288);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalar.sqrt"), "name",
                288);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 288);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/sqrt.m"),
                "resolved", 288);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 288);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 288);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 288);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 288);
  emlrtAssign(&rhs288, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs288, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs288), "rhs", 288);
  emlrtAddField(*info, emlrtAliasP(lhs288), "lhs", 288);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "context", 289);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 289);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 289);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 289);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 289);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 289);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 289);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 289);
  emlrtAssign(&rhs289, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs289, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs289), "rhs", 289);
  emlrtAddField(*info, emlrtAliasP(lhs289), "lhs", 289);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "context", 290);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.xnrm2"), "name",
                290);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 290);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xnrm2.m"),
                "resolved", 290);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 290);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 290);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 290);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 290);
  emlrtAssign(&rhs290, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs290, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs290), "rhs", 290);
  emlrtAddField(*info, emlrtAliasP(lhs290), "lhs", 290);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xnrm2.m"),
                "context", 291);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.inline"), "name",
                291);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 291);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/inline.m"),
                "resolved", 291);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 291);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 291);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 291);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 291);
  emlrtAssign(&rhs291, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs291, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs291), "rhs", 291);
  emlrtAddField(*info, emlrtAliasP(lhs291), "lhs", 291);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xnrm2.m"),
                "context", 292);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.use_refblas"),
                "name", 292);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 292);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/use_refblas.m"),
                "resolved", 292);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 292);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 292);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 292);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 292);
  emlrtAssign(&rhs292, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs292, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs292), "rhs", 292);
  emlrtAddField(*info, emlrtAliasP(lhs292), "lhs", 292);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xnrm2.m!below_threshold"),
                "context", 293);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.threshold"),
                "name", 293);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 293);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/threshold.m"),
                "resolved", 293);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 293);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 293);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 293);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 293);
  emlrtAssign(&rhs293, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs293, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs293), "rhs", 293);
  emlrtAddField(*info, emlrtAliasP(lhs293), "lhs", 293);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xnrm2.m"),
                "context", 294);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.refblas.xnrm2"),
                "name", 294);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 294);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xnrm2.m"),
                "resolved", 294);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 294);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 294);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 294);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 294);
  emlrtAssign(&rhs294, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs294, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs294), "rhs", 294);
  emlrtAddField(*info, emlrtAliasP(lhs294), "lhs", 294);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xnrm2.m"),
                "context", 295);
  emlrtAddField(*info, b_emlrt_marshallOut("abs"), "name", 295);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 295);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "resolved", 295);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313826U), "fileTimeLo", 295);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 295);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 295);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 295);
  emlrtAssign(&rhs295, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs295, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs295), "rhs", 295);
  emlrtAddField(*info, emlrtAliasP(lhs295), "lhs", 295);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xnrm2.m"),
                "context", 296);
  emlrtAddField(*info, b_emlrt_marshallOut("realmin"), "name", 296);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 296);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/realmin.m"),
                "resolved", 296);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 296);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 296);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 296);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 296);
  emlrtAssign(&rhs296, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs296, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs296), "rhs", 296);
  emlrtAddField(*info, emlrtAliasP(lhs296), "lhs", 296);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xnrm2.m"),
                "context", 297);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexMinus"), "name",
                297);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 297);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexMinus.m"),
                "resolved", 297);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 297);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 297);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 297);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 297);
  emlrtAssign(&rhs297, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs297, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs297), "rhs", 297);
  emlrtAddField(*info, emlrtAliasP(lhs297), "lhs", 297);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xnrm2.m"),
                "context", 298);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexTimes"), "name",
                298);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 298);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexTimes.m"),
                "resolved", 298);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 298);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 298);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 298);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 298);
  emlrtAssign(&rhs298, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs298, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs298), "rhs", 298);
  emlrtAddField(*info, emlrtAliasP(lhs298), "lhs", 298);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xnrm2.m"),
                "context", 299);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                299);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 299);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 299);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 299);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 299);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 299);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 299);
  emlrtAssign(&rhs299, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs299, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs299), "rhs", 299);
  emlrtAddField(*info, emlrtAliasP(lhs299), "lhs", 299);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xnrm2.m"),
                "context", 300);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 300);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 300);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 300);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 300);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 300);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 300);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 300);
  emlrtAssign(&rhs300, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs300, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs300), "rhs", 300);
  emlrtAddField(*info, emlrtAliasP(lhs300), "lhs", 300);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xnrm2.m"),
                "context", 301);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.int"), "name",
                301);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 301);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/int.m"),
                "resolved", 301);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 301);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 301);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 301);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 301);
  emlrtAssign(&rhs301, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs301, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs301), "rhs", 301);
  emlrtAddField(*info, emlrtAliasP(lhs301), "lhs", 301);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xnrm2.m!ceval_xnrm2"),
                "context", 302);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.size_ptr"),
                "name", 302);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 302);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/size_ptr.m"),
                "resolved", 302);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 302);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 302);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 302);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 302);
  emlrtAssign(&rhs302, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs302, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs302), "rhs", 302);
  emlrtAddField(*info, emlrtAliasP(lhs302), "lhs", 302);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xnrm2.m!ceval_xnrm2"),
                "context", 303);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.c_cast"), "name", 303);
  emlrtAddField(*info, b_emlrt_marshallOut("int32"), "dominantType", 303);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/coder/coder/+coder/+internal/c_cast.p"),
                "resolved", 303);
  emlrtAddField(*info, c_emlrt_marshallOut(1438285998U), "fileTimeLo", 303);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 303);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 303);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 303);
  emlrtAssign(&rhs303, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs303, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs303), "rhs", 303);
  emlrtAddField(*info, emlrtAliasP(lhs303), "lhs", 303);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xnrm2.m!ceval_xnrm2"),
                "context", 304);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                304);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 304);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 304);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 304);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 304);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 304);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 304);
  emlrtAssign(&rhs304, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs304, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs304), "rhs", 304);
  emlrtAddField(*info, emlrtAliasP(lhs304), "lhs", 304);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "context", 305);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                305);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 305);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 305);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 305);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 305);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 305);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 305);
  emlrtAssign(&rhs305, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs305, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs305), "rhs", 305);
  emlrtAddField(*info, emlrtAliasP(lhs305), "lhs", 305);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "context", 306);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexMinus"), "name",
                306);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 306);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexMinus.m"),
                "resolved", 306);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 306);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 306);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 306);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 306);
  emlrtAssign(&rhs306, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs306, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs306), "rhs", 306);
  emlrtAddField(*info, emlrtAliasP(lhs306), "lhs", 306);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "context", 307);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                307);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 307);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 307);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 307);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 307);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 307);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 307);
  emlrtAssign(&rhs307, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs307, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs307), "rhs", 307);
  emlrtAddField(*info, emlrtAliasP(lhs307), "lhs", 307);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "context", 308);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexTimes"), "name",
                308);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 308);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexTimes.m"),
                "resolved", 308);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 308);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 308);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 308);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 308);
  emlrtAssign(&rhs308, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs308, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs308), "rhs", 308);
  emlrtAddField(*info, emlrtAliasP(lhs308), "lhs", 308);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "context", 309);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexMinus"), "name",
                309);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 309);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexMinus.m"),
                "resolved", 309);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 309);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 309);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 309);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 309);
  emlrtAssign(&rhs309, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs309, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs309), "rhs", 309);
  emlrtAddField(*info, emlrtAliasP(lhs309), "lhs", 309);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "context", 310);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.ixamax"), "name",
                310);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 310);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/ixamax.m"),
                "resolved", 310);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 310);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 310);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 310);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 310);
  emlrtAssign(&rhs310, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs310, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs310), "rhs", 310);
  emlrtAddField(*info, emlrtAliasP(lhs310), "lhs", 310);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "context", 311);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.xswap"), "name",
                311);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 311);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xswap.m"),
                "resolved", 311);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 311);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 311);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 311);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 311);
  emlrtAssign(&rhs311, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs311, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs311), "rhs", 311);
  emlrtAddField(*info, emlrtAliasP(lhs311), "lhs", 311);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "context", 312);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.reflapack.xzlarfg"),
                "name", 312);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 312);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarfg.m"),
                "resolved", 312);
  emlrtAddField(*info, c_emlrt_marshallOut(1424692622U), "fileTimeLo", 312);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 312);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 312);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 312);
  emlrtAssign(&rhs312, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs312, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs312), "rhs", 312);
  emlrtAddField(*info, emlrtAliasP(lhs312), "lhs", 312);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarfg.m"),
                "context", 313);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                313);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 313);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 313);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 313);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 313);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 313);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 313);
  emlrtAssign(&rhs313, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs313, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs313), "rhs", 313);
  emlrtAddField(*info, emlrtAliasP(lhs313), "lhs", 313);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarfg.m"),
                "context", 314);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.xnrm2"), "name",
                314);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 314);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xnrm2.m"),
                "resolved", 314);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 314);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 314);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 314);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 314);
  emlrtAssign(&rhs314, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs314, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs314), "rhs", 314);
  emlrtAddField(*info, emlrtAliasP(lhs314), "lhs", 314);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarfg.m"),
                "context", 315);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.xdlapy2"), "name",
                315);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 315);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/xdlapy2.m"),
                "resolved", 315);
  emlrtAddField(*info, c_emlrt_marshallOut(1424692492U), "fileTimeLo", 315);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 315);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 315);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 315);
  emlrtAssign(&rhs315, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs315, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs315), "rhs", 315);
  emlrtAddField(*info, emlrtAliasP(lhs315), "lhs", 315);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarfg.m"),
                "context", 316);
  emlrtAddField(*info, b_emlrt_marshallOut("realmin"), "name", 316);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 316);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/realmin.m"),
                "resolved", 316);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 316);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 316);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 316);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 316);
  emlrtAssign(&rhs316, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs316, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs316), "rhs", 316);
  emlrtAddField(*info, emlrtAliasP(lhs316), "lhs", 316);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarfg.m"),
                "context", 317);
  emlrtAddField(*info, b_emlrt_marshallOut("eps"), "name", 317);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 317);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/eps.m"),
                "resolved", 317);
  emlrtAddField(*info, c_emlrt_marshallOut(1427228304U), "fileTimeLo", 317);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 317);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 317);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 317);
  emlrtAssign(&rhs317, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs317, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs317), "rhs", 317);
  emlrtAddField(*info, emlrtAliasP(lhs317), "lhs", 317);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarfg.m"),
                "context", 318);
  emlrtAddField(*info, b_emlrt_marshallOut("abs"), "name", 318);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 318);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "resolved", 318);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313826U), "fileTimeLo", 318);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 318);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 318);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 318);
  emlrtAssign(&rhs318, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs318, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs318), "rhs", 318);
  emlrtAddField(*info, emlrtAliasP(lhs318), "lhs", 318);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarfg.m"),
                "context", 319);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                319);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 319);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 319);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 319);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 319);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 319);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 319);
  emlrtAssign(&rhs319, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs319, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs319), "rhs", 319);
  emlrtAddField(*info, emlrtAliasP(lhs319), "lhs", 319);
  emlrtDestroyArray(&rhs256);
  emlrtDestroyArray(&lhs256);
  emlrtDestroyArray(&rhs257);
  emlrtDestroyArray(&lhs257);
  emlrtDestroyArray(&rhs258);
  emlrtDestroyArray(&lhs258);
  emlrtDestroyArray(&rhs259);
  emlrtDestroyArray(&lhs259);
  emlrtDestroyArray(&rhs260);
  emlrtDestroyArray(&lhs260);
  emlrtDestroyArray(&rhs261);
  emlrtDestroyArray(&lhs261);
  emlrtDestroyArray(&rhs262);
  emlrtDestroyArray(&lhs262);
  emlrtDestroyArray(&rhs263);
  emlrtDestroyArray(&lhs263);
  emlrtDestroyArray(&rhs264);
  emlrtDestroyArray(&lhs264);
  emlrtDestroyArray(&rhs265);
  emlrtDestroyArray(&lhs265);
  emlrtDestroyArray(&rhs266);
  emlrtDestroyArray(&lhs266);
  emlrtDestroyArray(&rhs267);
  emlrtDestroyArray(&lhs267);
  emlrtDestroyArray(&rhs268);
  emlrtDestroyArray(&lhs268);
  emlrtDestroyArray(&rhs269);
  emlrtDestroyArray(&lhs269);
  emlrtDestroyArray(&rhs270);
  emlrtDestroyArray(&lhs270);
  emlrtDestroyArray(&rhs271);
  emlrtDestroyArray(&lhs271);
  emlrtDestroyArray(&rhs272);
  emlrtDestroyArray(&lhs272);
  emlrtDestroyArray(&rhs273);
  emlrtDestroyArray(&lhs273);
  emlrtDestroyArray(&rhs274);
  emlrtDestroyArray(&lhs274);
  emlrtDestroyArray(&rhs275);
  emlrtDestroyArray(&lhs275);
  emlrtDestroyArray(&rhs276);
  emlrtDestroyArray(&lhs276);
  emlrtDestroyArray(&rhs277);
  emlrtDestroyArray(&lhs277);
  emlrtDestroyArray(&rhs278);
  emlrtDestroyArray(&lhs278);
  emlrtDestroyArray(&rhs279);
  emlrtDestroyArray(&lhs279);
  emlrtDestroyArray(&rhs280);
  emlrtDestroyArray(&lhs280);
  emlrtDestroyArray(&rhs281);
  emlrtDestroyArray(&lhs281);
  emlrtDestroyArray(&rhs282);
  emlrtDestroyArray(&lhs282);
  emlrtDestroyArray(&rhs283);
  emlrtDestroyArray(&lhs283);
  emlrtDestroyArray(&rhs284);
  emlrtDestroyArray(&lhs284);
  emlrtDestroyArray(&rhs285);
  emlrtDestroyArray(&lhs285);
  emlrtDestroyArray(&rhs286);
  emlrtDestroyArray(&lhs286);
  emlrtDestroyArray(&rhs287);
  emlrtDestroyArray(&lhs287);
  emlrtDestroyArray(&rhs288);
  emlrtDestroyArray(&lhs288);
  emlrtDestroyArray(&rhs289);
  emlrtDestroyArray(&lhs289);
  emlrtDestroyArray(&rhs290);
  emlrtDestroyArray(&lhs290);
  emlrtDestroyArray(&rhs291);
  emlrtDestroyArray(&lhs291);
  emlrtDestroyArray(&rhs292);
  emlrtDestroyArray(&lhs292);
  emlrtDestroyArray(&rhs293);
  emlrtDestroyArray(&lhs293);
  emlrtDestroyArray(&rhs294);
  emlrtDestroyArray(&lhs294);
  emlrtDestroyArray(&rhs295);
  emlrtDestroyArray(&lhs295);
  emlrtDestroyArray(&rhs296);
  emlrtDestroyArray(&lhs296);
  emlrtDestroyArray(&rhs297);
  emlrtDestroyArray(&lhs297);
  emlrtDestroyArray(&rhs298);
  emlrtDestroyArray(&lhs298);
  emlrtDestroyArray(&rhs299);
  emlrtDestroyArray(&lhs299);
  emlrtDestroyArray(&rhs300);
  emlrtDestroyArray(&lhs300);
  emlrtDestroyArray(&rhs301);
  emlrtDestroyArray(&lhs301);
  emlrtDestroyArray(&rhs302);
  emlrtDestroyArray(&lhs302);
  emlrtDestroyArray(&rhs303);
  emlrtDestroyArray(&lhs303);
  emlrtDestroyArray(&rhs304);
  emlrtDestroyArray(&lhs304);
  emlrtDestroyArray(&rhs305);
  emlrtDestroyArray(&lhs305);
  emlrtDestroyArray(&rhs306);
  emlrtDestroyArray(&lhs306);
  emlrtDestroyArray(&rhs307);
  emlrtDestroyArray(&lhs307);
  emlrtDestroyArray(&rhs308);
  emlrtDestroyArray(&lhs308);
  emlrtDestroyArray(&rhs309);
  emlrtDestroyArray(&lhs309);
  emlrtDestroyArray(&rhs310);
  emlrtDestroyArray(&lhs310);
  emlrtDestroyArray(&rhs311);
  emlrtDestroyArray(&lhs311);
  emlrtDestroyArray(&rhs312);
  emlrtDestroyArray(&lhs312);
  emlrtDestroyArray(&rhs313);
  emlrtDestroyArray(&lhs313);
  emlrtDestroyArray(&rhs314);
  emlrtDestroyArray(&lhs314);
  emlrtDestroyArray(&rhs315);
  emlrtDestroyArray(&lhs315);
  emlrtDestroyArray(&rhs316);
  emlrtDestroyArray(&lhs316);
  emlrtDestroyArray(&rhs317);
  emlrtDestroyArray(&lhs317);
  emlrtDestroyArray(&rhs318);
  emlrtDestroyArray(&lhs318);
  emlrtDestroyArray(&rhs319);
  emlrtDestroyArray(&lhs319);
}

static void f_info_helper(const mxArray **info)
{
  const mxArray *rhs320 = NULL;
  const mxArray *lhs320 = NULL;
  const mxArray *rhs321 = NULL;
  const mxArray *lhs321 = NULL;
  const mxArray *rhs322 = NULL;
  const mxArray *lhs322 = NULL;
  const mxArray *rhs323 = NULL;
  const mxArray *lhs323 = NULL;
  const mxArray *rhs324 = NULL;
  const mxArray *lhs324 = NULL;
  const mxArray *rhs325 = NULL;
  const mxArray *lhs325 = NULL;
  const mxArray *rhs326 = NULL;
  const mxArray *lhs326 = NULL;
  const mxArray *rhs327 = NULL;
  const mxArray *lhs327 = NULL;
  const mxArray *rhs328 = NULL;
  const mxArray *lhs328 = NULL;
  const mxArray *rhs329 = NULL;
  const mxArray *lhs329 = NULL;
  const mxArray *rhs330 = NULL;
  const mxArray *lhs330 = NULL;
  const mxArray *rhs331 = NULL;
  const mxArray *lhs331 = NULL;
  const mxArray *rhs332 = NULL;
  const mxArray *lhs332 = NULL;
  const mxArray *rhs333 = NULL;
  const mxArray *lhs333 = NULL;
  const mxArray *rhs334 = NULL;
  const mxArray *lhs334 = NULL;
  const mxArray *rhs335 = NULL;
  const mxArray *lhs335 = NULL;
  const mxArray *rhs336 = NULL;
  const mxArray *lhs336 = NULL;
  const mxArray *rhs337 = NULL;
  const mxArray *lhs337 = NULL;
  const mxArray *rhs338 = NULL;
  const mxArray *lhs338 = NULL;
  const mxArray *rhs339 = NULL;
  const mxArray *lhs339 = NULL;
  const mxArray *rhs340 = NULL;
  const mxArray *lhs340 = NULL;
  const mxArray *rhs341 = NULL;
  const mxArray *lhs341 = NULL;
  const mxArray *rhs342 = NULL;
  const mxArray *lhs342 = NULL;
  const mxArray *rhs343 = NULL;
  const mxArray *lhs343 = NULL;
  const mxArray *rhs344 = NULL;
  const mxArray *lhs344 = NULL;
  const mxArray *rhs345 = NULL;
  const mxArray *lhs345 = NULL;
  const mxArray *rhs346 = NULL;
  const mxArray *lhs346 = NULL;
  const mxArray *rhs347 = NULL;
  const mxArray *lhs347 = NULL;
  const mxArray *rhs348 = NULL;
  const mxArray *lhs348 = NULL;
  const mxArray *rhs349 = NULL;
  const mxArray *lhs349 = NULL;
  const mxArray *rhs350 = NULL;
  const mxArray *lhs350 = NULL;
  const mxArray *rhs351 = NULL;
  const mxArray *lhs351 = NULL;
  const mxArray *rhs352 = NULL;
  const mxArray *lhs352 = NULL;
  const mxArray *rhs353 = NULL;
  const mxArray *lhs353 = NULL;
  const mxArray *rhs354 = NULL;
  const mxArray *lhs354 = NULL;
  const mxArray *rhs355 = NULL;
  const mxArray *lhs355 = NULL;
  const mxArray *rhs356 = NULL;
  const mxArray *lhs356 = NULL;
  const mxArray *rhs357 = NULL;
  const mxArray *lhs357 = NULL;
  const mxArray *rhs358 = NULL;
  const mxArray *lhs358 = NULL;
  const mxArray *rhs359 = NULL;
  const mxArray *lhs359 = NULL;
  const mxArray *rhs360 = NULL;
  const mxArray *lhs360 = NULL;
  const mxArray *rhs361 = NULL;
  const mxArray *lhs361 = NULL;
  const mxArray *rhs362 = NULL;
  const mxArray *lhs362 = NULL;
  const mxArray *rhs363 = NULL;
  const mxArray *lhs363 = NULL;
  const mxArray *rhs364 = NULL;
  const mxArray *lhs364 = NULL;
  const mxArray *rhs365 = NULL;
  const mxArray *lhs365 = NULL;
  const mxArray *rhs366 = NULL;
  const mxArray *lhs366 = NULL;
  const mxArray *rhs367 = NULL;
  const mxArray *lhs367 = NULL;
  const mxArray *rhs368 = NULL;
  const mxArray *lhs368 = NULL;
  const mxArray *rhs369 = NULL;
  const mxArray *lhs369 = NULL;
  const mxArray *rhs370 = NULL;
  const mxArray *lhs370 = NULL;
  const mxArray *rhs371 = NULL;
  const mxArray *lhs371 = NULL;
  const mxArray *rhs372 = NULL;
  const mxArray *lhs372 = NULL;
  const mxArray *rhs373 = NULL;
  const mxArray *lhs373 = NULL;
  const mxArray *rhs374 = NULL;
  const mxArray *lhs374 = NULL;
  const mxArray *rhs375 = NULL;
  const mxArray *lhs375 = NULL;
  const mxArray *rhs376 = NULL;
  const mxArray *lhs376 = NULL;
  const mxArray *rhs377 = NULL;
  const mxArray *lhs377 = NULL;
  const mxArray *rhs378 = NULL;
  const mxArray *lhs378 = NULL;
  const mxArray *rhs379 = NULL;
  const mxArray *lhs379 = NULL;
  const mxArray *rhs380 = NULL;
  const mxArray *lhs380 = NULL;
  const mxArray *rhs381 = NULL;
  const mxArray *lhs381 = NULL;
  const mxArray *rhs382 = NULL;
  const mxArray *lhs382 = NULL;
  const mxArray *rhs383 = NULL;
  const mxArray *lhs383 = NULL;
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarfg.m"),
                "context", 320);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.xscal"), "name",
                320);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 320);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xscal.m"),
                "resolved", 320);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 320);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 320);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 320);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 320);
  emlrtAssign(&rhs320, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs320, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs320), "rhs", 320);
  emlrtAddField(*info, emlrtAliasP(lhs320), "lhs", 320);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xscal.m"),
                "context", 321);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.inline"), "name",
                321);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 321);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/inline.m"),
                "resolved", 321);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 321);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 321);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 321);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 321);
  emlrtAssign(&rhs321, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs321, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs321), "rhs", 321);
  emlrtAddField(*info, emlrtAliasP(lhs321), "lhs", 321);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xscal.m"),
                "context", 322);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.use_refblas"),
                "name", 322);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 322);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/use_refblas.m"),
                "resolved", 322);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 322);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 322);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 322);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 322);
  emlrtAssign(&rhs322, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs322, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs322), "rhs", 322);
  emlrtAddField(*info, emlrtAliasP(lhs322), "lhs", 322);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xscal.m!below_threshold"),
                "context", 323);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.threshold"),
                "name", 323);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 323);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/threshold.m"),
                "resolved", 323);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 323);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 323);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 323);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 323);
  emlrtAssign(&rhs323, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs323, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs323), "rhs", 323);
  emlrtAddField(*info, emlrtAliasP(lhs323), "lhs", 323);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xscal.m"),
                "context", 324);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                324);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 324);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 324);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 324);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 324);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 324);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 324);
  emlrtAssign(&rhs324, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs324, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs324), "rhs", 324);
  emlrtAddField(*info, emlrtAliasP(lhs324), "lhs", 324);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xscal.m"),
                "context", 325);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.refblas.xscal"),
                "name", 325);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 325);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xscal.m"),
                "resolved", 325);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 325);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 325);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 325);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 325);
  emlrtAssign(&rhs325, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs325, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs325), "rhs", 325);
  emlrtAddField(*info, emlrtAliasP(lhs325), "lhs", 325);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xscal.m"),
                "context", 326);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexMinus"), "name",
                326);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 326);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexMinus.m"),
                "resolved", 326);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 326);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 326);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 326);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 326);
  emlrtAssign(&rhs326, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs326, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs326), "rhs", 326);
  emlrtAddField(*info, emlrtAliasP(lhs326), "lhs", 326);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xscal.m"),
                "context", 327);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexTimes"), "name",
                327);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 327);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexTimes.m"),
                "resolved", 327);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 327);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 327);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 327);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 327);
  emlrtAssign(&rhs327, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs327, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs327), "rhs", 327);
  emlrtAddField(*info, emlrtAliasP(lhs327), "lhs", 327);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xscal.m"),
                "context", 328);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                328);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 328);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 328);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 328);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 328);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 328);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 328);
  emlrtAssign(&rhs328, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs328, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs328), "rhs", 328);
  emlrtAddField(*info, emlrtAliasP(lhs328), "lhs", 328);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xscal.m"),
                "context", 329);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 329);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 329);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 329);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 329);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 329);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 329);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 329);
  emlrtAssign(&rhs329, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs329, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs329), "rhs", 329);
  emlrtAddField(*info, emlrtAliasP(lhs329), "lhs", 329);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xscal.m"),
                "context", 330);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.int"), "name",
                330);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 330);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/int.m"),
                "resolved", 330);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 330);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 330);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 330);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 330);
  emlrtAssign(&rhs330, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs330, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs330), "rhs", 330);
  emlrtAddField(*info, emlrtAliasP(lhs330), "lhs", 330);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xscal.m!ceval_xscal"),
                "context", 331);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.size_ptr"),
                "name", 331);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 331);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/size_ptr.m"),
                "resolved", 331);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 331);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 331);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 331);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 331);
  emlrtAssign(&rhs331, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs331, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs331), "rhs", 331);
  emlrtAddField(*info, emlrtAliasP(lhs331), "lhs", 331);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xscal.m!ceval_xscal"),
                "context", 332);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.c_cast"), "name", 332);
  emlrtAddField(*info, b_emlrt_marshallOut("int32"), "dominantType", 332);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/coder/coder/+coder/+internal/c_cast.p"),
                "resolved", 332);
  emlrtAddField(*info, c_emlrt_marshallOut(1438285998U), "fileTimeLo", 332);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 332);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 332);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 332);
  emlrtAssign(&rhs332, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs332, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs332), "rhs", 332);
  emlrtAddField(*info, emlrtAliasP(lhs332), "lhs", 332);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xscal.m!ceval_xscal"),
                "context", 333);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                333);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 333);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 333);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 333);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 333);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 333);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 333);
  emlrtAssign(&rhs333, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs333, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs333), "rhs", 333);
  emlrtAddField(*info, emlrtAliasP(lhs333), "lhs", 333);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarfg.m"),
                "context", 334);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.div"), "name", 334);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 334);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/div.m"),
                "resolved", 334);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 334);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 334);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 334);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 334);
  emlrtAssign(&rhs334, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs334, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs334), "rhs", 334);
  emlrtAddField(*info, emlrtAliasP(lhs334), "lhs", 334);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarfg.m"),
                "context", 335);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.recip"), "name", 335);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 335);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/recip.m"),
                "resolved", 335);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907916U), "fileTimeLo", 335);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 335);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 335);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 335);
  emlrtAssign(&rhs335, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs335, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs335), "rhs", 335);
  emlrtAddField(*info, emlrtAliasP(lhs335), "lhs", 335);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarfg.m"),
                "context", 336);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 336);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 336);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 336);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 336);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 336);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 336);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 336);
  emlrtAssign(&rhs336, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs336, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs336), "rhs", 336);
  emlrtAddField(*info, emlrtAliasP(lhs336), "lhs", 336);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "context", 337);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.reflapack.xzlarf"),
                "name", 337);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 337);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarf.m"),
                "resolved", 337);
  emlrtAddField(*info, c_emlrt_marshallOut(1424689268U), "fileTimeLo", 337);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 337);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 337);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 337);
  emlrtAssign(&rhs337, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs337, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs337), "rhs", 337);
  emlrtAddField(*info, emlrtAliasP(lhs337), "lhs", 337);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarf.m"),
                "context", 338);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                338);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 338);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 338);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 338);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 338);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 338);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 338);
  emlrtAssign(&rhs338, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs338, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs338), "rhs", 338);
  emlrtAddField(*info, emlrtAliasP(lhs338), "lhs", 338);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarf.m"),
                "context", 339);
  emlrtAddField(*info, b_emlrt_marshallOut("isequal"), "name", 339);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 339);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isequal.m"),
                "resolved", 339);
  emlrtAddField(*info, c_emlrt_marshallOut(1286818758U), "fileTimeLo", 339);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 339);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 339);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 339);
  emlrtAssign(&rhs339, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs339, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs339), "rhs", 339);
  emlrtAddField(*info, emlrtAliasP(lhs339), "lhs", 339);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarf.m"),
                "context", 340);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexIntRelop"),
                "name", 340);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 340);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"),
                "resolved", 340);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907946U), "fileTimeLo", 340);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 340);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 340);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 340);
  emlrtAssign(&rhs340, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs340, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs340), "rhs", 340);
  emlrtAddField(*info, emlrtAliasP(lhs340), "lhs", 340);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarf.m"),
                "context", 341);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexMinus"), "name",
                341);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 341);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexMinus.m"),
                "resolved", 341);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 341);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 341);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 341);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 341);
  emlrtAssign(&rhs341, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs341, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs341), "rhs", 341);
  emlrtAddField(*info, emlrtAliasP(lhs341), "lhs", 341);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarf.m"),
                "context", 342);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexTimes"), "name",
                342);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 342);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexTimes.m"),
                "resolved", 342);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 342);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 342);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 342);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 342);
  emlrtAssign(&rhs342, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs342, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs342), "rhs", 342);
  emlrtAddField(*info, emlrtAliasP(lhs342), "lhs", 342);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarf.m"),
                "context", 343);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                343);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 343);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 343);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 343);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 343);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 343);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 343);
  emlrtAssign(&rhs343, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs343, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs343), "rhs", 343);
  emlrtAddField(*info, emlrtAliasP(lhs343), "lhs", 343);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarf.m!ilazlc"),
                "context", 344);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexMinus"), "name",
                344);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 344);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexMinus.m"),
                "resolved", 344);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 344);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 344);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 344);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 344);
  emlrtAssign(&rhs344, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs344, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs344), "rhs", 344);
  emlrtAddField(*info, emlrtAliasP(lhs344), "lhs", 344);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarf.m!ilazlc"),
                "context", 345);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexTimes"), "name",
                345);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 345);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexTimes.m"),
                "resolved", 345);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 345);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 345);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 345);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 345);
  emlrtAssign(&rhs345, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs345, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs345), "rhs", 345);
  emlrtAddField(*info, emlrtAliasP(lhs345), "lhs", 345);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarf.m!ilazlc"),
                "context", 346);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                346);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 346);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 346);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 346);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 346);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 346);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 346);
  emlrtAssign(&rhs346, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs346, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs346), "rhs", 346);
  emlrtAddField(*info, emlrtAliasP(lhs346), "lhs", 346);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarf.m!ilazlc"),
                "context", 347);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 347);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 347);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 347);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 347);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 347);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 347);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 347);
  emlrtAssign(&rhs347, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs347, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs347), "rhs", 347);
  emlrtAddField(*info, emlrtAliasP(lhs347), "lhs", 347);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarf.m"),
                "context", 348);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.xgemv"), "name",
                348);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 348);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemv.m"),
                "resolved", 348);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 348);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 348);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 348);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 348);
  emlrtAssign(&rhs348, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs348, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs348), "rhs", 348);
  emlrtAddField(*info, emlrtAliasP(lhs348), "lhs", 348);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemv.m"),
                "context", 349);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.inline"), "name",
                349);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 349);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/inline.m"),
                "resolved", 349);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 349);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 349);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 349);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 349);
  emlrtAssign(&rhs349, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs349, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs349), "rhs", 349);
  emlrtAddField(*info, emlrtAliasP(lhs349), "lhs", 349);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemv.m"),
                "context", 350);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.use_refblas"),
                "name", 350);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 350);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/use_refblas.m"),
                "resolved", 350);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 350);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 350);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 350);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 350);
  emlrtAssign(&rhs350, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs350, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs350), "rhs", 350);
  emlrtAddField(*info, emlrtAliasP(lhs350), "lhs", 350);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemv.m!below_threshold"),
                "context", 351);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.threshold"),
                "name", 351);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 351);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/threshold.m"),
                "resolved", 351);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 351);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 351);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 351);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 351);
  emlrtAssign(&rhs351, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs351, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs351), "rhs", 351);
  emlrtAddField(*info, emlrtAliasP(lhs351), "lhs", 351);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemv.m"),
                "context", 352);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                352);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 352);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 352);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 352);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 352);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 352);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 352);
  emlrtAssign(&rhs352, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs352, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs352), "rhs", 352);
  emlrtAddField(*info, emlrtAliasP(lhs352), "lhs", 352);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemv.m"),
                "context", 353);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.refblas.xgemv"),
                "name", 353);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 353);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgemv.m"),
                "resolved", 353);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 353);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 353);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 353);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 353);
  emlrtAssign(&rhs353, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs353, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs353), "rhs", 353);
  emlrtAddField(*info, emlrtAliasP(lhs353), "lhs", 353);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgemv.m"),
                "context", 354);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexMinus"), "name",
                354);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 354);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexMinus.m"),
                "resolved", 354);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 354);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 354);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 354);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 354);
  emlrtAssign(&rhs354, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs354, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs354), "rhs", 354);
  emlrtAddField(*info, emlrtAliasP(lhs354), "lhs", 354);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgemv.m"),
                "context", 355);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexTimes"), "name",
                355);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 355);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexTimes.m"),
                "resolved", 355);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 355);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 355);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 355);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 355);
  emlrtAssign(&rhs355, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs355, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs355), "rhs", 355);
  emlrtAddField(*info, emlrtAliasP(lhs355), "lhs", 355);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgemv.m"),
                "context", 356);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                356);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 356);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 356);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 356);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 356);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 356);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 356);
  emlrtAssign(&rhs356, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs356, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs356), "rhs", 356);
  emlrtAddField(*info, emlrtAliasP(lhs356), "lhs", 356);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgemv.m"),
                "context", 357);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 357);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 357);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 357);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 357);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 357);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 357);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 357);
  emlrtAssign(&rhs357, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs357, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs357), "rhs", 357);
  emlrtAddField(*info, emlrtAliasP(lhs357), "lhs", 357);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgemv.m"),
                "context", 358);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                358);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 358);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 358);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 358);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 358);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 358);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 358);
  emlrtAssign(&rhs358, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs358, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs358), "rhs", 358);
  emlrtAddField(*info, emlrtAliasP(lhs358), "lhs", 358);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgemv.m"),
                "context", 359);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.conjtimes"), "name",
                359);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 359);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/conjtimes.m"),
                "resolved", 359);
  emlrtAddField(*info, c_emlrt_marshallOut(1360282586U), "fileTimeLo", 359);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 359);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 359);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 359);
  emlrtAssign(&rhs359, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs359, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs359), "rhs", 359);
  emlrtAddField(*info, emlrtAliasP(lhs359), "lhs", 359);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemv.m"),
                "context", 360);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.int"), "name",
                360);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 360);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/int.m"),
                "resolved", 360);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 360);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 360);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 360);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 360);
  emlrtAssign(&rhs360, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs360, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs360), "rhs", 360);
  emlrtAddField(*info, emlrtAliasP(lhs360), "lhs", 360);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemv.m!ceval_xgemv"),
                "context", 361);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.size_ptr"),
                "name", 361);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 361);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/size_ptr.m"),
                "resolved", 361);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 361);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 361);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 361);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 361);
  emlrtAssign(&rhs361, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs361, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs361), "rhs", 361);
  emlrtAddField(*info, emlrtAliasP(lhs361), "lhs", 361);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemv.m!ceval_xgemv"),
                "context", 362);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.c_cast"), "name", 362);
  emlrtAddField(*info, b_emlrt_marshallOut("int32"), "dominantType", 362);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/coder/coder/+coder/+internal/c_cast.p"),
                "resolved", 362);
  emlrtAddField(*info, c_emlrt_marshallOut(1438285998U), "fileTimeLo", 362);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 362);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 362);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 362);
  emlrtAssign(&rhs362, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs362, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs362), "rhs", 362);
  emlrtAddField(*info, emlrtAliasP(lhs362), "lhs", 362);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemv.m!ceval_xgemv"),
                "context", 363);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                363);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 363);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 363);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 363);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 363);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 363);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 363);
  emlrtAssign(&rhs363, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs363, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs363), "rhs", 363);
  emlrtAddField(*info, emlrtAliasP(lhs363), "lhs", 363);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarf.m"),
                "context", 364);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.xgerc"), "name",
                364);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 364);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgerc.m"),
                "resolved", 364);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 364);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 364);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 364);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 364);
  emlrtAssign(&rhs364, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs364, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs364), "rhs", 364);
  emlrtAddField(*info, emlrtAliasP(lhs364), "lhs", 364);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgerc.m"),
                "context", 365);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.inline"), "name",
                365);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 365);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/inline.m"),
                "resolved", 365);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 365);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 365);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 365);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 365);
  emlrtAssign(&rhs365, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs365, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs365), "rhs", 365);
  emlrtAddField(*info, emlrtAliasP(lhs365), "lhs", 365);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgerc.m"),
                "context", 366);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.xger"), "name",
                366);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 366);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xger.m"),
                "resolved", 366);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 366);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 366);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 366);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 366);
  emlrtAssign(&rhs366, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs366, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs366), "rhs", 366);
  emlrtAddField(*info, emlrtAliasP(lhs366), "lhs", 366);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"),
                "context", 367);
  emlrtAddField(*info, b_emlrt_marshallOut("abs"), "name", 367);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 367);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "resolved", 367);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313826U), "fileTimeLo", 367);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 367);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 367);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 367);
  emlrtAssign(&rhs367, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs367, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs367), "rhs", 367);
  emlrtAddField(*info, emlrtAliasP(lhs367), "lhs", 367);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/qrsolve.m!rankFromQR"),
                "context", 368);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.refblas.xcabs1"),
                "name", 368);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 368);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xcabs1.m"),
                "resolved", 368);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 368);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 368);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 368);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 368);
  emlrtAssign(&rhs368, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs368, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs368), "rhs", 368);
  emlrtAddField(*info, emlrtAliasP(lhs368), "lhs", 368);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/qrsolve.m!rankFromQR"),
                "context", 369);
  emlrtAddField(*info, b_emlrt_marshallOut("eps"), "name", 369);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 369);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/eps.m"),
                "resolved", 369);
  emlrtAddField(*info, c_emlrt_marshallOut(1427228304U), "fileTimeLo", 369);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 369);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 369);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 369);
  emlrtAssign(&rhs369, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs369, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs369), "rhs", 369);
  emlrtAddField(*info, emlrtAliasP(lhs369), "lhs", 369);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/qrsolve.m!rankFromQR"),
                "context", 370);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.flt2str"), "name",
                370);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 370);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/flt2str.m"),
                "resolved", 370);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 370);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 370);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 370);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 370);
  emlrtAssign(&rhs370, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs370, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs370), "rhs", 370);
  emlrtAddField(*info, emlrtAliasP(lhs370), "lhs", 370);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/flt2str.m"),
                "context", 371);
  emlrtAddField(*info, b_emlrt_marshallOut("isequal"), "name", 371);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 371);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isequal.m"),
                "resolved", 371);
  emlrtAddField(*info, c_emlrt_marshallOut(1286818758U), "fileTimeLo", 371);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 371);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 371);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 371);
  emlrtAssign(&rhs371, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs371, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs371), "rhs", 371);
  emlrtAddField(*info, emlrtAliasP(lhs371), "lhs", 371);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isequal.m"),
                "context", 372);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_isequal_core"), "name", 372);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 372);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/private/eml_isequal_core.m"),
                "resolved", 372);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 372);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 372);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 372);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 372);
  emlrtAssign(&rhs372, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs372, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs372), "rhs", 372);
  emlrtAddField(*info, emlrtAliasP(lhs372), "lhs", 372);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/private/eml_isequal_core.m!isequal_scalar"),
                "context", 373);
  emlrtAddField(*info, b_emlrt_marshallOut("isnan"), "name", 373);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 373);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isnan.m"),
                "resolved", 373);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 373);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 373);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 373);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 373);
  emlrtAssign(&rhs373, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs373, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs373), "rhs", 373);
  emlrtAddField(*info, emlrtAliasP(lhs373), "lhs", 373);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isnan.m"),
                "context", 374);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 374);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 374);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 374);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 374);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 374);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 374);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 374);
  emlrtAssign(&rhs374, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs374, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs374), "rhs", 374);
  emlrtAddField(*info, emlrtAliasP(lhs374), "lhs", 374);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/flt2str.m"),
                "context", 375);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "name", 375);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 375);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/strfun/char.m"),
                "resolved", 375);
  emlrtAddField(*info, c_emlrt_marshallOut(1435836906U), "fileTimeLo", 375);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 375);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 375);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 375);
  emlrtAssign(&rhs375, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs375, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs375), "rhs", 375);
  emlrtAddField(*info, emlrtAliasP(lhs375), "lhs", 375);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/qrsolve.m!rankFromQR"),
                "context", 376);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.warning"), "name",
                376);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 376);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/warning.m"),
                "resolved", 376);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907948U), "fileTimeLo", 376);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 376);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 376);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 376);
  emlrtAssign(&rhs376, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs376, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs376), "rhs", 376);
  emlrtAddField(*info, emlrtAliasP(lhs376), "lhs", 376);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/qrsolve.m!LSQFromQR"),
                "context", 377);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                377);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 377);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 377);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 377);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 377);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 377);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 377);
  emlrtAssign(&rhs377, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs377, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs377), "rhs", 377);
  emlrtAddField(*info, emlrtAliasP(lhs377), "lhs", 377);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/qrsolve.m!LSQFromQR"),
                "context", 378);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.xunormqr"),
                "name", 378);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 378);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"),
                "resolved", 378);
  emlrtAddField(*info, c_emlrt_marshallOut(1425379660U), "fileTimeLo", 378);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 378);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 378);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 378);
  emlrtAssign(&rhs378, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs378, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs378), "rhs", 378);
  emlrtAddField(*info, emlrtAliasP(lhs378), "lhs", 378);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"),
                "context", 379);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.use_lapack"),
                "name", 379);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 379);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/use_lapack.m"),
                "resolved", 379);
  emlrtAddField(*info, c_emlrt_marshallOut(1424668594U), "fileTimeLo", 379);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 379);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 379);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 379);
  emlrtAssign(&rhs379, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs379, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs379), "rhs", 379);
  emlrtAddField(*info, emlrtAliasP(lhs379), "lhs", 379);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m!below_threshold"),
                "context", 380);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.threshold"),
                "name", 380);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 380);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/threshold.m"),
                "resolved", 380);
  emlrtAddField(*info, c_emlrt_marshallOut(1425305942U), "fileTimeLo", 380);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 380);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 380);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 380);
  emlrtAssign(&rhs380, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs380, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs380), "rhs", 380);
  emlrtAddField(*info, emlrtAliasP(lhs380), "lhs", 380);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m!ceval_xunormqr"),
                "context", 381);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.int"), "name",
                381);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 381);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/int.m"),
                "resolved", 381);
  emlrtAddField(*info, c_emlrt_marshallOut(1425032208U), "fileTimeLo", 381);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 381);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 381);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 381);
  emlrtAssign(&rhs381, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs381, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs381), "rhs", 381);
  emlrtAddField(*info, emlrtAliasP(lhs381), "lhs", 381);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m!ceval_xunormqr"),
                "context", 382);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.majority"),
                "name", 382);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 382);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/majority.m"),
                "resolved", 382);
  emlrtAddField(*info, c_emlrt_marshallOut(1424668594U), "fileTimeLo", 382);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 382);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 382);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 382);
  emlrtAssign(&rhs382, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs382, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs382), "rhs", 382);
  emlrtAddField(*info, emlrtAliasP(lhs382), "lhs", 382);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m!ceval_xunormqr"),
                "context", 383);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.info_t"),
                "name", 383);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 383);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/info_t.m"),
                "resolved", 383);
  emlrtAddField(*info, c_emlrt_marshallOut(1424668594U), "fileTimeLo", 383);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 383);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 383);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 383);
  emlrtAssign(&rhs383, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs383, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs383), "rhs", 383);
  emlrtAddField(*info, emlrtAliasP(lhs383), "lhs", 383);
  emlrtDestroyArray(&rhs320);
  emlrtDestroyArray(&lhs320);
  emlrtDestroyArray(&rhs321);
  emlrtDestroyArray(&lhs321);
  emlrtDestroyArray(&rhs322);
  emlrtDestroyArray(&lhs322);
  emlrtDestroyArray(&rhs323);
  emlrtDestroyArray(&lhs323);
  emlrtDestroyArray(&rhs324);
  emlrtDestroyArray(&lhs324);
  emlrtDestroyArray(&rhs325);
  emlrtDestroyArray(&lhs325);
  emlrtDestroyArray(&rhs326);
  emlrtDestroyArray(&lhs326);
  emlrtDestroyArray(&rhs327);
  emlrtDestroyArray(&lhs327);
  emlrtDestroyArray(&rhs328);
  emlrtDestroyArray(&lhs328);
  emlrtDestroyArray(&rhs329);
  emlrtDestroyArray(&lhs329);
  emlrtDestroyArray(&rhs330);
  emlrtDestroyArray(&lhs330);
  emlrtDestroyArray(&rhs331);
  emlrtDestroyArray(&lhs331);
  emlrtDestroyArray(&rhs332);
  emlrtDestroyArray(&lhs332);
  emlrtDestroyArray(&rhs333);
  emlrtDestroyArray(&lhs333);
  emlrtDestroyArray(&rhs334);
  emlrtDestroyArray(&lhs334);
  emlrtDestroyArray(&rhs335);
  emlrtDestroyArray(&lhs335);
  emlrtDestroyArray(&rhs336);
  emlrtDestroyArray(&lhs336);
  emlrtDestroyArray(&rhs337);
  emlrtDestroyArray(&lhs337);
  emlrtDestroyArray(&rhs338);
  emlrtDestroyArray(&lhs338);
  emlrtDestroyArray(&rhs339);
  emlrtDestroyArray(&lhs339);
  emlrtDestroyArray(&rhs340);
  emlrtDestroyArray(&lhs340);
  emlrtDestroyArray(&rhs341);
  emlrtDestroyArray(&lhs341);
  emlrtDestroyArray(&rhs342);
  emlrtDestroyArray(&lhs342);
  emlrtDestroyArray(&rhs343);
  emlrtDestroyArray(&lhs343);
  emlrtDestroyArray(&rhs344);
  emlrtDestroyArray(&lhs344);
  emlrtDestroyArray(&rhs345);
  emlrtDestroyArray(&lhs345);
  emlrtDestroyArray(&rhs346);
  emlrtDestroyArray(&lhs346);
  emlrtDestroyArray(&rhs347);
  emlrtDestroyArray(&lhs347);
  emlrtDestroyArray(&rhs348);
  emlrtDestroyArray(&lhs348);
  emlrtDestroyArray(&rhs349);
  emlrtDestroyArray(&lhs349);
  emlrtDestroyArray(&rhs350);
  emlrtDestroyArray(&lhs350);
  emlrtDestroyArray(&rhs351);
  emlrtDestroyArray(&lhs351);
  emlrtDestroyArray(&rhs352);
  emlrtDestroyArray(&lhs352);
  emlrtDestroyArray(&rhs353);
  emlrtDestroyArray(&lhs353);
  emlrtDestroyArray(&rhs354);
  emlrtDestroyArray(&lhs354);
  emlrtDestroyArray(&rhs355);
  emlrtDestroyArray(&lhs355);
  emlrtDestroyArray(&rhs356);
  emlrtDestroyArray(&lhs356);
  emlrtDestroyArray(&rhs357);
  emlrtDestroyArray(&lhs357);
  emlrtDestroyArray(&rhs358);
  emlrtDestroyArray(&lhs358);
  emlrtDestroyArray(&rhs359);
  emlrtDestroyArray(&lhs359);
  emlrtDestroyArray(&rhs360);
  emlrtDestroyArray(&lhs360);
  emlrtDestroyArray(&rhs361);
  emlrtDestroyArray(&lhs361);
  emlrtDestroyArray(&rhs362);
  emlrtDestroyArray(&lhs362);
  emlrtDestroyArray(&rhs363);
  emlrtDestroyArray(&lhs363);
  emlrtDestroyArray(&rhs364);
  emlrtDestroyArray(&lhs364);
  emlrtDestroyArray(&rhs365);
  emlrtDestroyArray(&lhs365);
  emlrtDestroyArray(&rhs366);
  emlrtDestroyArray(&lhs366);
  emlrtDestroyArray(&rhs367);
  emlrtDestroyArray(&lhs367);
  emlrtDestroyArray(&rhs368);
  emlrtDestroyArray(&lhs368);
  emlrtDestroyArray(&rhs369);
  emlrtDestroyArray(&lhs369);
  emlrtDestroyArray(&rhs370);
  emlrtDestroyArray(&lhs370);
  emlrtDestroyArray(&rhs371);
  emlrtDestroyArray(&lhs371);
  emlrtDestroyArray(&rhs372);
  emlrtDestroyArray(&lhs372);
  emlrtDestroyArray(&rhs373);
  emlrtDestroyArray(&lhs373);
  emlrtDestroyArray(&rhs374);
  emlrtDestroyArray(&lhs374);
  emlrtDestroyArray(&rhs375);
  emlrtDestroyArray(&lhs375);
  emlrtDestroyArray(&rhs376);
  emlrtDestroyArray(&lhs376);
  emlrtDestroyArray(&rhs377);
  emlrtDestroyArray(&lhs377);
  emlrtDestroyArray(&rhs378);
  emlrtDestroyArray(&lhs378);
  emlrtDestroyArray(&rhs379);
  emlrtDestroyArray(&lhs379);
  emlrtDestroyArray(&rhs380);
  emlrtDestroyArray(&lhs380);
  emlrtDestroyArray(&rhs381);
  emlrtDestroyArray(&lhs381);
  emlrtDestroyArray(&rhs382);
  emlrtDestroyArray(&lhs382);
  emlrtDestroyArray(&rhs383);
  emlrtDestroyArray(&lhs383);
}

static void g_info_helper(const mxArray **info)
{
  const mxArray *rhs384 = NULL;
  const mxArray *lhs384 = NULL;
  const mxArray *rhs385 = NULL;
  const mxArray *lhs385 = NULL;
  const mxArray *rhs386 = NULL;
  const mxArray *lhs386 = NULL;
  const mxArray *rhs387 = NULL;
  const mxArray *lhs387 = NULL;
  const mxArray *rhs388 = NULL;
  const mxArray *lhs388 = NULL;
  const mxArray *rhs389 = NULL;
  const mxArray *lhs389 = NULL;
  const mxArray *rhs390 = NULL;
  const mxArray *lhs390 = NULL;
  const mxArray *rhs391 = NULL;
  const mxArray *lhs391 = NULL;
  const mxArray *rhs392 = NULL;
  const mxArray *lhs392 = NULL;
  const mxArray *rhs393 = NULL;
  const mxArray *lhs393 = NULL;
  const mxArray *rhs394 = NULL;
  const mxArray *lhs394 = NULL;
  const mxArray *rhs395 = NULL;
  const mxArray *lhs395 = NULL;
  const mxArray *rhs396 = NULL;
  const mxArray *lhs396 = NULL;
  const mxArray *rhs397 = NULL;
  const mxArray *lhs397 = NULL;
  const mxArray *rhs398 = NULL;
  const mxArray *lhs398 = NULL;
  const mxArray *rhs399 = NULL;
  const mxArray *lhs399 = NULL;
  const mxArray *rhs400 = NULL;
  const mxArray *lhs400 = NULL;
  const mxArray *rhs401 = NULL;
  const mxArray *lhs401 = NULL;
  const mxArray *rhs402 = NULL;
  const mxArray *lhs402 = NULL;
  const mxArray *rhs403 = NULL;
  const mxArray *lhs403 = NULL;
  const mxArray *rhs404 = NULL;
  const mxArray *lhs404 = NULL;
  const mxArray *rhs405 = NULL;
  const mxArray *lhs405 = NULL;
  const mxArray *rhs406 = NULL;
  const mxArray *lhs406 = NULL;
  const mxArray *rhs407 = NULL;
  const mxArray *lhs407 = NULL;
  const mxArray *rhs408 = NULL;
  const mxArray *lhs408 = NULL;
  const mxArray *rhs409 = NULL;
  const mxArray *lhs409 = NULL;
  const mxArray *rhs410 = NULL;
  const mxArray *lhs410 = NULL;
  const mxArray *rhs411 = NULL;
  const mxArray *lhs411 = NULL;
  const mxArray *rhs412 = NULL;
  const mxArray *lhs412 = NULL;
  const mxArray *rhs413 = NULL;
  const mxArray *lhs413 = NULL;
  const mxArray *rhs414 = NULL;
  const mxArray *lhs414 = NULL;
  const mxArray *rhs415 = NULL;
  const mxArray *lhs415 = NULL;
  const mxArray *rhs416 = NULL;
  const mxArray *lhs416 = NULL;
  const mxArray *rhs417 = NULL;
  const mxArray *lhs417 = NULL;
  const mxArray *rhs418 = NULL;
  const mxArray *lhs418 = NULL;
  const mxArray *rhs419 = NULL;
  const mxArray *lhs419 = NULL;
  const mxArray *rhs420 = NULL;
  const mxArray *lhs420 = NULL;
  const mxArray *rhs421 = NULL;
  const mxArray *lhs421 = NULL;
  const mxArray *rhs422 = NULL;
  const mxArray *lhs422 = NULL;
  const mxArray *rhs423 = NULL;
  const mxArray *lhs423 = NULL;
  const mxArray *rhs424 = NULL;
  const mxArray *lhs424 = NULL;
  const mxArray *rhs425 = NULL;
  const mxArray *lhs425 = NULL;
  const mxArray *rhs426 = NULL;
  const mxArray *lhs426 = NULL;
  const mxArray *rhs427 = NULL;
  const mxArray *lhs427 = NULL;
  const mxArray *rhs428 = NULL;
  const mxArray *lhs428 = NULL;
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m!ceval_xunormqr"),
                "context", 384);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.lapack.infocheck"),
                "name", 384);
  emlrtAddField(*info, b_emlrt_marshallOut("int32"), "dominantType", 384);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/infocheck.m"),
                "resolved", 384);
  emlrtAddField(*info, c_emlrt_marshallOut(1429530038U), "fileTimeLo", 384);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 384);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 384);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 384);
  emlrtAssign(&rhs384, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs384, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs384), "rhs", 384);
  emlrtAddField(*info, emlrtAliasP(lhs384), "lhs", 384);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m!ceval_xunormqr"),
                "context", 385);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.nan"), "name", 385);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 385);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/nan.m"),
                "resolved", 385);
  emlrtAddField(*info, c_emlrt_marshallOut(1362262032U), "fileTimeLo", 385);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 385);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 385);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 385);
  emlrtAssign(&rhs385, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs385, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs385), "rhs", 385);
  emlrtAddField(*info, emlrtAliasP(lhs385), "lhs", 385);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"),
                "context", 386);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.reflapack.xzunormqr"),
                "name", 386);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 386);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzunormqr.m"),
                "resolved", 386);
  emlrtAddField(*info, c_emlrt_marshallOut(1425369034U), "fileTimeLo", 386);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 386);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 386);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 386);
  emlrtAssign(&rhs386, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs386, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs386), "rhs", 386);
  emlrtAddField(*info, emlrtAliasP(lhs386), "lhs", 386);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzunormqr.m"),
                "context", 387);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                387);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 387);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 387);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 387);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 387);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 387);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 387);
  emlrtAssign(&rhs387, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs387, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs387), "rhs", 387);
  emlrtAddField(*info, emlrtAliasP(lhs387), "lhs", 387);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzunormqr.m"),
                "context", 388);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 388);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 388);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 388);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 388);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 388);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 388);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 388);
  emlrtAssign(&rhs388, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs388, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs388), "rhs", 388);
  emlrtAddField(*info, emlrtAliasP(lhs388), "lhs", 388);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+reflapack/xzunormqr.m"),
                "context", 389);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.conjtimes"), "name",
                389);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 389);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/conjtimes.m"),
                "resolved", 389);
  emlrtAddField(*info, c_emlrt_marshallOut(1360282586U), "fileTimeLo", 389);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 389);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 389);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 389);
  emlrtAssign(&rhs389, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs389, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs389), "rhs", 389);
  emlrtAddField(*info, emlrtAliasP(lhs389), "lhs", 389);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/qrsolve.m!LSQFromQR"),
                "context", 390);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 390);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 390);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 390);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 390);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 390);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 390);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 390);
  emlrtAssign(&rhs390, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs390, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs390), "rhs", 390);
  emlrtAddField(*info, emlrtAliasP(lhs390), "lhs", 390);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/qrsolve.m!LSQFromQR"),
                "context", 391);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.div"), "name", 391);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 391);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/div.m"),
                "resolved", 391);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 391);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 391);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 391);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 391);
  emlrtAssign(&rhs391, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs391, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs391), "rhs", 391);
  emlrtAddField(*info, emlrtAliasP(lhs391), "lhs", 391);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[E]C:/Users/Bayesd/msc-thesis/msc-thesis/current/analysis/portfolio/strategicPort_three_assets.m"),
                "context", 392);
  emlrtAddField(*info, b_emlrt_marshallOut("max"), "name", 392);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 392);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/max.m"),
                "resolved", 392);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907926U), "fileTimeLo", 392);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 392);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 392);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 392);
  emlrtAssign(&rhs392, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs392, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs392), "rhs", 392);
  emlrtAddField(*info, emlrtAliasP(lhs392), "lhs", 392);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_extremum"),
                "context", 393);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.assertValidDim"),
                "name", 393);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 393);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/assertValidDim.m"),
                "resolved", 393);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 393);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 393);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 393);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 393);
  emlrtAssign(&rhs393, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs393, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs393), "rhs", 393);
  emlrtAddField(*info, emlrtAliasP(lhs393), "lhs", 393);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/assertValidDim.m"),
                "context", 394);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 394);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 394);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 394);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 394);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 394);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 394);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 394);
  emlrtAssign(&rhs394, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs394, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs394), "rhs", 394);
  emlrtAddField(*info, emlrtAliasP(lhs394), "lhs", 394);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/assertValidDim.m"),
                "context", 395);
  emlrtAddField(*info, b_emlrt_marshallOut("floor"), "name", 395);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 395);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "resolved", 395);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313828U), "fileTimeLo", 395);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 395);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 395);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 395);
  emlrtAssign(&rhs395, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs395, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs395), "rhs", 395);
  emlrtAddField(*info, emlrtAliasP(lhs395), "lhs", 395);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/assertValidDim.m"),
                "context", 396);
  emlrtAddField(*info, b_emlrt_marshallOut("intmax"), "name", 396);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 396);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmax.m"),
                "resolved", 396);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 396);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 396);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 396);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 396);
  emlrtAssign(&rhs396, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs396, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs396), "rhs", 396);
  emlrtAddField(*info, emlrtAliasP(lhs396), "lhs", 396);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_extremum"),
                "context", 397);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                397);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 397);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 397);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 397);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 397);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 397);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 397);
  emlrtAssign(&rhs397, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs397, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs397), "rhs", 397);
  emlrtAddField(*info, emlrtAliasP(lhs397), "lhs", 397);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_extremum"),
                "context", 398);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.prodsize"), "name",
                398);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 398);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/prodsize.m"),
                "resolved", 398);
  emlrtAddField(*info, c_emlrt_marshallOut(1360282588U), "fileTimeLo", 398);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 398);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 398);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 398);
  emlrtAssign(&rhs398, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs398, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs398), "rhs", 398);
  emlrtAddField(*info, emlrtAliasP(lhs398), "lhs", 398);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_extremum"),
                "context", 399);
  emlrtAddField(*info, b_emlrt_marshallOut("ismatrix"), "name", 399);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 399);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/ismatrix.m"),
                "resolved", 399);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 399);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 399);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 399);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 399);
  emlrtAssign(&rhs399, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs399, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs399), "rhs", 399);
  emlrtAddField(*info, emlrtAliasP(lhs399), "lhs", 399);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_extremum"),
                "context", 400);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 400);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 400);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 400);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 400);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 400);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 400);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 400);
  emlrtAssign(&rhs400, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs400, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs400), "rhs", 400);
  emlrtAddField(*info, emlrtAliasP(lhs400), "lhs", 400);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_extremum_sub"),
                "context", 401);
  emlrtAddField(*info, b_emlrt_marshallOut("isnan"), "name", 401);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 401);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isnan.m"),
                "resolved", 401);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 401);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 401);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 401);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 401);
  emlrtAssign(&rhs401, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs401, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs401), "rhs", 401);
  emlrtAddField(*info, emlrtAliasP(lhs401), "lhs", 401);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_extremum_sub"),
                "context", 402);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 402);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 402);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 402);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 402);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 402);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 402);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 402);
  emlrtAssign(&rhs402, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs402, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs402), "rhs", 402);
  emlrtAddField(*info, emlrtAliasP(lhs402), "lhs", 402);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/minOrMax.m!eml_extremum_sub"),
                "context", 403);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.relop"), "name", 403);
  emlrtAddField(*info, b_emlrt_marshallOut("function_handle"), "dominantType",
                403);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/relop.m"),
                "resolved", 403);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907916U), "fileTimeLo", 403);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 403);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 403);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 403);
  emlrtAssign(&rhs403, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs403, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs403), "rhs", 403);
  emlrtAddField(*info, emlrtAliasP(lhs403), "lhs", 403);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/process_sumprod_inputs.m"),
                "context", 404);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.assertValidDim"),
                "name", 404);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 404);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/assertValidDim.m"),
                "resolved", 404);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 404);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 404);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 404);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 404);
  emlrtAssign(&rhs404, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs404, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs404), "rhs", 404);
  emlrtAddField(*info, emlrtAliasP(lhs404), "lhs", 404);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"),
                "context", 405);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.prodsize"), "name",
                405);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 405);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/prodsize.m"),
                "resolved", 405);
  emlrtAddField(*info, c_emlrt_marshallOut(1360282588U), "fileTimeLo", 405);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 405);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 405);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 405);
  emlrtAssign(&rhs405, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs405, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs405), "rhs", 405);
  emlrtAddField(*info, emlrtAliasP(lhs405), "lhs", 405);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[E]C:/Users/Bayesd/msc-thesis/msc-thesis/current/analysis/portfolio/strategicPort_three_assets.m"),
                "context", 406);
  emlrtAddField(*info, b_emlrt_marshallOut("power"), "name", 406);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 406);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m"),
                "resolved", 406);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313830U), "fileTimeLo", 406);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 406);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 406);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 406);
  emlrtAssign(&rhs406, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs406, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs406), "rhs", 406);
  emlrtAddField(*info, emlrtAliasP(lhs406), "lhs", 406);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m"),
                "context", 407);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 407);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 407);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 407);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 407);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 407);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 407);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 407);
  emlrtAssign(&rhs407, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs407, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs407), "rhs", 407);
  emlrtAddField(*info, emlrtAliasP(lhs407), "lhs", 407);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m!fltpower"),
                "context", 408);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                408);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 408);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 408);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 408);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 408);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 408);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 408);
  emlrtAssign(&rhs408, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs408, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs408), "rhs", 408);
  emlrtAddField(*info, emlrtAliasP(lhs408), "lhs", 408);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m!fltpower"),
                "context", 409);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.applyScalarFunction"),
                "name", 409);
  emlrtAddField(*info, b_emlrt_marshallOut("function_handle"), "dominantType",
                409);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"),
                "resolved", 409);
  emlrtAddField(*info, c_emlrt_marshallOut(1422884302U), "fileTimeLo", 409);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 409);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 409);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 409);
  emlrtAssign(&rhs409, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs409, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs409), "rhs", 409);
  emlrtAddField(*info, emlrtAliasP(lhs409), "lhs", 409);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"),
                "context", 410);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalexpAlloc"),
                "name", 410);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 410);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m"),
                "resolved", 410);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907916U), "fileTimeLo", 410);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 410);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 410);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 410);
  emlrtAssign(&rhs410, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs410, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs410), "rhs", 410);
  emlrtAddField(*info, emlrtAliasP(lhs410), "lhs", 410);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m!equalsize"),
                "context", 411);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 411);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 411);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 411);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 411);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 411);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 411);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 411);
  emlrtAssign(&rhs411, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs411, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs411), "rhs", 411);
  emlrtAddField(*info, emlrtAliasP(lhs411), "lhs", 411);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power"),
                "context", 412);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                412);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 412);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 412);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 412);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 412);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 412);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 412);
  emlrtAssign(&rhs412, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs412, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs412), "rhs", 412);
  emlrtAddField(*info, emlrtAliasP(lhs412), "lhs", 412);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m!fltpower_domain_error"),
                "context", 413);
  emlrtAddField(*info, b_emlrt_marshallOut("isnan"), "name", 413);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 413);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isnan.m"),
                "resolved", 413);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 413);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 413);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 413);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 413);
  emlrtAssign(&rhs413, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs413, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs413), "rhs", 413);
  emlrtAddField(*info, emlrtAliasP(lhs413), "lhs", 413);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m!fltpower_domain_error"),
                "context", 414);
  emlrtAddField(*info, b_emlrt_marshallOut("floor"), "name", 414);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 414);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "resolved", 414);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313828U), "fileTimeLo", 414);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 414);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 414);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 414);
  emlrtAssign(&rhs414, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs414, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs414), "rhs", 414);
  emlrtAddField(*info, emlrtAliasP(lhs414), "lhs", 414);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m!fltpower"),
                "context", 415);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.error"), "name", 415);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 415);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/error.m"),
                "resolved", 415);
  emlrtAddField(*info, c_emlrt_marshallOut(1435845494U), "fileTimeLo", 415);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 415);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 415);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 415);
  emlrtAssign(&rhs415, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs415, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs415), "rhs", 415);
  emlrtAddField(*info, emlrtAliasP(lhs415), "lhs", 415);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[E]C:/Users/Bayesd/msc-thesis/msc-thesis/current/analysis/portfolio/strategicPort_three_assets.m"),
                "context", 416);
  emlrtAddField(*info, b_emlrt_marshallOut("mean"), "name", 416);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 416);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/mean.m"),
                "resolved", 416);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907926U), "fileTimeLo", 416);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 416);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 416);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 416);
  emlrtAssign(&rhs416, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs416, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs416), "rhs", 416);
  emlrtAddField(*info, emlrtAliasP(lhs416), "lhs", 416);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/mean.m"),
                "context", 417);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 417);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 417);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 417);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 417);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 417);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 417);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 417);
  emlrtAssign(&rhs417, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs417, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs417), "rhs", 417);
  emlrtAddField(*info, emlrtAliasP(lhs417), "lhs", 417);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/mean.m"),
                "context", 418);
  emlrtAddField(*info, b_emlrt_marshallOut("process_sumprod_inputs"), "name",
                418);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 418);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/process_sumprod_inputs.m"),
                "resolved", 418);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907926U), "fileTimeLo", 418);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 418);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 418);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 418);
  emlrtAssign(&rhs418, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs418, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs418), "rhs", 418);
  emlrtAddField(*info, emlrtAliasP(lhs418), "lhs", 418);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/mean.m"),
                "context", 419);
  emlrtAddField(*info, b_emlrt_marshallOut("combine_vector_elements"), "name",
                419);
  emlrtAddField(*info, b_emlrt_marshallOut("function_handle"), "dominantType",
                419);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"),
                "resolved", 419);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313826U), "fileTimeLo", 419);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 419);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 419);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 419);
  emlrtAssign(&rhs419, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs419, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs419), "rhs", 419);
  emlrtAddField(*info, emlrtAliasP(lhs419), "lhs", 419);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"),
                "context", 420);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.useParforConst"),
                "name", 420);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 420);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/useParforConst.m"),
                "resolved", 420);
  emlrtAddField(*info, c_emlrt_marshallOut(1420474498U), "fileTimeLo", 420);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 420);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 420);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 420);
  emlrtAssign(&rhs420, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs420, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs420), "rhs", 420);
  emlrtAddField(*info, emlrtAliasP(lhs420), "lhs", 420);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/mean.m"),
                "context", 421);
  emlrtAddField(*info, b_emlrt_marshallOut("rdivide"), "name", 421);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 421);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/rdivide.m"),
                "resolved", 421);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907940U), "fileTimeLo", 421);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 421);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 421);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 421);
  emlrtAssign(&rhs421, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs421, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs421), "rhs", 421);
  emlrtAddField(*info, emlrtAliasP(lhs421), "lhs", 421);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[E]C:/Users/Bayesd/msc-thesis/msc-thesis/current/analysis/portfolio/strategicPort_three_assets.m"),
                "context", 422);
  emlrtAddField(*info, b_emlrt_marshallOut("fprintf"), "name", 422);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 422);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/iofun/fprintf.m"),
                "resolved", 422);
  emlrtAddField(*info, c_emlrt_marshallOut(1434455658U), "fileTimeLo", 422);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 422);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 422);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 422);
  emlrtAssign(&rhs422, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs422, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs422), "rhs", 422);
  emlrtAddField(*info, emlrtAliasP(lhs422), "lhs", 422);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/iofun/fprintf.m"),
                "context", 423);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.narginchk"), "name",
                423);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 423);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/narginchk.m"),
                "resolved", 423);
  emlrtAddField(*info, c_emlrt_marshallOut(1363714558U), "fileTimeLo", 423);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 423);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 423);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 423);
  emlrtAssign(&rhs423, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs423, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs423), "rhs", 423);
  emlrtAddField(*info, emlrtAliasP(lhs423), "lhs", 423);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/iofun/fprintf.m"),
                "context", 424);
  emlrtAddField(*info, b_emlrt_marshallOut("fprintf"), "name", 424);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 424);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/iofun/fprintf.m"),
                "resolved", 424);
  emlrtAddField(*info, c_emlrt_marshallOut(1434455658U), "fileTimeLo", 424);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 424);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 424);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 424);
  emlrtAssign(&rhs424, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs424, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs424), "rhs", 424);
  emlrtAddField(*info, emlrtAliasP(lhs424), "lhs", 424);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/iofun/fprintf.m"),
                "context", 425);
  emlrtAddField(*info, b_emlrt_marshallOut("fidCheck"), "name", 425);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 425);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/iofun/private/fidCheck.m"),
                "resolved", 425);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907936U), "fileTimeLo", 425);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 425);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 425);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 425);
  emlrtAssign(&rhs425, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs425, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs425), "rhs", 425);
  emlrtAddField(*info, emlrtAliasP(lhs425), "lhs", 425);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/iofun/fprintf.m!get_arg_info_struct"),
                "context", 426);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isIntegerClass"),
                "name", 426);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 426);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isIntegerClass.m"),
                "resolved", 426);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 426);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 426);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 426);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 426);
  emlrtAssign(&rhs426, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs426, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs426), "rhs", 426);
  emlrtAddField(*info, emlrtAliasP(lhs426), "lhs", 426);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/iofun/fprintf.m"),
                "context", 427);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.mlfmt2cfmt"), "name",
                427);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 427);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/coder/coder/+coder/+internal/mlfmt2cfmt.p"),
                "resolved", 427);
  emlrtAddField(*info, c_emlrt_marshallOut(1438286000U), "fileTimeLo", 427);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 427);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 427);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 427);
  emlrtAssign(&rhs427, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs427, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs427), "rhs", 427);
  emlrtAddField(*info, emlrtAliasP(lhs427), "lhs", 427);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/iofun/fprintf.m"),
                "context", 428);
  emlrtAddField(*info, b_emlrt_marshallOut("isequal"), "name", 428);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 428);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isequal.m"),
                "resolved", 428);
  emlrtAddField(*info, c_emlrt_marshallOut(1286818758U), "fileTimeLo", 428);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 428);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 428);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 428);
  emlrtAssign(&rhs428, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs428, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs428), "rhs", 428);
  emlrtAddField(*info, emlrtAliasP(lhs428), "lhs", 428);
  emlrtDestroyArray(&rhs384);
  emlrtDestroyArray(&lhs384);
  emlrtDestroyArray(&rhs385);
  emlrtDestroyArray(&lhs385);
  emlrtDestroyArray(&rhs386);
  emlrtDestroyArray(&lhs386);
  emlrtDestroyArray(&rhs387);
  emlrtDestroyArray(&lhs387);
  emlrtDestroyArray(&rhs388);
  emlrtDestroyArray(&lhs388);
  emlrtDestroyArray(&rhs389);
  emlrtDestroyArray(&lhs389);
  emlrtDestroyArray(&rhs390);
  emlrtDestroyArray(&lhs390);
  emlrtDestroyArray(&rhs391);
  emlrtDestroyArray(&lhs391);
  emlrtDestroyArray(&rhs392);
  emlrtDestroyArray(&lhs392);
  emlrtDestroyArray(&rhs393);
  emlrtDestroyArray(&lhs393);
  emlrtDestroyArray(&rhs394);
  emlrtDestroyArray(&lhs394);
  emlrtDestroyArray(&rhs395);
  emlrtDestroyArray(&lhs395);
  emlrtDestroyArray(&rhs396);
  emlrtDestroyArray(&lhs396);
  emlrtDestroyArray(&rhs397);
  emlrtDestroyArray(&lhs397);
  emlrtDestroyArray(&rhs398);
  emlrtDestroyArray(&lhs398);
  emlrtDestroyArray(&rhs399);
  emlrtDestroyArray(&lhs399);
  emlrtDestroyArray(&rhs400);
  emlrtDestroyArray(&lhs400);
  emlrtDestroyArray(&rhs401);
  emlrtDestroyArray(&lhs401);
  emlrtDestroyArray(&rhs402);
  emlrtDestroyArray(&lhs402);
  emlrtDestroyArray(&rhs403);
  emlrtDestroyArray(&lhs403);
  emlrtDestroyArray(&rhs404);
  emlrtDestroyArray(&lhs404);
  emlrtDestroyArray(&rhs405);
  emlrtDestroyArray(&lhs405);
  emlrtDestroyArray(&rhs406);
  emlrtDestroyArray(&lhs406);
  emlrtDestroyArray(&rhs407);
  emlrtDestroyArray(&lhs407);
  emlrtDestroyArray(&rhs408);
  emlrtDestroyArray(&lhs408);
  emlrtDestroyArray(&rhs409);
  emlrtDestroyArray(&lhs409);
  emlrtDestroyArray(&rhs410);
  emlrtDestroyArray(&lhs410);
  emlrtDestroyArray(&rhs411);
  emlrtDestroyArray(&lhs411);
  emlrtDestroyArray(&rhs412);
  emlrtDestroyArray(&lhs412);
  emlrtDestroyArray(&rhs413);
  emlrtDestroyArray(&lhs413);
  emlrtDestroyArray(&rhs414);
  emlrtDestroyArray(&lhs414);
  emlrtDestroyArray(&rhs415);
  emlrtDestroyArray(&lhs415);
  emlrtDestroyArray(&rhs416);
  emlrtDestroyArray(&lhs416);
  emlrtDestroyArray(&rhs417);
  emlrtDestroyArray(&lhs417);
  emlrtDestroyArray(&rhs418);
  emlrtDestroyArray(&lhs418);
  emlrtDestroyArray(&rhs419);
  emlrtDestroyArray(&lhs419);
  emlrtDestroyArray(&rhs420);
  emlrtDestroyArray(&lhs420);
  emlrtDestroyArray(&rhs421);
  emlrtDestroyArray(&lhs421);
  emlrtDestroyArray(&rhs422);
  emlrtDestroyArray(&lhs422);
  emlrtDestroyArray(&rhs423);
  emlrtDestroyArray(&lhs423);
  emlrtDestroyArray(&rhs424);
  emlrtDestroyArray(&lhs424);
  emlrtDestroyArray(&rhs425);
  emlrtDestroyArray(&lhs425);
  emlrtDestroyArray(&rhs426);
  emlrtDestroyArray(&lhs426);
  emlrtDestroyArray(&rhs427);
  emlrtDestroyArray(&lhs427);
  emlrtDestroyArray(&rhs428);
  emlrtDestroyArray(&lhs428);
}

static void info_helper(const mxArray **info)
{
  const mxArray *rhs0 = NULL;
  const mxArray *lhs0 = NULL;
  const mxArray *rhs1 = NULL;
  const mxArray *lhs1 = NULL;
  const mxArray *rhs2 = NULL;
  const mxArray *lhs2 = NULL;
  const mxArray *rhs3 = NULL;
  const mxArray *lhs3 = NULL;
  const mxArray *rhs4 = NULL;
  const mxArray *lhs4 = NULL;
  const mxArray *rhs5 = NULL;
  const mxArray *lhs5 = NULL;
  const mxArray *rhs6 = NULL;
  const mxArray *lhs6 = NULL;
  const mxArray *rhs7 = NULL;
  const mxArray *lhs7 = NULL;
  const mxArray *rhs8 = NULL;
  const mxArray *lhs8 = NULL;
  const mxArray *rhs9 = NULL;
  const mxArray *lhs9 = NULL;
  const mxArray *rhs10 = NULL;
  const mxArray *lhs10 = NULL;
  const mxArray *rhs11 = NULL;
  const mxArray *lhs11 = NULL;
  const mxArray *rhs12 = NULL;
  const mxArray *lhs12 = NULL;
  const mxArray *rhs13 = NULL;
  const mxArray *lhs13 = NULL;
  const mxArray *rhs14 = NULL;
  const mxArray *lhs14 = NULL;
  const mxArray *rhs15 = NULL;
  const mxArray *lhs15 = NULL;
  const mxArray *rhs16 = NULL;
  const mxArray *lhs16 = NULL;
  const mxArray *rhs17 = NULL;
  const mxArray *lhs17 = NULL;
  const mxArray *rhs18 = NULL;
  const mxArray *lhs18 = NULL;
  const mxArray *rhs19 = NULL;
  const mxArray *lhs19 = NULL;
  const mxArray *rhs20 = NULL;
  const mxArray *lhs20 = NULL;
  const mxArray *rhs21 = NULL;
  const mxArray *lhs21 = NULL;
  const mxArray *rhs22 = NULL;
  const mxArray *lhs22 = NULL;
  const mxArray *rhs23 = NULL;
  const mxArray *lhs23 = NULL;
  const mxArray *rhs24 = NULL;
  const mxArray *lhs24 = NULL;
  const mxArray *rhs25 = NULL;
  const mxArray *lhs25 = NULL;
  const mxArray *rhs26 = NULL;
  const mxArray *lhs26 = NULL;
  const mxArray *rhs27 = NULL;
  const mxArray *lhs27 = NULL;
  const mxArray *rhs28 = NULL;
  const mxArray *lhs28 = NULL;
  const mxArray *rhs29 = NULL;
  const mxArray *lhs29 = NULL;
  const mxArray *rhs30 = NULL;
  const mxArray *lhs30 = NULL;
  const mxArray *rhs31 = NULL;
  const mxArray *lhs31 = NULL;
  const mxArray *rhs32 = NULL;
  const mxArray *lhs32 = NULL;
  const mxArray *rhs33 = NULL;
  const mxArray *lhs33 = NULL;
  const mxArray *rhs34 = NULL;
  const mxArray *lhs34 = NULL;
  const mxArray *rhs35 = NULL;
  const mxArray *lhs35 = NULL;
  const mxArray *rhs36 = NULL;
  const mxArray *lhs36 = NULL;
  const mxArray *rhs37 = NULL;
  const mxArray *lhs37 = NULL;
  const mxArray *rhs38 = NULL;
  const mxArray *lhs38 = NULL;
  const mxArray *rhs39 = NULL;
  const mxArray *lhs39 = NULL;
  const mxArray *rhs40 = NULL;
  const mxArray *lhs40 = NULL;
  const mxArray *rhs41 = NULL;
  const mxArray *lhs41 = NULL;
  const mxArray *rhs42 = NULL;
  const mxArray *lhs42 = NULL;
  const mxArray *rhs43 = NULL;
  const mxArray *lhs43 = NULL;
  const mxArray *rhs44 = NULL;
  const mxArray *lhs44 = NULL;
  const mxArray *rhs45 = NULL;
  const mxArray *lhs45 = NULL;
  const mxArray *rhs46 = NULL;
  const mxArray *lhs46 = NULL;
  const mxArray *rhs47 = NULL;
  const mxArray *lhs47 = NULL;
  const mxArray *rhs48 = NULL;
  const mxArray *lhs48 = NULL;
  const mxArray *rhs49 = NULL;
  const mxArray *lhs49 = NULL;
  const mxArray *rhs50 = NULL;
  const mxArray *lhs50 = NULL;
  const mxArray *rhs51 = NULL;
  const mxArray *lhs51 = NULL;
  const mxArray *rhs52 = NULL;
  const mxArray *lhs52 = NULL;
  const mxArray *rhs53 = NULL;
  const mxArray *lhs53 = NULL;
  const mxArray *rhs54 = NULL;
  const mxArray *lhs54 = NULL;
  const mxArray *rhs55 = NULL;
  const mxArray *lhs55 = NULL;
  const mxArray *rhs56 = NULL;
  const mxArray *lhs56 = NULL;
  const mxArray *rhs57 = NULL;
  const mxArray *lhs57 = NULL;
  const mxArray *rhs58 = NULL;
  const mxArray *lhs58 = NULL;
  const mxArray *rhs59 = NULL;
  const mxArray *lhs59 = NULL;
  const mxArray *rhs60 = NULL;
  const mxArray *lhs60 = NULL;
  const mxArray *rhs61 = NULL;
  const mxArray *lhs61 = NULL;
  const mxArray *rhs62 = NULL;
  const mxArray *lhs62 = NULL;
  const mxArray *rhs63 = NULL;
  const mxArray *lhs63 = NULL;
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[E]C:/Users/Bayesd/msc-thesis/msc-thesis/current/analysis/portfolio/strategicPort_three_assets.m"),
                "context", 0);
  emlrtAddField(*info, b_emlrt_marshallOut("mrdivide"), "name", 0);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mrdivide.p"),
                "resolved", 0);
  emlrtAddField(*info, c_emlrt_marshallOut(1438285820U), "fileTimeLo", 0);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 0);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907940U), "mFileTimeLo", 0);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 0);
  emlrtAssign(&rhs0, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs0, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs0), "rhs", 0);
  emlrtAddField(*info, emlrtAliasP(lhs0), "lhs", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/mrdivide.p"),
                "context", 1);
  emlrtAddField(*info, b_emlrt_marshallOut("rdivide"), "name", 1);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/rdivide.m"),
                "resolved", 1);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907940U), "fileTimeLo", 1);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 1);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 1);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 1);
  emlrtAssign(&rhs1, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs1, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs1), "rhs", 1);
  emlrtAddField(*info, emlrtAliasP(lhs1), "lhs", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/rdivide.m"),
                "context", 2);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 2);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 2);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 2);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 2);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 2);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 2);
  emlrtAssign(&rhs2, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs2, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs2), "rhs", 2);
  emlrtAddField(*info, emlrtAliasP(lhs2), "lhs", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/rdivide.m"),
                "context", 3);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalexpCompatible"),
                "name", 3);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalexpCompatible.m"),
                "resolved", 3);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907916U), "fileTimeLo", 3);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 3);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 3);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 3);
  emlrtAssign(&rhs3, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs3, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs3), "rhs", 3);
  emlrtAddField(*info, emlrtAliasP(lhs3), "lhs", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/rdivide.m"),
                "context", 4);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.div"), "name", 4);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/div.m"),
                "resolved", 4);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 4);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 4);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 4);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 4);
  emlrtAssign(&rhs4, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs4, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs4), "rhs", 4);
  emlrtAddField(*info, emlrtAliasP(lhs4), "lhs", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[E]C:/Users/Bayesd/msc-thesis/msc-thesis/current/analysis/portfolio/strategicPort_three_assets.m"),
                "context", 5);
  emlrtAddField(*info, b_emlrt_marshallOut("exp"), "name", 5);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/exp.m"),
                "resolved", 5);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313828U), "fileTimeLo", 5);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 5);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 5);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 5);
  emlrtAssign(&rhs5, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs5, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs5), "rhs", 5);
  emlrtAddField(*info, emlrtAliasP(lhs5), "lhs", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/exp.m"),
                "context", 6);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalar.exp"), "name",
                6);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/exp.m"),
                "resolved", 6);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 6);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 6);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 6);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 6);
  emlrtAssign(&rhs6, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs6, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs6), "rhs", 6);
  emlrtAddField(*info, emlrtAliasP(lhs6), "lhs", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/exp.m"),
                "context", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "coder.internal.applyScalarFunctionInPlace"), "name", 7);
  emlrtAddField(*info, b_emlrt_marshallOut("function_handle"), "dominantType", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "resolved", 7);
  emlrtAddField(*info, c_emlrt_marshallOut(1422884200U), "fileTimeLo", 7);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 7);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 7);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 7);
  emlrtAssign(&rhs7, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs7, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs7), "rhs", 7);
  emlrtAddField(*info, emlrtAliasP(lhs7), "lhs", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "context", 8);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.useParforConst"),
                "name", 8);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/useParforConst.m"),
                "resolved", 8);
  emlrtAddField(*info, c_emlrt_marshallOut(1420474498U), "fileTimeLo", 8);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 8);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 8);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 8);
  emlrtAssign(&rhs8, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs8, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs8), "rhs", 8);
  emlrtAddField(*info, emlrtAliasP(lhs8), "lhs", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/useParforConst.m"),
                "context", 9);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.useParfor"), "name",
                9);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/useParfor.m"),
                "resolved", 9);
  emlrtAddField(*info, c_emlrt_marshallOut(1422896914U), "fileTimeLo", 9);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 9);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 9);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 9);
  emlrtAssign(&rhs9, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs9, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs9), "rhs", 9);
  emlrtAddField(*info, emlrtAliasP(lhs9), "lhs", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "context", 10);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 10);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 10);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 10);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 10);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 10);
  emlrtAssign(&rhs10, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs10, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs10), "rhs", 10);
  emlrtAddField(*info, emlrtAliasP(lhs10), "lhs", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_"
    "helper"), "context", 11);
  emlrtAddField(*info, b_emlrt_marshallOut("isfi"), "name", 11);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isfi.m"),
                "resolved", 11);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907924U), "fileTimeLo", 11);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 11);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 11);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 11);
  emlrtAssign(&rhs11, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs11, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs11), "rhs", 11);
  emlrtAddField(*info, emlrtAliasP(lhs11), "lhs", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isfi.m"),
                "context", 12);
  emlrtAddField(*info, b_emlrt_marshallOut("isnumerictype"), "name", 12);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isnumerictype.m"),
                "resolved", 12);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907924U), "fileTimeLo", 12);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 12);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 12);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 12);
  emlrtAssign(&rhs12, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs12, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs12), "rhs", 12);
  emlrtAddField(*info, emlrtAliasP(lhs12), "lhs", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_"
    "helper"), "context", 13);
  emlrtAddField(*info, b_emlrt_marshallOut("intmax"), "name", 13);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 13);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmax.m"),
                "resolved", 13);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 13);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 13);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 13);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 13);
  emlrtAssign(&rhs13, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs13, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs13), "rhs", 13);
  emlrtAddField(*info, emlrtAliasP(lhs13), "lhs", 13);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_"
    "helper"), "context", 14);
  emlrtAddField(*info, b_emlrt_marshallOut("intmin"), "name", 14);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/intmin.m"),
                "resolved", 14);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 14);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 14);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 14);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 14);
  emlrtAssign(&rhs14, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs14, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs14), "rhs", 14);
  emlrtAddField(*info, emlrtAliasP(lhs14), "lhs", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "context", 15);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalar.exp"), "name",
                15);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/exp.m"),
                "resolved", 15);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 15);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 15);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 15);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 15);
  emlrtAssign(&rhs15, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs15, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs15), "rhs", 15);
  emlrtAddField(*info, emlrtAliasP(lhs15), "lhs", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[E]C:/Users/Bayesd/msc-thesis/msc-thesis/current/analysis/portfolio/strategicPort_three_assets.m"),
                "context", 16);
  emlrtAddField(*info, b_emlrt_marshallOut("abs"), "name", 16);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "resolved", 16);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313826U), "fileTimeLo", 16);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 16);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 16);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 16);
  emlrtAssign(&rhs16, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs16, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs16), "rhs", 16);
  emlrtAddField(*info, emlrtAliasP(lhs16), "lhs", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "context", 17);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 17);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 17);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 17);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 17);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 17);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 17);
  emlrtAssign(&rhs17, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs17, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs17), "rhs", 17);
  emlrtAddField(*info, emlrtAliasP(lhs17), "lhs", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "context", 18);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalar.abs"), "name",
                18);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 18);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/abs.m"),
                "resolved", 18);
  emlrtAddField(*info, c_emlrt_marshallOut(1424693734U), "fileTimeLo", 18);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 18);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 18);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 18);
  emlrtAssign(&rhs18, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs18, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs18), "rhs", 18);
  emlrtAddField(*info, emlrtAliasP(lhs18), "lhs", 18);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/abs.m"),
                "context", 19);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.applyScalarFunction"),
                "name", 19);
  emlrtAddField(*info, b_emlrt_marshallOut("function_handle"), "dominantType",
                19);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"),
                "resolved", 19);
  emlrtAddField(*info, c_emlrt_marshallOut(1422884302U), "fileTimeLo", 19);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 19);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 19);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 19);
  emlrtAssign(&rhs19, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs19, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs19), "rhs", 19);
  emlrtAddField(*info, emlrtAliasP(lhs19), "lhs", 19);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"),
                "context", 20);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.useParforConst"),
                "name", 20);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/useParforConst.m"),
                "resolved", 20);
  emlrtAddField(*info, c_emlrt_marshallOut(1420474498U), "fileTimeLo", 20);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 20);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 20);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 20);
  emlrtAssign(&rhs20, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs20, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs20), "rhs", 20);
  emlrtAddField(*info, emlrtAliasP(lhs20), "lhs", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"),
                "context", 21);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 21);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 21);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 21);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 21);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 21);
  emlrtAssign(&rhs21, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs21, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs21), "rhs", 21);
  emlrtAddField(*info, emlrtAliasP(lhs21), "lhs", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"),
                "context", 22);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalar.abs"), "name",
                22);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 22);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/abs.m"),
                "resolved", 22);
  emlrtAddField(*info, c_emlrt_marshallOut(1424693734U), "fileTimeLo", 22);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 22);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 22);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 22);
  emlrtAssign(&rhs22, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs22, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs22), "rhs", 22);
  emlrtAddField(*info, emlrtAliasP(lhs22), "lhs", 22);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[E]C:/Users/Bayesd/msc-thesis/msc-thesis/current/analysis/portfolio/strategicPort_three_assets.m"),
                "context", 23);
  emlrtAddField(*info, b_emlrt_marshallOut("sum"), "name", 23);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/sum.m"),
                "resolved", 23);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907926U), "fileTimeLo", 23);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 23);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 23);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 23);
  emlrtAssign(&rhs23, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs23, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs23), "rhs", 23);
  emlrtAddField(*info, emlrtAliasP(lhs23), "lhs", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/sum.m"),
                "context", 24);
  emlrtAddField(*info, b_emlrt_marshallOut("sumprod"), "name", 24);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 24);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/sumprod.m"),
                "resolved", 24);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907926U), "fileTimeLo", 24);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 24);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 24);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 24);
  emlrtAssign(&rhs24, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs24, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs24), "rhs", 24);
  emlrtAddField(*info, emlrtAliasP(lhs24), "lhs", 24);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/sumprod.m"),
                "context", 25);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 25);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 25);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 25);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 25);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 25);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 25);
  emlrtAssign(&rhs25, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs25, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs25), "rhs", 25);
  emlrtAddField(*info, emlrtAliasP(lhs25), "lhs", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/sumprod.m"),
                "context", 26);
  emlrtAddField(*info, b_emlrt_marshallOut("process_sumprod_inputs"), "name", 26);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/process_sumprod_inputs.m"),
                "resolved", 26);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907926U), "fileTimeLo", 26);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 26);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 26);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 26);
  emlrtAssign(&rhs26, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs26, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs26), "rhs", 26);
  emlrtAddField(*info, emlrtAliasP(lhs26), "lhs", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/process_sumprod_inputs.m"),
                "context", 27);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.narginchk"), "name",
                27);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/narginchk.m"),
                "resolved", 27);
  emlrtAddField(*info, c_emlrt_marshallOut(1363714558U), "fileTimeLo", 27);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 27);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 27);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 27);
  emlrtAssign(&rhs27, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs27, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs27), "rhs", 27);
  emlrtAddField(*info, emlrtAliasP(lhs27), "lhs", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/narginchk.m"),
                "context", 28);
  emlrtAddField(*info, b_emlrt_marshallOut("floor"), "name", 28);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 28);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "resolved", 28);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313828U), "fileTimeLo", 28);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 28);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 28);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 28);
  emlrtAssign(&rhs28, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs28, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs28), "rhs", 28);
  emlrtAddField(*info, emlrtAliasP(lhs28), "lhs", 28);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "context", 29);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 29);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 29);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 29);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 29);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 29);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 29);
  emlrtAssign(&rhs29, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs29, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs29), "rhs", 29);
  emlrtAddField(*info, emlrtAliasP(lhs29), "lhs", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "context", 30);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalar.floor"),
                "name", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/floor.m"),
                "resolved", 30);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 30);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 30);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 30);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 30);
  emlrtAssign(&rhs30, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs30, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs30), "rhs", 30);
  emlrtAddField(*info, emlrtAliasP(lhs30), "lhs", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/floor.m"),
                "context", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "coder.internal.applyScalarFunctionInPlace"), "name", 31);
  emlrtAddField(*info, b_emlrt_marshallOut("function_handle"), "dominantType",
                31);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "resolved", 31);
  emlrtAddField(*info, c_emlrt_marshallOut(1422884200U), "fileTimeLo", 31);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 31);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 31);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 31);
  emlrtAssign(&rhs31, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs31, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs31), "rhs", 31);
  emlrtAddField(*info, emlrtAliasP(lhs31), "lhs", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"),
                "context", 32);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalar.floor"),
                "name", 32);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 32);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+scalar/floor.m"),
                "resolved", 32);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 32);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 32);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 32);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 32);
  emlrtAssign(&rhs32, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs32, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs32), "rhs", 32);
  emlrtAddField(*info, emlrtAliasP(lhs32), "lhs", 32);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/process_sumprod_inputs.m"),
                "context", 33);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.constNonSingletonDim"),
                "name", 33);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/constNonSingletonDim.m"),
                "resolved", 33);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907914U), "fileTimeLo", 33);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 33);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 33);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 33);
  emlrtAssign(&rhs33, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs33, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs33), "rhs", 33);
  emlrtAddField(*info, emlrtAliasP(lhs33), "lhs", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/process_sumprod_inputs.m"),
                "context", 34);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                34);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 34);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 34);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 34);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 34);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 34);
  emlrtAssign(&rhs34, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs34, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs34), "rhs", 34);
  emlrtAddField(*info, emlrtAliasP(lhs34), "lhs", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "context", 35);
  emlrtAddField(*info, b_emlrt_marshallOut("isnumerictype"), "name", 35);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isnumerictype.m"),
                "resolved", 35);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907924U), "fileTimeLo", 35);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 35);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 35);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 35);
  emlrtAssign(&rhs35, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs35, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs35), "rhs", 35);
  emlrtAddField(*info, emlrtAliasP(lhs35), "lhs", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "context", 36);
  emlrtAddField(*info, b_emlrt_marshallOut("isfimath"), "name", 36);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isfimath.m"),
                "resolved", 36);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907924U), "fileTimeLo", 36);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 36);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 36);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 36);
  emlrtAssign(&rhs36, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs36, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs36), "rhs", 36);
  emlrtAddField(*info, emlrtAliasP(lhs36), "lhs", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m!firstfi"),
                "context", 37);
  emlrtAddField(*info, b_emlrt_marshallOut("isfi"), "name", 37);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/fixedpoint/isfi.m"),
                "resolved", 37);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907924U), "fileTimeLo", 37);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 37);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 37);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 37);
  emlrtAssign(&rhs37, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs37, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs37), "rhs", 37);
  emlrtAddField(*info, emlrtAliasP(lhs37), "lhs", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/sumprod.m"),
                "context", 38);
  emlrtAddField(*info, b_emlrt_marshallOut("isequal"), "name", 38);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isequal.m"),
                "resolved", 38);
  emlrtAddField(*info, c_emlrt_marshallOut(1286818758U), "fileTimeLo", 38);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 38);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 38);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 38);
  emlrtAssign(&rhs38, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs38, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs38), "rhs", 38);
  emlrtAddField(*info, emlrtAliasP(lhs38), "lhs", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/isequal.m"),
                "context", 39);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_isequal_core"), "name", 39);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/private/eml_isequal_core.m"),
                "resolved", 39);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907932U), "fileTimeLo", 39);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 39);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 39);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 39);
  emlrtAssign(&rhs39, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs39, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs39), "rhs", 39);
  emlrtAddField(*info, emlrtAliasP(lhs39), "lhs", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elmat/private/eml_isequal_core.m"),
                "context", 40);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.narginchk"), "name",
                40);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/narginchk.m"),
                "resolved", 40);
  emlrtAddField(*info, c_emlrt_marshallOut(1363714558U), "fileTimeLo", 40);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 40);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 40);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 40);
  emlrtAssign(&rhs40, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs40, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs40), "rhs", 40);
  emlrtAddField(*info, emlrtAliasP(lhs40), "lhs", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/sumprod.m"),
                "context", 41);
  emlrtAddField(*info, b_emlrt_marshallOut("combine_vector_elements"), "name",
                41);
  emlrtAddField(*info, b_emlrt_marshallOut("function_handle"), "dominantType",
                41);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"),
                "resolved", 41);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313826U), "fileTimeLo", 41);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 41);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 41);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 41);
  emlrtAssign(&rhs41, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs41, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs41), "rhs", 41);
  emlrtAddField(*info, emlrtAliasP(lhs41), "lhs", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXPE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"),
                "context", 42);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 42);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 42);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 42);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 42);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 42);
  emlrtAssign(&rhs42, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs42, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs42), "rhs", 42);
  emlrtAddField(*info, emlrtAliasP(lhs42), "lhs", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[E]C:/Users/Bayesd/msc-thesis/msc-thesis/current/analysis/portfolio/strategicPort_three_assets.m"),
                "context", 43);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_mtimes_helper"), "name", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "resolved", 43);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907938U), "fileTimeLo", 43);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 43);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 43);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 43);
  emlrtAssign(&rhs43, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs43, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs43), "rhs", 43);
  emlrtAddField(*info, emlrtAliasP(lhs43), "lhs", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m!common_checks"),
                "context", 44);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 44);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 44);
  emlrtAddField(*info, c_emlrt_marshallOut(1395931856U), "fileTimeLo", 44);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 44);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 44);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 44);
  emlrtAssign(&rhs44, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs44, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs44), "rhs", 44);
  emlrtAddField(*info, emlrtAliasP(lhs44), "lhs", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "context", 45);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                45);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 45);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 45);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 45);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 45);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 45);
  emlrtAssign(&rhs45, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs45, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs45), "rhs", 45);
  emlrtAddField(*info, emlrtAliasP(lhs45), "lhs", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m!firstfi"),
                "context", 46);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 46);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 46);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 46);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 46);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 46);
  emlrtAssign(&rhs46, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs46, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs46), "rhs", 46);
  emlrtAddField(*info, emlrtAliasP(lhs46), "lhs", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "context", 47);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.xgemm"), "name",
                47);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemm.m"),
                "resolved", 47);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 47);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 47);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 47);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 47);
  emlrtAssign(&rhs47, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs47, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs47), "rhs", 47);
  emlrtAddField(*info, emlrtAliasP(lhs47), "lhs", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemm.m"),
                "context", 48);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.inline"), "name",
                48);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/inline.m"),
                "resolved", 48);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 48);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 48);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 48);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 48);
  emlrtAssign(&rhs48, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs48, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs48), "rhs", 48);
  emlrtAddField(*info, emlrtAliasP(lhs48), "lhs", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemm.m"),
                "context", 49);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.use_refblas"),
                "name", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/use_refblas.m"),
                "resolved", 49);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 49);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 49);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 49);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 49);
  emlrtAssign(&rhs49, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs49, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs49), "rhs", 49);
  emlrtAddField(*info, emlrtAliasP(lhs49), "lhs", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemm.m!below_threshold"),
                "context", 50);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.threshold"),
                "name", 50);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/threshold.m"),
                "resolved", 50);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 50);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 50);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 50);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 50);
  emlrtAssign(&rhs50, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs50, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs50), "rhs", 50);
  emlrtAddField(*info, emlrtAliasP(lhs50), "lhs", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemm.m"),
                "context", 51);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                51);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 51);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 51);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 51);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 51);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 51);
  emlrtAssign(&rhs51, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs51, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs51), "rhs", 51);
  emlrtAddField(*info, emlrtAliasP(lhs51), "lhs", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemm.m"),
                "context", 52);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.refblas.xgemm"),
                "name", 52);
  emlrtAddField(*info, b_emlrt_marshallOut("char"), "dominantType", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgemm.m"),
                "resolved", 52);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907912U), "fileTimeLo", 52);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 52);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 52);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 52);
  emlrtAssign(&rhs52, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs52, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs52), "rhs", 52);
  emlrtAddField(*info, emlrtAliasP(lhs52), "lhs", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgemm.m"),
                "context", 53);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexMinus"), "name",
                53);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexMinus.m"),
                "resolved", 53);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 53);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 53);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 53);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 53);
  emlrtAssign(&rhs53, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs53, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs53), "rhs", 53);
  emlrtAddField(*info, emlrtAliasP(lhs53), "lhs", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgemm.m"),
                "context", 54);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                54);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 54);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 54);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 54);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 54);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 54);
  emlrtAssign(&rhs54, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs54, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs54), "rhs", 54);
  emlrtAddField(*info, emlrtAliasP(lhs54), "lhs", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgemm.m"),
                "context", 55);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexTimes"), "name",
                55);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexTimes.m"),
                "resolved", 55);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 55);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 55);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 55);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 55);
  emlrtAssign(&rhs55, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs55, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs55), "rhs", 55);
  emlrtAddField(*info, emlrtAliasP(lhs55), "lhs", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgemm.m"),
                "context", 56);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                56);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 56);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 56);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 56);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 56);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 56);
  emlrtAssign(&rhs56, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs56, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs56), "rhs", 56);
  emlrtAddField(*info, emlrtAliasP(lhs56), "lhs", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgemm.m"),
                "context", 57);
  emlrtAddField(*info, b_emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 57);
  emlrtAddField(*info, c_emlrt_marshallOut(1415907934U), "fileTimeLo", 57);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 57);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 57);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 57);
  emlrtAssign(&rhs57, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs57, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs57), "rhs", 57);
  emlrtAddField(*info, emlrtAliasP(lhs57), "lhs", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+refblas/xgemm.m"),
                "context", 58);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.indexPlus"), "name",
                58);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/indexPlus.m"),
                "resolved", 58);
  emlrtAddField(*info, c_emlrt_marshallOut(1372583160U), "fileTimeLo", 58);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 58);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 58);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 58);
  emlrtAssign(&rhs58, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs58, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs58), "rhs", 58);
  emlrtAddField(*info, emlrtAliasP(lhs58), "lhs", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemm.m"),
                "context", 59);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.int"), "name",
                59);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/int.m"),
                "resolved", 59);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 59);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 59);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 59);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 59);
  emlrtAssign(&rhs59, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs59, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs59), "rhs", 59);
  emlrtAddField(*info, emlrtAliasP(lhs59), "lhs", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemm.m!ceval_xgemm"),
                "context", 60);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.blas.size_ptr"),
                "name", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(""), "dominantType", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/size_ptr.m"),
                "resolved", 60);
  emlrtAddField(*info, c_emlrt_marshallOut(1375980664U), "fileTimeLo", 60);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 60);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 60);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 60);
  emlrtAssign(&rhs60, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs60, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs60), "rhs", 60);
  emlrtAddField(*info, emlrtAliasP(lhs60), "lhs", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemm.m!ceval_xgemm"),
                "context", 61);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.c_cast"), "name", 61);
  emlrtAddField(*info, b_emlrt_marshallOut("int32"), "dominantType", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/coder/coder/+coder/+internal/c_cast.p"),
                "resolved", 61);
  emlrtAddField(*info, c_emlrt_marshallOut(1438285998U), "fileTimeLo", 61);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 61);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 61);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 61);
  emlrtAssign(&rhs61, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs61, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs61), "rhs", 61);
  emlrtAddField(*info, emlrtAliasP(lhs61), "lhs", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/+blas/xgemm.m!ceval_xgemm"),
                "context", 62);
  emlrtAddField(*info, b_emlrt_marshallOut("coder.internal.scalarEg"), "name",
                62);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/eml/+coder/+internal/scalarEg.m"),
                "resolved", 62);
  emlrtAddField(*info, c_emlrt_marshallOut(1430216768U), "fileTimeLo", 62);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 62);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 62);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 62);
  emlrtAssign(&rhs62, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs62, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs62), "rhs", 62);
  emlrtAddField(*info, emlrtAliasP(lhs62), "lhs", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[E]C:/Users/Bayesd/msc-thesis/msc-thesis/current/analysis/portfolio/strategicPort_three_assets.m"),
                "context", 63);
  emlrtAddField(*info, b_emlrt_marshallOut("ceil"), "name", 63);
  emlrtAddField(*info, b_emlrt_marshallOut("double"), "dominantType", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(
    "[ILXE]C:/Program Files/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/ceil.m"),
                "resolved", 63);
  emlrtAddField(*info, c_emlrt_marshallOut(1419313828U), "fileTimeLo", 63);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "fileTimeHi", 63);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeLo", 63);
  emlrtAddField(*info, c_emlrt_marshallOut(0U), "mFileTimeHi", 63);
  emlrtAssign(&rhs63, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs63, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs63), "rhs", 63);
  emlrtAddField(*info, emlrtAliasP(lhs63), "lhs", 63);
  emlrtDestroyArray(&rhs0);
  emlrtDestroyArray(&lhs0);
  emlrtDestroyArray(&rhs1);
  emlrtDestroyArray(&lhs1);
  emlrtDestroyArray(&rhs2);
  emlrtDestroyArray(&lhs2);
  emlrtDestroyArray(&rhs3);
  emlrtDestroyArray(&lhs3);
  emlrtDestroyArray(&rhs4);
  emlrtDestroyArray(&lhs4);
  emlrtDestroyArray(&rhs5);
  emlrtDestroyArray(&lhs5);
  emlrtDestroyArray(&rhs6);
  emlrtDestroyArray(&lhs6);
  emlrtDestroyArray(&rhs7);
  emlrtDestroyArray(&lhs7);
  emlrtDestroyArray(&rhs8);
  emlrtDestroyArray(&lhs8);
  emlrtDestroyArray(&rhs9);
  emlrtDestroyArray(&lhs9);
  emlrtDestroyArray(&rhs10);
  emlrtDestroyArray(&lhs10);
  emlrtDestroyArray(&rhs11);
  emlrtDestroyArray(&lhs11);
  emlrtDestroyArray(&rhs12);
  emlrtDestroyArray(&lhs12);
  emlrtDestroyArray(&rhs13);
  emlrtDestroyArray(&lhs13);
  emlrtDestroyArray(&rhs14);
  emlrtDestroyArray(&lhs14);
  emlrtDestroyArray(&rhs15);
  emlrtDestroyArray(&lhs15);
  emlrtDestroyArray(&rhs16);
  emlrtDestroyArray(&lhs16);
  emlrtDestroyArray(&rhs17);
  emlrtDestroyArray(&lhs17);
  emlrtDestroyArray(&rhs18);
  emlrtDestroyArray(&lhs18);
  emlrtDestroyArray(&rhs19);
  emlrtDestroyArray(&lhs19);
  emlrtDestroyArray(&rhs20);
  emlrtDestroyArray(&lhs20);
  emlrtDestroyArray(&rhs21);
  emlrtDestroyArray(&lhs21);
  emlrtDestroyArray(&rhs22);
  emlrtDestroyArray(&lhs22);
  emlrtDestroyArray(&rhs23);
  emlrtDestroyArray(&lhs23);
  emlrtDestroyArray(&rhs24);
  emlrtDestroyArray(&lhs24);
  emlrtDestroyArray(&rhs25);
  emlrtDestroyArray(&lhs25);
  emlrtDestroyArray(&rhs26);
  emlrtDestroyArray(&lhs26);
  emlrtDestroyArray(&rhs27);
  emlrtDestroyArray(&lhs27);
  emlrtDestroyArray(&rhs28);
  emlrtDestroyArray(&lhs28);
  emlrtDestroyArray(&rhs29);
  emlrtDestroyArray(&lhs29);
  emlrtDestroyArray(&rhs30);
  emlrtDestroyArray(&lhs30);
  emlrtDestroyArray(&rhs31);
  emlrtDestroyArray(&lhs31);
  emlrtDestroyArray(&rhs32);
  emlrtDestroyArray(&lhs32);
  emlrtDestroyArray(&rhs33);
  emlrtDestroyArray(&lhs33);
  emlrtDestroyArray(&rhs34);
  emlrtDestroyArray(&lhs34);
  emlrtDestroyArray(&rhs35);
  emlrtDestroyArray(&lhs35);
  emlrtDestroyArray(&rhs36);
  emlrtDestroyArray(&lhs36);
  emlrtDestroyArray(&rhs37);
  emlrtDestroyArray(&lhs37);
  emlrtDestroyArray(&rhs38);
  emlrtDestroyArray(&lhs38);
  emlrtDestroyArray(&rhs39);
  emlrtDestroyArray(&lhs39);
  emlrtDestroyArray(&rhs40);
  emlrtDestroyArray(&lhs40);
  emlrtDestroyArray(&rhs41);
  emlrtDestroyArray(&lhs41);
  emlrtDestroyArray(&rhs42);
  emlrtDestroyArray(&lhs42);
  emlrtDestroyArray(&rhs43);
  emlrtDestroyArray(&lhs43);
  emlrtDestroyArray(&rhs44);
  emlrtDestroyArray(&lhs44);
  emlrtDestroyArray(&rhs45);
  emlrtDestroyArray(&lhs45);
  emlrtDestroyArray(&rhs46);
  emlrtDestroyArray(&lhs46);
  emlrtDestroyArray(&rhs47);
  emlrtDestroyArray(&lhs47);
  emlrtDestroyArray(&rhs48);
  emlrtDestroyArray(&lhs48);
  emlrtDestroyArray(&rhs49);
  emlrtDestroyArray(&lhs49);
  emlrtDestroyArray(&rhs50);
  emlrtDestroyArray(&lhs50);
  emlrtDestroyArray(&rhs51);
  emlrtDestroyArray(&lhs51);
  emlrtDestroyArray(&rhs52);
  emlrtDestroyArray(&lhs52);
  emlrtDestroyArray(&rhs53);
  emlrtDestroyArray(&lhs53);
  emlrtDestroyArray(&rhs54);
  emlrtDestroyArray(&lhs54);
  emlrtDestroyArray(&rhs55);
  emlrtDestroyArray(&lhs55);
  emlrtDestroyArray(&rhs56);
  emlrtDestroyArray(&lhs56);
  emlrtDestroyArray(&rhs57);
  emlrtDestroyArray(&lhs57);
  emlrtDestroyArray(&rhs58);
  emlrtDestroyArray(&lhs58);
  emlrtDestroyArray(&rhs59);
  emlrtDestroyArray(&lhs59);
  emlrtDestroyArray(&rhs60);
  emlrtDestroyArray(&lhs60);
  emlrtDestroyArray(&rhs61);
  emlrtDestroyArray(&lhs61);
  emlrtDestroyArray(&rhs62);
  emlrtDestroyArray(&lhs62);
  emlrtDestroyArray(&rhs63);
  emlrtDestroyArray(&lhs63);
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xEntryPoints;
  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 4);
  emlrtSetField(xEntryPoints, 0, "Name", mxCreateString(
    "strategicPort_three_assets"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", mxCreateDoubleScalar(4.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", mxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", mxCreateString("8.6.0.267246 (R2015b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  nameCaptureInfo = NULL;
  emlrtAssign(&nameCaptureInfo, emlrtCreateStructMatrix(429, 1, 0, NULL));
  info_helper(&nameCaptureInfo);
  b_info_helper(&nameCaptureInfo);
  c_info_helper(&nameCaptureInfo);
  d_info_helper(&nameCaptureInfo);
  e_info_helper(&nameCaptureInfo);
  f_info_helper(&nameCaptureInfo);
  g_info_helper(&nameCaptureInfo);
  emlrtNameCapturePostProcessR2013b(&nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_strategicPort_three_assets_info.c) */
