/*************************************************************************//**
* @file  financial-ratios.hpp
* @brief Function prototypes, nested includes and constants for finanical 
*        ratios operations
*****************************************************************************/
#ifndef _FINANCIAL_RATIOS_H
#define _FINANCIAL_RATIOS_H

/*----------------------------------------------------------------------------
  prototypes
----------------------------------------------------------------------------*/
float weightedAverageCostOfCapital(float E, float D, float Re, float Rd, float Tc);
float enterpriseValue(float MC, float totalDebt, float C);

#endif // _FINANCIAL_RATIOS_H