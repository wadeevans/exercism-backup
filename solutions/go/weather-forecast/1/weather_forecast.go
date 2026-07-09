// Package weather provides tools to
// provide weather forecasts for named cities.
package weather

// CurrentCondition is used to store current weather condition for a city.
var CurrentCondition string
// CurrentLocation is used to store a city name.
var CurrentLocation string

// Forecast returns the forecast for a named city.
func Forecast(city, condition string) string {
	CurrentLocation, CurrentCondition = city, condition
	return CurrentLocation + " - current weather condition: " + CurrentCondition
}
