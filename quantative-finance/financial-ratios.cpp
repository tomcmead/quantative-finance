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

/*************************************************************************//**
* @brief Enterprise value (EV) is a measure of a company's total value, 
*        often used as a more comprehensive alternative to equity market 
*        capitalization. EV includes in its calculation the market capitalization 
*        of a company but also short-term and long-term debt as well as any cash on
*        the company's balance sheet. Enterprise value is a popular metric used to 
*        value a company for a potential takeover.
* @param float MC market capatialisation, equals stock price multiplied by number of
*              stock shares
* @param float totalDebt total debt is sum of short-term and long-term debts
* @param float C cash and cash equivalents, liquid assets of a company
* @return Enterprise Value
*****************************************************************************/
float enterpriseValue(float MC, float totalDebt, float C){
    return MC + totalDebt - C;
}

/*************************************************************************//**
* @brief Return on Investment (ROI) is a performance measure used to evaluate 
*        the efficiency or profitability of an investment or compare the efficiency 
*        of a number of different investments. ROI tries to directly measure the 
*        amount of return on a particular investment, relative to the investment’s cost.
* @param float currValOfInvestment
* @param float costOfInvestment
* @return Return on Investment
*****************************************************************************/
float returnOnInvestment(float currValOfInvestment, float costOfInvestment){
    return (currValOfInvestment-costOfInvestment) / costOfInvestment;
}

/*************************************************************************//**
* @brief The Working Capital (AKA current ratio) is a liquidity ratio that measures 
*        a company’s ability to pay short-term obligations or those due within one year.  
*        It tells investors and analysts how a company can maximize the current 
*        assets on its balance sheet to satisfy its current debt and other payables.
* @param float totCurrAssets
* @param float totalCurrLiabilities
* @return Working Capitial Ratio
*****************************************************************************/
float workingCapital(float totCurrAssets, float totalCurrLiabilities){
    return totCurrAssets / totalCurrLiabilities;
}

/*************************************************************************//**
* @brief The quick ratio is an indicator of a company’s short-term liquidity position 
*        and measures a company’s ability to meet its short-term obligations with its
*        most liquid assets. The quick ratio measures the dollar amount of liquid assets
*        available against the dollar amount of current liabilities of a company.
* @param float cashAndEquivalents
* @param float marketSecurities
* @param float accountReceivable 
* @param float currentLiabilities
* @return Quick Ratio
*****************************************************************************/
float quickRatio(float cashAndEquivalents, float marketSecurities, float accountReceivable, float currentLiabilities){
    return (cashAndEquivalents+marketSecurities+accountReceivable) / currentLiabilities;
}
