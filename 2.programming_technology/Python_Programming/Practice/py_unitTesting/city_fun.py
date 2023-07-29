def city_country_name(city,country,population=0):
    
    if population:
        name = f"{city}, {country} - Population = {population}"
    else:
        name = f"{city}, {country}"

    return name.title()

# print(city_country_name('Bang','IN',50000))