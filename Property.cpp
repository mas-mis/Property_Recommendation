#include <iostream>
#include "PropertyList.h"
#include "ResidentialPropertiesList.h"
#include "ResidentialPropertiesPerks.h"
#include "ResidentialProperties.h"
#include "HotelPropertiesList.h"
#include "HotelPropertiesSpecifications.h"
#include "HotelProperties.h"
#include "PlotProperties.h"
#include "CommercialProperties.h"

void Simulate(){
std::cout<<"Hello Welcome to Lucknow Property Reccomender:-"<<std::endl;
    start:
    std::cout<<"What would you like to look at:-"<<std::endl<<"1. Residences"<<std::endl<<"2. Hotels"<<std::endl<<"3. Plot"<<std::endl<<"4. Commercial Properties"<<std::endl;
    std::cout<<"Press the Index of the list items to go to it."<<std::endl;
    int i;
    std::cin>>i;
    if (i == 1)
    {
        goto Property_choose;
    }
    else if (i == 2) {
        goto Hotel_Choose;
    }
    else if (i == 3) {
        goto Plot_Choose;
    }
    else if (i == 4)
    {
        goto Commercial_Choose;
    }
    else {
        std::cout<<"Type a valid Number"<<std::endl;
        goto start;
    }
    
    
    // Code blocks Here:
    Property_choose:
        int Av;
        std::cout<<"Do you want to see the properties for "<<std::endl<<"1. Buying"<<std::endl<<"2. Rent"<<std::endl;
        std::cin>>Av;
        char bor;
        if (Av == 1)
        {
            bor = 'B';
        }
        else {
            bor = 'R';
        }
        
        std::cout<<"Type the number of BHK you want(1-4):-"<<std::endl;
        int BHK;
        std::cin>>BHK;
        int Budget;
        if (Av == 1)
        {
            std::cout<<"Type in your budget(Max 100000000, min 1000000):"<<std::endl;
            std::cin>>Budget;
        }
        else {
            std::cout<<"Type in your budget(Max 20000, min 2000):"<<std::endl;
            std::cin>>Budget;
        }    
        std::cout<<"Given below are the set of perks that the residences have, pick the order(ascending) in which you prefer them: "<<std::endl;
        std::cout<<"1. Locality"<<std::endl;
        std::cout<<"2. Near Market"<<std::endl;
        std::cout<<"3. Near Transportation services"<<std::endl;
        std::cout<<"4. Near School"<<std::endl;
        std::cout<<"Pick the order via typing in the indexes in the ascending order:"<<std::endl;
        int perks[4];
        for (int i = 0; i <4; i++)
        {
            std::cin>>perks[i];
        }
        AllProperties->getReccomendation(bor,BHK,Budget,perks);

        goto Choose_Again;
        
        Hotel_Choose:
        int HBudget;
        std::cout<<"Type in your budget:"<<std::endl;
        std::cin>>HBudget;
        AllHotels->getHotelunderPrise(HBudget);
        goto Choose_Again;

        Plot_Choose:
        std::cout<<"Choose how you want to look at plots"<<std::endl;
        int pc;
        std::cout<<"1. All Plots"<<std::endl;
        std::cout<<"2. Filter by prise"<<std::endl;
        std::cin>>pc;
        if (pc == 1)
        {
            AllPlots->getPlotDetails ();
        }
        else if (pc == 2)
        {
            int PBudget;
            std::cout<<"Please Enter your Budget"<<std::endl;
            std::cin>>PBudget;
            AllPlots->getPlotUnderPrise (PBudget);   
        }
        else {
            std::cout<<"Please enter a correct value to continue."<<std::endl;
            goto Plot_Choose;
        }

        goto Choose_Again;

        Commercial_Choose:
        std::cout<<"These are the given set of Buildings(Choose one):-"<<std::endl;
        AllCommercial->getBuildingType();
        int BC;
        std::cin>>BC;
        AllCommercial->getCommercialProperty (BC);

        goto Choose_Again;

        Filter:
        std::cout<<"how do you want to filter:"<<std::endl;
        if (i ==1 )
        {
            goto R_Filter;
        }
        else if (i == 2)
        {
            goto H_Filter;
        }
        else if (i == 3)
        {
            goto P_Filter;
        }
        else if (i == 4)
        {
            goto C_Filter;
        }

        R_Filter:
        std::cout<<"1. Get All Residencies Information."<<std::endl<<"2. Get the Availability Information of all the Residencies"<<std::endl;
        std::cout<<"3. Get the Prise of all the Residenies."<<std::endl<<"4. Get the Perks of all the Residencies."<<std::endl;
        std::cout<<"5. Get the Perks of a house based on its Index shown."<<std::endl<<"6. Get the Residenses with Availability 'B' or 'R'"<<std::endl;
        std::cout<<"7. Get the Residence with BHK"<<std::endl<<"8. Go to Choose Again"<<std::endl;

        int RFin;
        std::cin>>RFin;

        if (RFin == 1)
        {
            AllProperties->getInfo ();
        }
        else if (RFin == 2)
        {
            AllProperties->getAvailabilityInfo ();
        }
        else if (RFin == 3)
        {
            AllProperties->getPrice ();
        }
        else if (RFin == 4)
        {
            AllProperties->getPerks();
        }
        else if (RFin == 5)
        {
            int RFin5I;
            RFin5:
            std::cout<<"Input the index of the house."<<std::endl;
            std::cin>>RFin5I;
            if ((RFin5I > 0)&&(RFin5I < 21))
            {
                AllProperties->getPerk(RFin5I);
            }
            else {
                std::cout<<"Input correct index"<<std::endl;
                goto RFin5;
            } 
        }
        else if (RFin == 6)
        {
            int RFin6I;
            RFin6:
            std::cout<<"For Buying or for Rent:"<<std::endl<<"1. Buying"<<std::endl<<"2. Rent"<<std::endl;
            std::cin>>RFin6I;
            if (RFin6I == 1)
            {
                AllProperties->getResidencewithAvailability('B');
            }
            else if (RFin6I == 2)
            {
                AllProperties->getResidencewithAvailability('R');
            }
            else {
                std::cout<<"Enter correct Index."<<std::endl;
                goto RFin6;
            }
        }
        else if (RFin == 7)
        {
            int RFin7I;
            RFin7:
            std::cout<<"Enter the number of BHK(1-4): "<<std::endl;
            std::cin>>RFin7I;
            if ((RFin7I >= 1)&&(RFin7I <=4))
            {
                AllProperties->getResidencewithBHK(RFin7I);
            }
            else {
                std::cout<<"Enter a correct Index."<<std::endl;
                goto RFin7;
            }
        }
        else if (RFin == 8) 
        {
            goto Choose_Again;
        }
        else {
            std::cout<<"Please enter a correct Index"<<std::endl<<std::endl;
            goto R_Filter;
        }

        goto Choose_Again;

        H_Filter:
        int HFin;
        std::cout<<"1. Get All Hotels List."<<std::endl;
        std::cout<<"2. Get a Hotels Information based on Index."<<std::endl<<"3. Get the Specifications of Hotels."<<std::endl;
        std::cout<<"4. Go to Choose Again"<<std::endl;
        std::cin>>HFin;
        if (HFin == 1)
        {
            AllHotels->getHotelList ();
        }
        else if (HFin == 2)
        {
            int HFin2I;
            HFin2:
            std::cout<<"Input the index of the hotel."<<std::endl;
            std::cin>>HFin2I;
            if ((HFin2I > 0)&&(HFin2I < 21))
            {
                AllHotels->getHotelInfo (HFin2I);
            }
            else {
                std::cout<<"Input correct index"<<std::endl;
                goto HFin2;
            } 
        }
        else if (HFin == 3)
        {
            AllHotels->getHotelListSpecifications ();
        }
        else if (HFin == 4)
        {
            goto Choose_Again;
        }
        else {
            std::cout<<"Please enter a correct Index"<<std::endl<<std::endl;
            goto H_Filter;
        }
        
        goto Choose_Again;

        P_Filter:
        int PFin;
        std::cout<<"1. Get All Plots List."<<std::endl<<"2. Go to Choose Again."<<std::endl;
        std::cin>>PFin;
        if (PFin == 1)
        {
            AllPlots->getPlotDetails ();
        }
        else if (PFin == 2)
        {
            goto Choose_Again;
        }
        else {
            std::cout<<"Please enter a correct Index"<<std::endl<<std::endl;
            goto P_Filter;    
        }

        goto Choose_Again;

        C_Filter:
        int CFin;
        std::cout<<"1. Get All Commercial Properties List."<<std::endl<<"2. Go to Choose Again."<<std::endl;
        std::cin>>CFin;
        if (CFin == 1)
        {
            AllCommercial->getAllCommercialProperty ();
        }
        else if (CFin == 2)
        {
            goto Choose_Again;
        }
        else {
            std::cout<<"Please enter a correct Index"<<std::endl<<std::endl;
            goto C_Filter;    
        }

        goto Choose_Again;
        
        Choose_Again:
        std::cout<<"What do you want to do now:"<<std::endl<<"1. Choose Again"<<std::endl<<"2. Filter out the different Properties from the Property List."<<std::endl<<"3. Exit"<<std::endl;
        int WN; 
        std::cin>>WN;
        if (WN == 1) {
            goto start;
        }
        if (WN == 2)
        {
            goto Filter;
        }
        
        if (WN == 3)
        {
            goto End;
        }
        else {
            std::cout<<"Please Enter a valid number"<<std::endl;
            goto Choose_Again;
        }
        End:
        std::cout<<"Thank You for your time"<<std::endl;
        return;
}

int main() {
    Simulate();
        return 0;
}
