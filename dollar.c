/**
 * Author: Jadon Lim
 *
 * Date: 2025/09/02
 *
 * A program that converts US Dollars
 * to British Pound and Japanese Yen.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

    double initAmount;
    double fee;
    double jpyAmount;
    double gbpAmount;
    double feePercent = 0.1;
    double amountAfterFee;


    printf("Please input the total amount of US Dollars: ");
    scanf("%lf", &initAmount);

    fee = initAmount * feePercent;

    //prints the fee with 2 decimals
    printf("Fee (10%%): $");
    printf("%.2lf\n", fee);

    amountAfterFee = (initAmount - fee);

    jpyAmount = (amountAfterFee * 127.65);
    gbpAmount = (amountAfterFee * 0.79);

    printf("You get:\n");
    printf("%0.2lf GBP\n", gbpAmount);
    printf("%.0lf JPY\n", jpyAmount);

}
