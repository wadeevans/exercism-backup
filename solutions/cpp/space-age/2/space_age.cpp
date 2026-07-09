#include <cstdint>
#include "space_age.h"

namespace space_age {

    space_age::space_age(std::int64_t age_in_seconds)
    {
        space_age_in_seconds = age_in_seconds;
    }
    std::int64_t space_age::seconds() const
    {
        return space_age_in_seconds;    
    }
    double space_age::on_earth() const
    {
        return static_cast<double>(space_age_in_seconds) / EARTH_YEAR_IN_SECONDS;
    }
    double space_age::on_mercury() const
    {
        return on_earth() / MERCURY_ORBITAL_PERIOD_IN_EARTH_YEARS;
    }

    double space_age::on_venus() const
    {
        return on_earth() / VENUS_ORBITAL_PERIOD_IN_EARTH_YEARS;
    }

    double space_age::on_mars() const
    {
        return on_earth() / MARS_ORBITAL_PERIOD_IN_EARTH_YEARS;
    }

    double space_age::on_jupiter() const
    {
        return on_earth() / JUPITER_ORBITAL_PERIOD_IN_EARTH_YEARS;
    }

    double space_age::on_saturn() const
    {
        return on_earth() / SATURN_ORBITAL_PERIOD_IN_EARTH_YEARS;
    }

    double space_age::on_uranus() const
    {
        return on_earth() / URANUS_ORBITAL_PERIOD_IN_EARTH_YEARS;
    }

    double space_age::on_neptune() const
    {
        return on_earth() / NEPTUNE_ORBITAL_PERIOD_IN_EARTH_YEARS;
    }

}  // namespace space_age
