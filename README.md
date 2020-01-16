# CNA_groundhog_2018

Second year project in C++ in which the goal is to extract some relevant information from the data received in real-time on standard input in order to detect weather aberrations (droughts, severe colds, hurricanes or any other extreme climatic condition whatsoever) as soon as possible.
Once enough data has been received, the program output : a) the temperature increase average, g, observed on the last period, b) the relative temperature evolution, r, between the last given temperature and the temperature observed n-days ago, c) the standard deviation, s, of the temperatures observed during the last period and d) when appropriate, an alert as soon as it detects a switch in global tendency.
The program continue to read until STOP is found. When it is the case it displays : The total number of tendency switches observed on the whole time-series and the list of the five biggest aberrations observed on the whole time-series(sorted by decreasing weird-ness).

USING :

1) Make && ./groundhog [period]

or

1) Make && ./groundhog 7 < value_test

EXEMPLE :

> 37.7

> 38.9

> 29.9

> STOP
