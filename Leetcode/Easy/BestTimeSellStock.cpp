#include <iostream>
#include <vector>

using namespace std;

// main concept here is to buy low and sell high
// on first day find min - then once find min price keep going to price increase;
// then find new min and repeat till end of array

int maxProfit(vector<int> day)
{
    int profit = 0;

    int minCostIndex = 0;
    int maxCostIndex = 0;
    // find minimum cost day
    if (day.size() == 1)
        return 0;

    while (minCostIndex < day.size() - 1)
    {
        for (int i = minCostIndex; i < day.size(); i++)
        {
            cout << "Min Cost " << day[minCostIndex] << " Day Cost: " << day[i] << endl;
            if (day[minCostIndex] > day[i])
                minCostIndex = i;
            else if(day[minCostIndex] < day[i])
                    break; //then we found smallest up the list
        }
        maxCostIndex = minCostIndex;
        // find maximum cost the is after minimum day -- and while price is not decreasing
        for (int i = minCostIndex; i < day.size(); i++)
        {
            cout << "Max Cost " << day[maxCostIndex] << " Day Cost: " << day[i] << endl;
            if (day[maxCostIndex] < day[i])
                maxCostIndex = i;
            else if (day[maxCostIndex] > day[i])
                break; // then we have found where the cost has stopped increasing
            // we want to sell here and then sell at the next stop
        }

        if (maxCostIndex == minCostIndex)
            return profit;

        // find profit for that time
        profit += day[maxCostIndex] - day[minCostIndex];
        minCostIndex = maxCostIndex; // update minCostIndex to go to maxCost
    }

    return profit;
}

int main()
{

    // can only have 1 stock a day

    // vector<int> days = {7,1,5,3,6,4};
    //vector<int> days = {3, 3};
    vector<int> days = {2,4,1};
    cout << days.size() << endl;
    cout << maxProfit(days) << endl;
    return 0;
}