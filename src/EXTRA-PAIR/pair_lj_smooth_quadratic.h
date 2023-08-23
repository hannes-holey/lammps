/* -*- c++ -*- ----------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   http://lammps.sandia.gov, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifdef PAIR_CLASS
// clang-format off
PairStyle(lj/smooth/quadratic,PairLJSmoothQuadratic)
// clang-format on
#else

#ifndef PAIR_LJ_SMOOTH_QUADRATIC_H
#define PAIR_LJ_SMOOTH_QUADRATIC_H

#include "pair.h"

namespace LAMMPS_NS {

class PairLJSmoothQuadratic : public Pair {
 public:
  PairLJSmoothQuadratic(class LAMMPS *);
  virtual ~PairLJSmoothQuadratic();
  virtual void compute(int, int);
  void settings(int, char **);
  void coeff(int, char **);
  double init_one(int, int);
  void write_restart(FILE *);
  void read_restart(FILE *);
  void write_restart_settings(FILE *);
  void read_restart_settings(FILE *);
  double single(int, int, int, int, double, double, double, double &);
  double** get_cut();
  double** get_lj3();
  double** get_lj4();
  double** get_ljcut();
  double** get_dljcut();
  double** get_ddljcut();

 protected:
  double cut_global;
  double **cut;
  double **epsilon,**sigma;
  double **ljcut,**dljcut,**ddljcut;
  double **lj1,**lj2,**lj3,**lj4,**lj5,**lj6;

  void allocate();
};

}

#endif
#endif

/* ERROR/WARNING messages:

E: Illegal ... command

Self-explanatory.  Check the input script syntax and compare to the
documentation for the command.  You can use -echo screen as a
command-line option when running LAMMPS to see the offending line.

E: Incorrect args for pair coefficients

Self-explanatory.  Check the input script or data file.

*/
