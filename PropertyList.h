#pragma once

#include "ResidentialPropertiesList.h"
#include "ResidentialPropertiesPerks.h"
#include "ResidentialProperties.h"
#include "HotelPropertiesList.h"
#include "HotelPropertiesSpecifications.h"
#include "HotelProperties.h"
#include "PlotProperties.h"
#include "CommercialProperties.h"

static Property AllProperties[] {
{1,"Indivisual","South City 11-A",'B',2,1100000,5.0,3.5,4.0,1.5,'Y'},
{2,"Apartment","Celebrity gardens Ansal API Golf city 17 2th floor",'R',1,1102,4.0,4.5,3.0,2.0,'N'},
{3,"Apartment","Celebrity gardens Ansal API Golf city 19 5th floor",'R',1,1102,4.0,4.5,3.0,2.0,'N'},
{4,"Indivisual","South City 119-H",'R',2,6000,1.0,2.0,3.0,4.5,'N'},
{5,"Indivisual","South City 135-H",'B',3,10000000,2.0,3.0,4.0,5.0,'Y'},
{6,"Apartment","Celebrity gardens Ansal API Golf city 9 7th floor",'R',4,19000,3.5,4.2,5.0,2.0,'Y'},
{7,"Indivisual","South City 145-N",'B',1,700000,3.5,4.5,2.0,1.5,'N'},
{8,"Apartment","Gomti Nagar Expersion Capitol Vibhuti Khand 4 2nd Floor",'B',2,1000000,3.0,4.0,3.9,2.9,'Y'},
{9,"Indivisual","Sanskriti enclave Eldeco 19",'R',2,9000,4.0,5.0,4.5,2.0,'Y'},
{10,"Indivisual","Sanskriti enclave Eldeco 7",'B',2,1500000,2.0,3.0,4.5,3.0,'N'},
{11,"Apartment","Sanskriti enclave Eldeco 27",'R',3,9000,3.0,4.0,4.0,4.5,'Y'},
{12,"Indivisual","17-C South City, Lucknow",'R',2,10000,3.0,4.0,4.5,3.9,'N'},
{13,"Indivisual","South City 97-E",'B',3,4000000,2.0,4.0,4.0,5.0,'Y'},
{14,"Apartment","Gomti Nagar Expersion Capitol Vibhuti Khand 8 6th Floor",'R',2,10000,4.0,4.5,3.0,2.0,'N'},
{15,"Apartment","Gomti Nagar Expersion Capitol Vibhuti Khand 7 4nd Floor",'B',3,1000000,4.0,4.5,3.0,2.0,'Y'},
{16,"Bunglow","Ashiyana 21-F",'B',1,900000,3.0,2.0,5.0,4.0,'Y'},
{17,"Bunglow","South City 63-Y",'R',2,15000,4.0,4.5,3.0,5.0,'N'},
{18,"Bunglow","Ashiyana 8-S",'R',2,9000,2.0,3.0,4.0,4.0,'Y'},
{19,"Bunglow","Ashiyana 14-C",'B',3,5000000,3.0,4.0,4.5,4.2,'N'},
{20,"Bunglow","Sanskriti enclave Eldeco 30 ",'R',3,19000,3.0,4.0,5.0,3.0,'Y'}
};

static Hotel AllHotels[] {
    {1,"Hilton Garden","Gomti Nagar",9000,4.0,"Private (Free) Gym","Common Garden","Spa","Pool","Banquet Halls"},
    {2,"Radison Lucknow City Center","Charbagh",7000,3.0,"Private Gym","Common Garden","Spa","Pool","Banquet Halls"},
    {3,"Hyat Regency","Gomti Nagar",6000,3.0,"Garden","Pool","N/A","N/A","N/A"},
    {4,"Clarks Awadh","Qaiserbagh",15000,4.5,"Private Gym","Garden","Pool","Spa","Banquet Halls"},
    {5,"Novotel","Gomti Nagar",4000,3.5,"Garden","Balconys","Banqut Halls","N/A","N/A"},
    {6,"LaPalace Sarovar","HazrartGanj",3000,3.0,"Balconys","Garden","N/A","N/A","N/A"},
    {7,"Ramdya","Junab Ganj",8000,4.5,"Garden","Spa","Pool","Banquet Halls","Private Gyms"},
    {8,"Comfort Inn","Gomti Nagar",2400,2.0,"Garden","N/A","N/A","N/A","N/A"},
    {9,"Grand JBR","Gomti Nagar",2500,3.0,"Garden","Free Parking","N/A","N/A","N/A"},
    {10,"Golden Tulip","Hazratganj",5000,4.0,"Private Gym","Common Garden","Pool","Banquet Halls","N/A"}
    };

static Plot AllPlots[] {
    {1, 1000000, 200.0, "Gomti Nagar"},
    {2,2000000,290,"GomtiNagar"},
    {3,40000000,200,"HazratGanj"},
    {4,1000000,50,"Eldeco"},
    {5,6000000,100,"Ashiyana"},
    {6,5000000,70,"Eldeco"},
    {7,5000000,70,"Eldeco"}
};


static Commercial AllCommercialTypes[]  {{1,"Building","",'N',0},
{2,"Single Floor","",'N',0}
};

static Commercial AllCommercial[] {
    {1,"Building","ABC ABC",'B',100000000},
    {2,"Single Floor","DBC DBC",'R',20000},
    {3,"Single Floor","PVC PVC",'B',400000},
    {4,"Building","UNS UNS",'R',4000},
    {5,"Single Floor","CQS CQS",'B',200000},
    {6,"Building","UWS UWS",'R',400000},
    {7,"Single Floor","GWS GWS",'B',1000000},
    {8,"Single Floor","GQS GQS",'R',2500},
    {9,"Building","KWS KWS",'B',7000000}
};
