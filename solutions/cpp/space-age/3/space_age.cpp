
#include "space_age.h"

namespace space_age {

    const long int EARTH_YEAR_IN_SECONDS { 31557600 };
    const double MERCURY_ORBITAL_PERIOD_IN_EARTH_YEARS { 0.2408467 };
    const double VENUS_ORBITAL_PERIOD_IN_EARTH_YEARS { 0.61519726 };
    const double MARS_ORBITAL_PERIOD_IN_EARTH_YEARS { 1.8808158 };
    const double JUPITER_ORBITAL_PERIOD_IN_EARTH_YEARS { 11.862615 };
    const double SATURN_ORBITAL_PERIOD_IN_EARTH_YEARS { 29.447498 };
    const double URANUS_ORBITAL_PERIOD_IN_EARTH_YEARS { 84.016846 };
    const double NEPTUNE_ORBITAL_PERIOD_IN_EARTH_YEARS { 164.79132 };

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
