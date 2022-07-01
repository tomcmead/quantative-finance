/*************************************************************************//**
* @file financial-ratios.cpp
* @brief Common financial ratio functions
*****************************************************************************/
/*----------------------------------------------------------------------------
  include files
----------------------------------------------------------------------------*/
#include <financial-ratios.hpp>

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

/*************************************************************************//**
* @brief The term debt ratio refers to a financial ratio that measures the extent 
*        of a company’s leverage. It can be interpreted as the proportion of a 
*        company’s assets that are financed by debt. A ratio below 1 means that a 
*        greater portion of a company's assets is funded by equity, above 1 
*        represents a company's debt is funded by assets.
* @param float totalDebt
* @param float totalAssets
* @return Debt Ratio
*****************************************************************************/
float debtRatio(float totalDebt, float totalAssets){
    return totalDebt / totalAssets;
}

/*************************************************************************//**
* @brief Equity ratio uses a company’s total assets (current and non-current) and 
*        total equity to help indicate how leveraged the company is: how effectively
*        they fund asset requirements without using debt.
* @param float totalEquity
* @param float totalAssets
* @return Equity Ratio
*****************************************************************************/
float equityRatio(float totalEquity, float totalAssets){
    return totalEquity / totalAssets;
}

/*************************************************************************//**
* @brief The debt-to-equity (D/E) ratio compares a company’s total liabilities to
*        its shareholder equity and can be used to evaluate how much leverage a 
*        company is using. Higher-leverage ratios indicates higher risk.
* @param float totalLiabilities
* @param float totalShareholderEquity
* @return Debt to Equity Ratio
*****************************************************************************/
float debtToEquityRatio(float totalLiabilities, float totalShareholderEquity){
    return totalLiabilities / totalShareholderEquity;
}


/*************************************************************************//**
* @brief The interest coverage ratio is used to measure how well a firm can pay 
*        the interest due on outstanding debt. The formula to determine a company's 
*        riskiness relative to its current debt or for future borrowing. 
* @param float earningsBeforeTaxesAndInterest
* @param float interestExpense
* @return Interest Coverage Ratio
*****************************************************************************/
float interestCoverageRatio(float earningsBeforeTaxesAndInterest, float interestExpense)
{
    return earningsBeforeTaxesAndInterest / interestExpense;
}

/*************************************************************************//**
* @brief Gross profit margin is a metric analysts use to assess a company's financial 
*        health by calculating the amount of money left over from product sales after
*        subtracting the cost of goods sold.
* @param float netSales
* @param float costOfGoodsSold
* @return Gross Profit Margin
*****************************************************************************/
float grossProfitMargin(float netSales, float costOfGoodsSold){
    return (netSales-costOfGoodsSold) / netSales;
}

/*************************************************************************//**
* @brief Return on assets indicates how profitable a company is in relation to its 
*        total assets. Corporate management, analysts, and investors can use ROA to
*        determine how efficiently a company uses its assets to generate a profit
* @param float netIncome
* @param float totalAssets
* @return Return On Assets
*****************************************************************************/
float returnOnAssets(float netIncome, float totalAssets){
    return netIncome / totalAssets;
}

/*************************************************************************//**
* @brief Return on equity (ROE) is a measure of financial performance calculated 
*        by dividing net income by shareholders' equity. ROE is a gauge of a 
*        corporation's profitability and how efficient it is in generating profits.
* @param float netIncome
* @param float averageShareholdersEquity
* @return Return On Equity
*****************************************************************************/
float returnOnEquity(float netIncome, float averageShareholdersEquity){
    return netIncome / averageShareholdersEquity;
}

/*************************************************************************//**
* @brief Dividend yield, expressed as a percentage, shows how much a company pays 
*        out in dividends each year relative to its stock price
* @param float annualDividendsPerShare
* @param float pricePerShare
* @return Return On Equity
*****************************************************************************/
float dividendYield(float annualDividendsPerShare, float pricePerShare){
    return annualDividendsPerShare / pricePerShare;
}