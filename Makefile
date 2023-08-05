ReccomenderSimulator: PropertyType.h ResidentialPropertiesList.h ResidentialPropertiesList.cpp ResidentialPropertiesPerks.h ResidentialPropertiesPerks.cpp ResidentialProperties.h ResidentialProperties.cpp HotelPropertiesList.h HotelPropertiesList.cpp HotelPropertiesSpecifications.h HotelPropertiesSpecifications.cpp HotelProperties.h HotelProperties.cpp PlotProperties.h PlotProperties.cpp CommercialPropertiesType.h CommercialProperties.h CommercialProperties.cpp PropertyList.h
	g++ Property.cpp ResidentialPropertiesList.cpp ResidentialPropertiesPerks.cpp ResidentialProperties.cpp HotelPropertiesList.cpp HotelPropertiesSpecifications.cpp HotelProperties.cpp PlotProperties.cpp CommercialProperties.cpp -o ReccomenderSimulator
ResidentialPropertiesList.o: PropertyType.h ResidentialPropertiesList.h ResidentialPropertiesList.cpp ResidentialProperties.h ResidentialProperties.cpp PropertyList.h
	g++ -c ResidentialPropertiesList.cpp ResidentialProperties.cpp
ResidensialPropertiesPerks.o: PropertyType.h ResidentialPropertiesList.h ResidentialPropertiesList.cpp ResidentialPropertiesPerks.h ResidentialPropertiesPerks.cpp ResidentialProperties.h ResidentialProperties.cpp PropertyList.h
	g++ -c ResidentialPropertiesList.cpp ResidentialPropertiesPerks.cpp ResidentialProperties.cpp
ResidentialProperties.o: PropertyType.h ResidentialPropertiesList.h ResidentialPropertiesList.cpp ResidentialPropertiesPerks.h ResidentialPropertiesPerks.cpp ResidentialProperties.h ResidentialProperties.cpp PropertyList.h
	g++ -c ResidentialPropertiesList.cpp ResidentialPropertiesPerks.cpp ResidentialProperties.cpp
HotelPropertiesList.o: PropertyType.h HotelPropertiesList.h HotelPropertiesList.cpp HotelProperties.cpp PropertyList.h 
	g++ -c HotelPropertiesList.cpp 
HotelPropertiesSpecifications.o: PropertyType.h HotelPropertiesList.h HotelPropertiesList.cpp HotelPropertiesSpecifications.h HotelPropertiesSpecifications.cpp PropertyList.h 
	g++ -c HotelPropertiesList.cpp HotelPropertiesSpecifications.cpp
HotelProperties.o: PropertyType.h HotelPropertiesList.h HotelPropertiesList.cpp HotelPropertiesSpecifications.h HotelPropertiesSpecifications.cpp HotelProperties.h HotelProperties.cpp PropertyList.h 
	g++ -c HotelPropertiesList.cpp HotelPropertiesSpecifications.cpp HotelProperties.cpp
PlotProperties.o: PropertyType.h PlotProperties.h PlotProperties.cpp PropertyList.h
	g++ -c PlotProperties.cpp
CommercialProperties.o: PropertyType.h CommercialPropertiesType.h CommercialProperties.h CommercialProperties.cpp PropertyList.h
	g++ -c CommercialProperties.cpp
clear:
	rm -f ReccomenderSimulator
