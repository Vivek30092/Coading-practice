% Rule to convert Celsius to Fahrenheit
celsius_to_fahrenheit(Celsius, Fahrenheit) :-
    Fahrenheit is Celsius * 9 / 5 + 32.

% Rule to check if the temperature is below freezing (below 0°C)
below_freezing(Temperature) :-
    Temperature < 0.
