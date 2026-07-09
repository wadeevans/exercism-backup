
#include "space_age.h"

namespace space_age {

    const double earth_year_in_seconds { 31557600 };
    const double mercury_orbital_period_in_earth_years { 0.2408467 };
    const double venus_orbital_period_in_earth_years { 0.61519726 };
    const double mars_orbital_period_in_earth_years { 1.8808158 };
    const double jupiter_orbital_period_in_earth_years { 11.862615 };
    const double saturn_orbital_period_in_earth_years { 29.447498 };
    const double uranus_orbital_period_in_earth_years { 84.016846 };
    const double neptune_orbital_period_in_earth_years { 164.79132 };

    space_age::space_age(double age_in_seconds)
    {
        space_age_in_seconds = age_in_seconds;
    }
    double space_age::seconds() const
    {
        return space_age_in_seconds;    
    }
    double space_age::on_earth() const
    {
        return space_age_in_seconds / earth_year_in_seconds;
    }
    double space_age::on_mercury() const
    {
        return on_earth() / mercury_orbital_period_in_earth_years;
    }

    double space_age::on_venus() const
    {
        return on_earth() / venus_orbital_period_in_earth_years;
    }

    double space_age::on_mars() const
    {
        return on_earth() / mars_orbital_period_in_earth_years;
    }

    double space_age::on_jupiter() const
    {
        return on_earth() / jupiter_orbital_period_in_earth_years;
    }

    double space_age::on_saturn() const
    {
        return on_earth() / saturn_orbital_period_in_earth_years;
    }

    double space_age::on_uranus() const
    {
        return on_earth() / uranus_orbital_period_in_earth_years;
    }

    double space_age::on_neptune() const
    {
        return on_earth() / neptune_orbital_period_in_earth_years;
    }

}  // namespace space_age
