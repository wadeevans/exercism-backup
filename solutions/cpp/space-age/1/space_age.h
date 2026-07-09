#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {

    class space_age
    {
    public:
        space_age(long int age);
        long int seconds() const;
        double on_earth() const;
        float on_mercury() const;
        float on_venus() const;
        double on_mars() const;
        float on_jupiter() const;
        float on_saturn() const;
        float on_uranus() const;
        float on_neptune() const;
    private:
        long int age_in_seconds;
    };

}  // namespace space_age

#endif // SPACE_AGE_H