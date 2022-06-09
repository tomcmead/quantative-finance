/*************************************************************************//**
* @file financial-ratios.cpp
* @brief Common financial ratio functions
*****************************************************************************/
/*----------------------------------------------------------------------------
  include files
----------------------------------------------------------------------------*/
#include <quantative-finance/financial-ratios.hpp>

/*----------------------------------------------------------------------------
  public functions
----------------------------------------------------------------------------*/
/*************************************************************************//**
* @brief The weighted average cost of capital (WACC) represents a firm's average 
*        cost of capital from all sources, including common stock, preferred 
*        stock, bonds, and other forms of debt. WACC is also used as the discount
*        rate for future cash flows in discounted cash flow analysis.
* @param float E market value of firm's equity
* @param float D market value of firm's equity
* @param float Re cost of equity
* @param float Rd cost of debt
* @param float Tc corporate tax rate
* @return Weighted Average Cost of Capital
*****************************************************************************/
float weightedAverageCostOfCapital(float E, float D, float Re, float Rd, float Tc){
    return ((E/(E+D)) * Re) + ((E/(E+D)) * Rd * (1-Tc));
}


