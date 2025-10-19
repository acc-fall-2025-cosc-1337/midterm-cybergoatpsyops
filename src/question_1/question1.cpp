#include "question1.h"

bool test_config()
{
    return true;
}

double get_sales_commission(double sales)
{
    double commission = 0.0;
    
    if (sales < 0)
    {
        return 0.0;
    }
    
    if (sales >= 0 && sales <= 499)
    {
        commission = sales * 0.05;  // 5%
    }
    else if (sales >= 500 && sales <= 999)
    {
        commission = sales * 0.06;  // 6%
    }
    else if (sales >= 1000 && sales <= 1499)
    {
        commission = sales * 0.07;  // 7%
    }
    else if (sales >= 1500)
    {
        commission = sales * 0.08;  // 8%
    }
    
    return commission;
}