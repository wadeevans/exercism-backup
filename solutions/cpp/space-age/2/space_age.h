#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

#include <cstdint>

#define EARTH_YEAR_IN_SECONDS 31557600
#define MERCURY_ORBITAL_PERIOD_IN_EARTH_YEARS 0.2408467
#define VENUS_ORBITAL_PERIOD_IN_EARTH_YEARS 0.61519726
#define MARS_ORBITAL_PERIOD_IN_EARTH_YEARS 1.8808158
#define JUPITER_ORBITAL_PERIOD_IN_EARTH_YEARS 11.862615
#define SATURN_ORBITAL_PERIOD_IN_EARTH_YEARS 29.447498
#define URANUS_ORBITAL_PERIOD_IN_EARTH_YEARS 84.016846
#define NEPTUNE_ORBITAL_PERIOD_IN_EARTH_YEARS 164.79132
namespace space_age {

    class space_age
    {
    public:
        space_age(std::int64_t age_in_seconds);
        long int seconds() const;
        double on_earth() const;
        double on_mercury() const;
        double on_venus() const;
        double on_mars() const;
        double on_jupiter() const;
        double on_saturn() const;
        double on_uranus() const;
        double on_neptune() const;
    private:
        std::int64_t space_age_in_seconds;
    };

}  // namespace space_age

#endif // SPACE_AGE_H