package gigasecond

import "time"

// Gigasecond is 10^9 seconds
const Gigasecond = 1e9 * time.Second

// AddGigasecond returns when a gigasecond will occur after a given time
func AddGigasecond(input time.Time) time.Time {
	return input.Add(Gigasecond)
}
