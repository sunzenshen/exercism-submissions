package gigasecond

import "time"

// Gigasecond is a giga of seconds
const Gigasecond int64 = 1e18

// AddGigasecond returns when a gigasecond will occur after a given time
func AddGigasecond(input time.Time) time.Time {
	return input.Add(time.Duration(Gigasecond))
}
