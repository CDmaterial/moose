//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html

#ifndef SMOOTHERSTEPTESTFUNCTION_H
#define SMOOTHERSTEPTESTFUNCTION_H

#include "Function.h"

class SmootherStepTestFunction;

template <>
InputParameters validParams<SmootherStepTestFunction>();

class SmootherStepTestFunction : public Function
{
public:
  SmootherStepTestFunction(const InputParameters & parameters);

  virtual Real value(Real t, const Point & p) override;

  const bool _derivative;
};

#endif // SMOOTHERSTEPTESTFUNCTION_H
