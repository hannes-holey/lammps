/* -*- c++ -*- ----------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   https://lammps.sandia.gov/, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifdef NPAIR_CLASS

NPairStyle(half/multi/old/newtoff,
           NPairHalfMultiOldNewtoff,
           NP_HALF | NP_MULTI_OLD | NP_NEWTOFF | NP_ORTHO | NP_TRI)

#else

#ifndef LMP_NPAIR_HALF_MULTI_OLD_NEWTOFF_H
#define LMP_NPAIR_HALF_MULTI_OLD_NEWTOFF_H

#include "npair.h"

namespace LAMMPS_NS {

class NPairHalfMultiOldNewtoff : public NPair {
 public:
  NPairHalfMultiOldNewtoff(class LAMMPS *);
  ~NPairHalfMultiOldNewtoff() {}
  void build(class NeighList *);
};

}

#endif
#endif

/* ERROR/WARNING messages:

E: Neighbor list overflow, boost neigh_modify one

UNDOCUMENTED

*/