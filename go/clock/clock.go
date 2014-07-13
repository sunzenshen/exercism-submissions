package clock

import "strconv"

// Clock holds the time in hours and minutes, but no date.
type Clock struct {
	hour, minute int
}

// New creates a Clock from input hours and minutes.
func New(h int, m int) Clock {
	newHour := h + m/60
	newMinute := m
	if m < 0 {
		newHour--
	}
	if newHour < 0 {
		newHour = 24 - (absInt(newHour) % 24)
	}
	if newMinute < 0 {
		newMinute = 60 - (absInt(newMinute) % 60)
	}
	newHour = newHour % 24
	newMinute = newMinute % 60
	return Clock{hour: newHour, minute: newMinute}
}

// String returns the string representation of the clock.
func (c Clock) String() string {
	disp := ""
	if c.hour < 10 {
		disp += "0"
	}
	disp = disp + strconv.Itoa(c.hour) + ":"
	if c.minute < 10 {
		disp += "0"
	}
	disp = disp + strconv.Itoa(c.minute)
	return disp
}

// Add returns a new Clock with some minutes added to the stored time.
func (c Clock) Add(a int) Clock {
	return New(c.hour, c.minute+a)
}

func absInt(i int) int {
	if i < 0 {
		return -i
	}
	return i
}
