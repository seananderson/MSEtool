#define TMB_LIB_INIT R_init_MSEtool
#include <TMB.hpp>
#include <cppad/cppad.hpp>
#include "../inst/include/functions.h"

template<class Type>
Type objective_function<Type>::operator() ()
{
  DATA_STRING(model);

  if(model == "DD") {
    #include "../inst/include/DD.h"
  } else
    if(model == "DD_SS") {
      #include "../inst/include/DD_SS.h"
    } else
      error("No model found.");

  return 0;
}
