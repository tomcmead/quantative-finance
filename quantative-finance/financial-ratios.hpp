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
float returnOnInvestment(float currValOfInvestment, float costOfInvestment);
float workingCapital(float totCurrAssets, float totalCurrLiabilities);
float quickRatio(float cashAndEquivalents, float marketSecurities, float accountReceivable, float currentLiabilities);
float debtRatio(float totalDebt, float totalAssets);
float equityRatio(float totalEquity, float totalAssets);
float debtToEquityRatio(float totalLiabilities, float totalShareholderEquity);
float interestCoverageRatio(float earningsBeforeTaxesAndInterest, float interestExpense);
float grossProfitMargin(float netSales, float costOfGoodsSold);
float returnOnAssets(float netIncome, float totalAssets);
float returnOnEquity(float netIncome, float averageShareholdersEquity);

#endif // _FINANCIAL_RATIOS_H