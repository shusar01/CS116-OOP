/*
  choice6.cpp
  Purpose - To return to the user all the White wines in a descending order by year

  @author Steven Husar
  @version 1.0 3/19/2017
*/

#include "menuWine.h"

/*
  Purpose- Operator that allows the function to utilize this descending sort function 
		   created in the menuWine file for usage in the choice2 function below.
		   This will return true if the wine a is less than wine b in its year.
  @author Steven Husar
  @version 1.0 3/19/2017

  @param a- object on the left side of the previous object b
  @param b- object on the right side of the previous object a 
  @return- true if the left hand side object year is less than the right hand side object year
*/
bool compareAYear (const Wine * a, const Wine * b);

/*
  Purpose- Operator that prints out a White wine list and sorts by year.
		   The function will also provide following the list the highest, lowest, 
		   and average price of the wines within the list.

  @author Steven Husar
  @version 1.0 3/19/2017

  @variable currentPrice - This will help identify the current price in the loop that the loop is on.
  @variable lowestWinePrice - This will hold the lowest priced wine within the list.
  @variable highestWinePrice - This will hold the highest priced wine within the list.
  @variable priceTotal - This will identify the total wine price values of data set following conditional evaluation of the data.
  @variable count - This will identify the number of data set following conditional evaluation of the data.
  @variable- priceAverage - This will retain the final average from the selected dataset formed by count & priceTotal.

  @param Winest - All of the information from the winelist within the main program
  @return- none
*/

void choice6(vector <Wine *> & Winest){
	sort(Winest.begin(), Winest.end(), compareAYear);
	cout << "Below are the White wines with the year selections in descending order: \n" <<endl;
	cout << "Winery Name" << ": " << "Color" << " " << "Year" << " " << "Score" << " "
		 << "Price" << "   " << "Winery Name" << ": " << "Street Address" << " " << "City" 
		 << ", " << "State" << " " << "Zip Code" << " \n" <<endl;
		int priceTotal = 0, count = 0, currentPrice = 0;
		double priceAverage = 0, lowestWinePrice = 0, highestWinePrice = 0;
		for (unsigned int i=0; i < Winest.size(); i++)
		{
			if (Winest[i]->getWineType() == "White")
			{
				Winest[i]->printInfo();
				priceTotal = Winest[i]->getPrice() + priceTotal;
				currentPrice = Winest[i]->getPrice();
				if (lowestWinePrice == 0)
				{
					lowestWinePrice = currentPrice;
				}
				else if (lowestWinePrice > currentPrice)
				{
					lowestWinePrice = currentPrice;
				}
				if (highestWinePrice == 0)
				{
					highestWinePrice = currentPrice;
				}
				else if (highestWinePrice < currentPrice)
				{
					highestWinePrice = currentPrice;
				}
				count++;
			}
		}
		priceAverage = (double)priceTotal / count;
		cout << fixed << setprecision(2);
		cout << "\nThe highest price is: $" << highestWinePrice << endl;	
		cout << "The lowest price is: $" << lowestWinePrice << endl;	
		cout << "The average price is: $" << priceAverage << " " << endl;	
}
